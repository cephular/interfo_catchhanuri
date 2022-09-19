using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[AddComponentMenu("Mapping/GoogleMapTile")]
public class GoogleMapTile : MonoBehaviour
{
    public enum MapType
    {
        RoadMap,
        Satellite,
        Terrain,
        Hybrid
    }

    //Google Maps API Staticmap URL
    private const string GOOGLE_MAPS_URL = "https://maps.googleapis.com/maps/api/staticmap";

    [Header("Map Settings")]
    [Range(1, 20)]
    [Tooltip("Zoom Level, 1=global - 20=house")]
    public int zoomLevel = 1;
    [Tooltip("Type of map, Road, Satellite, Terrain or Hybrid")]
    public MapType mapType = MapType.RoadMap;
    [Range(64, 1024)]
    [Tooltip("Size in pixels of the map image")]
    public int size = 512;
    [Tooltip("Double the pixel resolution of the image returned")]
    public bool doubleResolution = true;
    [Tooltip("Defines the origin of the map")]
    public MapLocation worldCenterLocation;

    [Header("Tile Settings")]
    [Tooltip("Sets the tiles position in tile units")]
    public Vector2 TileOffset;
    [Tooltip("Calculated tile center")]
    public MapLocation tileCenterLocation = new MapLocation(0d, 0d);
    [Tooltip("Calculated tile corners")]
    public VectorD3 TopLeftCorner;
    public VectorD3 BottomRightCorner;

    public bool bLoaded;
    public bool bLoading;

    private Renderer m_Renderer;

    //[Header("GPS Settings")]
    //[Tooltip("GPS service used to locate world center")]
    //public GPSLocationService gpsLocationService;
    private double lastGPSUpdate;

    // Use this for initialization
    void Start()
    {
        bLoaded = false;
        bLoading = false;
        worldCenterLocation.Latitude = GPSManager.Instance.Latitude;
        worldCenterLocation.Longitude = GPSManager.Instance.Longitude;

        m_Renderer = GetComponent<Renderer>();
        if (m_Renderer == null) print("why renderer null???");

        RefreshMapTile();
        //StartCoroutine(_RefreshMapTile());
    }

    // Update is called once per frame
    void Update()
    {
        //지금 안씀
#if false
            //check if a new location has been acquired
            if (GPSManager.Instance.IsCanGPS &&
                lastGPSUpdate < GPSManager.Instance.Timestamp)
            {
                lastGPSUpdate = GPSManager.Instance.Timestamp;
                worldCenterLocation.Latitude = (float)GPSManager.Instance.Latitude;
                worldCenterLocation.Longitude = (float)GPSManager.Instance.Longitude;
                print("GoogleMapTile refreshing map texture");
                RefreshMapTile();
            }
#endif
    }

    public void RefreshMapTile()
    {
        if (bLoading == true) return;
        bLoading = true;

        zoomLevel = GPSManager.Instance.MapTileZoomLevel != 0 ? GPSManager.Instance.MapTileZoomLevel : zoomLevel;
        size = GPSManager.Instance.MapTileSizePixels != 0 ? GPSManager.Instance.MapTileSizePixels : size;
        if (gameObject.activeSelf == false) return;

        {
            //find the center lat/long of the tile
            tileCenterLocation.Latitude = GoogleMapUtils.adjustLatByPixels(worldCenterLocation.Latitude, (int)(size * 1 * TileOffset.y), zoomLevel);
            tileCenterLocation.Longitude = GoogleMapUtils.adjustLonByPixels(worldCenterLocation.Longitude, (int)(size * 1 * TileOffset.x), zoomLevel);

            var queryString = "";

            //build the query string parameters for the map tile request
            queryString += "center=" + WWW.UnEscapeURL(string.Format("{0},{1}", tileCenterLocation.Latitude, tileCenterLocation.Longitude));
            queryString += "&zoom=" + zoomLevel.ToString();
            queryString += "&size=" + WWW.UnEscapeURL(string.Format("{0}x{0}", size));
            queryString += "&scale=" + (doubleResolution ? "2" : "1");
            queryString += "&maptype=" + mapType.ToString().ToLower();
            queryString += "&format=" + "png";

            //adding the map styles
            queryString += "&style=element:geometry|invert_lightness:true|weight:3.1|hue:0x00ffd5";
            queryString += "&style=element:labels|visibility:off";
            queryString += "&language=ko";
            //queryString += "&key=AIzaSyDZQ8hkIl14GWwItpykQiWED5PKF1Sqk94";
            queryString += "&key=AIzaSyCoz3jJduhKaWAIOjXBDGU5ebl9t6hZI6w";

            //check if script is on a mobile device and using a location service 
            var usingSensor = false;
#if MOBILE_INPUT
            usingSensor = Input.location.isEnabledByUser 
							&& Input.location.status == LocationServiceStatus.Running 
							&& gpsLocationService !=null;
#endif
            //queryString += "&sensor=" + (usingSensor ? "true" : "false");

            //set map bounds rect
            if (TopLeftCorner == null) TopLeftCorner = new VectorD3();
            if (BottomRightCorner == null) BottomRightCorner = new VectorD3();

            TopLeftCorner.x = GoogleMapUtils.adjustLonByPixels(tileCenterLocation.Longitude, -size, zoomLevel);
            TopLeftCorner.y = GoogleMapUtils.adjustLatByPixels(tileCenterLocation.Latitude, size, zoomLevel);

            BottomRightCorner.x = GoogleMapUtils.adjustLonByPixels(tileCenterLocation.Longitude, size, zoomLevel);
            BottomRightCorner.y = GoogleMapUtils.adjustLatByPixels(tileCenterLocation.Latitude, -size, zoomLevel);

            WebRequestHandler.Instance.GetTextureFromWebServer(GOOGLE_MAPS_URL + "?" + queryString, (T2) =>
            {
                print("bbbbb");
                //Destroy(GetComponent<Renderer>().material.mainTexture);
                m_Renderer.material.SetTexture("_MainTex", T2);
                //GetComponent<Renderer>().material.mainTexture = T2;
                bLoaded = true;
                bLoading = false;
            });
        }
        //StartCoroutine(_RefreshMapTile());
    }

