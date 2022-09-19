using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

#if PLATFORM_ANDROID
using GoogleARCore;
using UnityEngine.Android;
#endif

public class GPSManager : MonoBehaviour
{
    private static GPSManager s_instance;
    private static bool m_initOnce;

    ////////////////////////////////////////////////////////////
    // GPS
    [Header("GPS Accuracy")]
    public float DesiredAccuracyInMeters = 1.0f;
    public float UpdateAccuracyInMeters = 0.1f;

    [Header("Map Tile Parameters")]
    public int MapTileScale = 16;
    public int MapTileSizePixels = 512;
    public int MapTileZoomLevel = 16;
    public MapEnvelope mapEnvelope;
    public MapLocation mapCenter;
    public VectorD3 mapWorldCenter;
    public Vector2 mapScale;

    Vector3 m_expectedNorth;
    internal Vector3 m_currNorth;
    private double first_Lat = 0;
    private double first_Long = 0;
    private double current_Lat = 0;
    private double current_Long = 0;

    private bool gpsStarted;
    private LocationInfo location;
    private const float m_thresholdMax = 0.98f;
    private bool bCantGPS;
    private bool bGPSReadyNotNorth;
    private bool bGPSReadyComplete;

    public double Latitude
    {
        get { return current_Lat; }
    }

    public double Longitude
    {
        get { return current_Long; }
    }

    public bool IsCanGPS
    {
        get
        {
            return !bCantGPS;
        }
    }

    public bool IsGPSReadyComplete
    {
        get
        {
            return bGPSReadyComplete;
        }
    }

    public bool IsGPSReadyNotNorth
    {
        get
        {
            return bGPSReadyNotNorth;
        }
    }

    public static GPSManager Instance
    {
        get
        {
            if (s_instance == null)
            {
                s_instance = FindObjectOfType<GPSManager>();
                if (s_instance == null)
                {
                    // Create gameObject and add component
                    s_instance = (new GameObject("GPSManager")).AddComponent<GPSManager>();
                }
            }
            return s_instance;
        }
    }

    private void Initialize()
    {
        if (m_initOnce) { return; }
        m_initOnce = true;

        gpsStarted = false;
        bGPSReadyNotNorth = false;
        bGPSReadyComplete = false;

        mapWorldCenter = new VectorD3();
        mapCenter = new MapLocation(0, 0);
        bCantGPS = false;
        
        DontDestroyOnLoad(this);
    }

    private void Awake()
    {
#if UNITY_ANDROID
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
            Permission.RequestUserPermission(Permission.FineLocation);
#endif

        Instance.Initialize();

#if UNITY_EDITOR
        bCantGPS = false;
        gpsStarted = true;
        bGPSReadyComplete = true;
        m_currNorth = new Vector3(0, 0, 1);
        first_Lat = 0.0d;
        first_Long = 0.0d;
        CenterMap(current_Lat, current_Long);
#else
        StartCoroutine(GPSLoader());
#endif
    }

    IEnumerator GPSLoader()
    {
        Input.location.Start(1.0f, 0.1f);
        Input.compass.enabled = true;
        yield return null;

        int maxWait = 20;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds(1.0f);
            maxWait -= 1;
        }

        if (maxWait < 1)
        {
            Debug.Log("Timed out");
            //bCantGPS = true;
            StartCoroutine(GPSLoader());
            yield break;
        }

        if (Input.location.status != LocationServiceStatus.Running)
        {
            Debug.Log("Unable to determine device location");
            //bCantGPS = true;
            StartCoroutine(GPSLoader());
            yield break;
        }
        else
        {
            location = Input.location.lastData;
            first_Lat = location.latitude * 1.0d;
            first_Long = location.longitude * 1.0d;
            gpsStarted = true;
            CenterMap(location.latitude, location.longitude);
            bCantGPS = false;
        }
    }

    // Use this for initialization
    private void Start()
    {
    }

    private void Update()
    {
        if (gpsStarted)
        {
#if UNITY_EDITOR
            //current_Lat = 37.77132d;
            //current_Long = 128.87023d;
            current_Lat = 37.490454d;
            current_Long = 127.977180d;
#else
            location = Input.location.lastData;
            current_Lat = location.latitude * 1.0d;
            current_Long = location.longitude * 1.0d;

            CalcTrueNorth();
            bGPSReadyNotNorth = true;
            if (m_uNumOfItem < 40) { return; }

            bGPSReadyComplete = true;
#endif
        }
    }

    private void CalcTrueNorth()
    {
        if (Camera.main == null || Input.compass == null) return;

        float value = Input.compass.magneticHeading;
#if false
        Vector3 deviceForward = (Quaternion.Euler(0f, Frame.Pose.rotation.eulerAngles.y, 0f) * Vector3.forward).normalized;
#else
        Vector3 deviceForward = (Quaternion.Euler(0f, Camera.main.transform.rotation.eulerAngles.y, 0f) * Vector3.forward).normalized;
#endif
        m_expectedNorth = (Quaternion.Euler(0, -value, 0) * deviceForward).normalized;

        Vector3 estimatedDir;
        if (MovingAverageFilter_(m_expectedNorth, out estimatedDir, MaxCompassLength) == false) return;

        Vector3 avgDir = GetAvgDirectionVector(estimatedDir);

        if (Vector3.Dot(m_currNorth, avgDir) > m_thresholdMax) return;

        m_currNorth = avgDir;
    }

    Vector3 m_dprevAvg;
    uint m_uNumOfItem;
    private Vector3 GetAvgDirectionVector(Vector3 etm_dir)
    {
        if ((uint.MaxValue - 10) <= m_uNumOfItem)
        {
            m_uNumOfItem = 0;
            m_dprevAvg = Vector3.zero;
        }

        m_dprevAvg = m_dprevAvg + (etm_dir - m_dprevAvg) / ++m_uNumOfItem;

        return m_dprevAvg;
    }

    const int MaxCompassLength = 10;
    List<Vector3> m_listCompass = new List<Vector3>(MaxCompassLength);
    private bool MovingAverageFilter_(Vector3 value, out Vector3 output_dir, int collectCount)
    {
        m_listCompass.Add(value);

        if (collectCount >= m_listCompass.Count)
        {
            output_dir = Vector3.zero;
            return false;
        }

        output_dir = m_listCompass.Aggregate(
            Vector3.zero,
            (sum, dir) => {
                sum += dir;
                return sum;
            },
            (sum) => sum / m_listCompass.Count
        );

        m_listCompass.Clear();

        return true;
    }

    /// <summary>
    /// GPS의 두 위도/경도 값으로 각도를 계산함.
    /// double angle = AngleFromCoordinate(current.lat, current.lon, destination.lat, destination.lon);
    /// compass.rotation = Quaternion.Slerp(compass.rotation, Quaternion.Euler(0, 0, Input.compass.magneticHeading + bearing), 100.0f);
    /// </summary>
    /// <param name="lat1"></param>
    /// <param name="lon1"></param>
    /// <param name="lat2"></param>
    /// <param name="lon2"></param>
    /// <returns>degree</returns>
    public double AngleFromCoordinate(double lat1, double lon1, double lat2, double lon2)
    {
        lat1 = deg2rad(lat1);
        lat2 = deg2rad(lat2);
        lon1 = deg2rad(lon1);
        lon2 = deg2rad(lon2);

        double dLon = (lon2 - lon1);
        double y = System.Math.Sin(dLon) * System.Math.Cos(lat2);
        double x = (System.Math.Cos(lat1) * System.Math.Sin(lat2)) - (System.Math.Sin(lat1) * System.Math.Cos(lat2) * System.Math.Cos(dLon));
        double brng = System.Math.Atan2(y, x);
        brng = rad2deg(brng);
        brng = (brng + 360) % 360;
        //brng = 360 - brng;

        return brng;
    }

    public double AngleFromCoordinate(double lat, double lon)
    {
        return AngleFromCoordinate(current_Lat, current_Long, lat, lon);
    }

    public Vector3 TrueDir(Vector3 up, double angle)
    {
        return (Quaternion.AngleAxis((float)angle, up) * m_currNorth).normalized;
    }

    /// <summary>
    /// GPS의 두 위도/경도 값으로 거리를 계산함.
    /// </summary>
    /// <param name="lat1">자신의 위도</param>
    /// <param name="lon1">자신의 경도</param>
    /// <param name="lat2">목적지 위도</param>
    /// <param name="lon2">목적지 경도</param>
    /// <param name="isMeter">true: meter, false: kilo meter</param>
    /// <returns>거리 값</returns>
    public static double GeoDistance(double lat1, double lon1, double lat2, double lon2, bool isMeter = true)
    {
        double theta = lon1 - lon2;
        double dist = System.Math.Sin(deg2rad(lat1)) * System.Math.Sin(deg2rad(lat2)) + System.Math.Cos(deg2rad(lat1)) * System.Math.Cos(deg2rad(lat2)) * System.Math.Cos(deg2rad(theta));

        dist = System.Math.Acos(dist);
        dist = rad2deg(dist);
        dist = dist * 60 * 1.1515;

        if (isMeter == true)
            dist = dist * 1609.344;
        else
            dist = dist * 1.609344;

        return dist;
    }

    public double GeoDistance(double lat, double lon, bool isMeter = true)
    {
        return GeoDistance(current_Lat, current_Long, lat, lon, isMeter);
    }

    private static double deg2rad(double deg)
    {
        return (deg * System.Math.PI / 180.0d);
    }

    private static double rad2deg(double rad)
    {
        return (rad * 180.0d / System.Math.PI);
    }

    public void CenterMap(double _Lat, double _Lon)
    {
        if (mapCenter == null) mapCenter = new MapLocation(_Lat, _Lon);
        mapCenter.Latitude = _Lat;
        mapCenter.Longitude = _Lon;
        mapWorldCenter.x = GoogleMapUtils.LonToX(mapCenter.Longitude);
        mapWorldCenter.y = GoogleMapUtils.LatToY(mapCenter.Latitude);

        mapScale.x = GoogleMapUtils.CalculateScaleX(_Lat, MapTileSizePixels, MapTileScale, MapTileZoomLevel);
        mapScale.y = GoogleMapUtils.CalculateScaleY(_Lon, MapTileSizePixels, MapTileScale, MapTileZoomLevel);

        var lon1 = GoogleMapUtils.adjustLonByPixels(_Lon, -MapTileSizePixels / 2, MapTileZoomLevel);
        var lat1 = GoogleMapUtils.adjustLatByPixels(_Lat, MapTileSizePixels / 2, MapTileZoomLevel);

        var lon2 = GoogleMapUtils.adjustLonByPixels(_Lon, MapTileSizePixels / 2, MapTileZoomLevel);
        var lat2 = GoogleMapUtils.adjustLatByPixels(_Lat, -MapTileSizePixels / 2, MapTileZoomLevel);

        mapEnvelope = new MapEnvelope(lon1, lat1, lon2, lat2);
    }

    public Vector3 ConvertToWorldSpace(double longitude, double latitude)
    {
        //convert GPS lat/long to world x/y 
        var x = ((GoogleMapUtils.LonToX(longitude)
            - mapWorldCenter.x) * mapScale.x);
        var y = (GoogleMapUtils.LatToY(latitude)
            - mapWorldCenter.y) * mapScale.y;

        return new Vector3((float)x, -((float)y), 0);
    }
}