    public void RefreshMapTile(double _Lat, double _Lon)
    {
        worldCenterLocation.Latitude = _Lat;
        worldCenterLocation.Longitude = _Lon;
        RefreshMapTile();
        //StartCoroutine(_RefreshMapTile());
    }

    IEnumerator _RefreshMapTile()
    {
        //find the center lat/long of the tile
        tileCenterLocation.Latitude = GoogleMapUtils.adjustLatByPixels(worldCenterLocation.Latitude, (int)(size * 1 * TileOffset.y), zoomLevel);
        tileCenterLocation.Longitude = GoogleMapUtils.adjustLonByPixels(worldCenterLocation.Longitude, (int)(size * 1 * TileOffset.x), zoomLevel);

        var queryString = "";

        //build the query string parameters for the map tile request
        queryString += "center=" + WWW.UnEscapeURL(string.Format("{0},{1}", tileCenterLocation.Latitude, tileCenterLocation.Longitude));
        queryString += "&zoom=" + zoomLevel.ToString();
        queryString += "&size=" + WWW.UnEscapeURL(string.Format("{0}x{0}", size));
        queryString += "&scale=" + (doubleResolution ? "2" : "1");
        queryString += "&maptype=" + mapType.ToString().ToLower();
        queryString += "&format=" + "png";

        //adding the map styles
        queryString += "&style=element:geometry|invert_lightness:true|weight:3.1|hue:0x00ffd5";
        queryString += "&style=element:labels|visibility:off";
        queryString += "&language=ko";
        queryString += "&key=AIzaSyDZQ8hkIl14GWwItpykQiWED5PKF1Sqk94";

        //check if script is on a mobile device and using a location service 
        var usingSensor = false;
#if MOBILE_INPUT
            usingSensor = Input.location.isEnabledByUser 
							&& Input.location.status == LocationServiceStatus.Running 
							&& gpsLocationService !=null;
#endif
        queryString += "&sensor=" + (usingSensor ? "true" : "false");

        //set map bounds rect
        TopLeftCorner.x = GoogleMapUtils.adjustLonByPixels(tileCenterLocation.Longitude, -size, zoomLevel);
        TopLeftCorner.y = GoogleMapUtils.adjustLatByPixels(tileCenterLocation.Latitude, size, zoomLevel);

        BottomRightCorner.x = GoogleMapUtils.adjustLonByPixels(tileCenterLocation.Longitude, size, zoomLevel);
        BottomRightCorner.y = GoogleMapUtils.adjustLatByPixels(tileCenterLocation.Latitude, -size, zoomLevel);

        //print(string.Format("Tile {0}x{1} requested with {2}", TileOffset.x, TileOffset.y, queryString));

        //finally, we request the image
        var req = new WWW(GOOGLE_MAPS_URL + "?" + queryString);
        print(GOOGLE_MAPS_URL + "?" + queryString);

        //yield until the service responds
        yield return req;

        //first destroy the old texture first
        //Destroy(GetComponent<Renderer>().material.mainTexture);
        //when the image returns set it as the tile texture
        //GetComponent<Renderer>().material.mainTexture = req.texture;
        m_Renderer.material.mainTexture = req.texture;

        //if (TileOffset.x == 0 && TileOffset.y == 0)
        //{
        //    GPSManager.Instance.MapRedrawn();
        //}
        bLoaded = true;
        bLoading = false;
    }
}
