using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using TMPro;

// 마커 객체
public class TreasureMapMarker
{
    public int Idx;
    public GameObject Marker;
    public Vector3 lScale;
    public double dLat, dLon;

    public TreasureMapMarker()
    {
        Marker = null;
        lScale = new Vector3(1, 1, 1);
        Idx = -1;
        dLat = dLon = 0d;
    }

    public void SetActivate(int idx)
    {
        Idx = idx;
        Marker.SetActive(true);
    }

    public void SetDeactivate()
    {
        Idx = -1;
        Marker.SetActive(false);
    }

    public void UpdateCount(int val)
    {
        TextMeshPro TCounter = Marker.transform.Find("CountText").GetComponent<TextMeshPro>();
        TCounter.text = val.ToString();
    }
}

public class TBMapView : MonoBehaviour
{
    [SerializeField]
    private GoogleMapTileController m_MapTileController;
    [SerializeField]
    private GameObject m_MapTiles;
    [SerializeField]
    private Image m_BlindMapImg;
    [SerializeField]
    private float m_fTileScale; // 16
    [SerializeField]
    private int m_iZoomLevel; // 17
    [SerializeField]
    private int m_iMapPixelSize; // 512
    private VectorD3 m_vDeltaValue;
    private bool bMapControllable;
    private bool m_bBlindCosoutinStart;
    private VectorD2 m_CenterGeoData;

    ///// UI
    private bool bViewDrawingMap;

    [SerializeField]
    private GameObject DrawingMapPanel;
    


    // 지도용 카메라
    [SerializeField]
    private  Camera MapCamera;



    // 마커 프리팹
    [SerializeField]
    private GameObject MapMarkerPrefab;



    // 내 위치 마커 프리팹
    [SerializeField]
    private GameObject MyMapMarkerPrefab;
    internal TreasureMapMarker m_MyMarker;


    // 마커 갱신 루틴이 돌고있는지
    //private bool bRunningMarkerCoroutine;
    // 디비 클래스 저장용.
    private TBDatabase m_tDB = null;
    // 마커 오브젝트 풀 컨테이너.
    private List<TreasureMapMarker> m_MapMarkers;
    // 활성화 되어있는 마커 목록.
    private Dictionary<int, TreasureMapMarker> m_ActivatedMapMarkers;

    /**
     * 강일여자고등학교 
     * 관동중학교
     * 강릉역
     */
    [SerializeField]
    private double[] m_lstAreaLat;
    [SerializeField]
    private double[] m_lstAreaLon;

    [SerializeField]
    private Image[] m_imgMovePosition;
    [SerializeField]
    private Sprite[] m_sprMovePositionOn;
    [SerializeField]
    private Sprite[] m_sprMovePositionOff;

    [SerializeField]
    private GameObject m_prefabMapMarker_Simulation;
    private GameObject m_MapMarker_Simulation;
    [SerializeField]
    private GameObject m_prefabMapMarker_ArtHall;
    private GameObject m_MapMarker_ArtHall;
    [SerializeField]
    private GameObject m_prefabMapMarker_Festival;
    private GameObject m_MapMarker_Festival;
    [SerializeField]
    private GameObject m_prefabMapMarker_TMall;
    private GameObject m_MapMarker_TMall;
    [SerializeField]
    private GameObject m_prefabMapMarker_ParkingPlace;
    private GameObject m_MapMarker_ParkingPlace;

    // 외부에서 디비를 받아서 저장할 용도로 만든 함수
    public void SetTBDatabase(ref TBDatabase _tDB)
    {
        m_tDB = _tDB;
    }

    private void ChangeOnButtonImage(int cases)
    {
        for (int i = 0; i < m_imgMovePosition.Length; i++)
        {
            if (i == cases)
                m_imgMovePosition[i].sprite = m_sprMovePositionOn[i];
            else
                m_imgMovePosition[i].sprite = m_sprMovePositionOff[i];
        }
    }

    public void SetMapPosition(int selMode)
    {
        // 맵 체인지 중에는 안됨.
        if (bMapControllable == false) return;

        ChangeOnButtonImage(selMode);

        double _lat = 0d, _lon = 0d;
        switch(selMode)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                _lat = m_lstAreaLat[selMode];
                _lon = m_lstAreaLon[selMode];
                break;

            default:
                _lat = GPSManager.Instance.Latitude;
                _lon = GPSManager.Instance.Longitude;
                break;
        }

        m_CenterGeoData = new VectorD2(_lat, _lon);

        m_MapTileController.SetLoadedValue(false);
        m_MapTileController.RefreshMapTile(m_CenterGeoData.x, m_CenterGeoData.y);

        bMapControllable = false;
        StartCoroutine(MinusBlindMapAlpha());

    }

    private void Awake()
    {
        bMapControllable = false;
        m_bBlindCosoutinStart = false;
        m_vDeltaValue = new VectorD3();

        ///////////////////////////////////////////////////////////////////////
        //초기 위치 선정
        //transform.position = new Vector3(0.0f, 2000.0f, 0.0f);

        //MapCamera.transform.localPosition = new Vector3(0.0f, 0.0f, -0.3f);
        //MapCamera.transform.rotation = Quaternion.Euler(90.0f, 0.0f, 0.0f);
        //MapCamera.transform.localScale = new Vector3(1.0f, 1.0f, 1.0f);
        // 최대 확대는 16.0f, 최대 축소는 140.0f
        MapCamera.fieldOfView = 60.0f;

        //X = +-7(음수는 지도가 왼쪽으로 이동되고, 양수는 오른쪽으로 이동)
        //Z = +-5(음수는 지도가 아래로 이동되고, 양수는 위로 이동)
        //MapPlane.transform.position = new Vector3(0.0f, 0.0f, 0.0f);
        //MapPlane.transform.rotation = Quaternion.Euler(0.0f, 180.0f, 0.0f);
        //MapPlane.transform.localScale = new Vector3(1.3f, 1.0f, 1.0f);


        ///////////////////////////////////////////////////////////////////////
        // 마커 관련
        // 마커 오브젝트 풀링을 위해 200개의 객체를 미리 생성.
        m_MapMarkers = new List<TreasureMapMarker>(200);
        for (int i = 0; i < 200; i++)
        {
            TreasureMapMarker a = new TreasureMapMarker();
            m_MapMarkers.Add(a);
        }
        m_ActivatedMapMarkers = new Dictionary<int, TreasureMapMarker>();
    }

    private void Start()
    {
        if (m_MyMarker == null)
        {
            m_MyMarker = new TreasureMapMarker();
            m_MyMarker.Marker = Instantiate(MyMapMarkerPrefab);
            m_MyMarker.Marker.transform.SetParent(m_MapTiles.transform);
            m_MyMarker.lScale = m_MyMarker.Marker.transform.localScale;
        }

        if (m_MapMarker_Simulation == null)
        {
            m_MapMarker_Simulation = Instantiate(m_prefabMapMarker_Simulation);
            m_MapMarker_Simulation.transform.SetParent(m_MapTiles.transform);
        }

        if (m_MapMarker_ArtHall == null)
        {
            m_MapMarker_ArtHall = Instantiate(m_prefabMapMarker_ArtHall);
            m_MapMarker_ArtHall.transform.SetParent(m_MapTiles.transform);
        }


        if (m_MapMarker_Festival == null)
        {
            m_MapMarker_Festival = Instantiate(m_prefabMapMarker_Festival);
            m_MapMarker_Festival.transform.SetParent(m_MapTiles.transform);
        }

        if (m_MapMarker_TMall == null)
        {
            m_MapMarker_TMall = Instantiate(m_prefabMapMarker_TMall);
            m_MapMarker_TMall.transform.SetParent(m_MapTiles.transform);
        }

        if (m_MapMarker_ParkingPlace == null)
        {
            m_MapMarker_ParkingPlace = Instantiate(m_prefabMapMarker_ParkingPlace);
            m_MapMarker_ParkingPlace.transform.SetParent(m_MapTiles.transform);
        }

        DrawingMapPanel.SetActive(false);

        StartCoroutine(InitAfterGPSStart());
    }

    // Update is called once per frame
    void Update()
    {
        // 터치는 행사장안내 지도를 보는 상태에서는 동작 안함.
        if (bMapControllable == true)
        {
            TouchManager();
        }

        if (GPSManager.Instance.IsCanGPS == true)
        {
            HelpMarkerPositioning();
            RepositioningMarker();
            //Vector3 _pos = GPSManager.Instance.ConvertToWorldSpace(GPSManager.Instance.Longitude, GPSManager.Instance.Latitude);
            //m_MyMarker.Marker.transform.position = _pos + m_MapTiles.transform.position;
        }
    }

    private Ray m_ray;
    private bool m_bDrag = false;
    private Vector3 m_diff = new Vector3();
    private RaycastHit m_hit;
    void TouchManager()
    {
        Vector3 _bfDiff;

        if (bViewDrawingMap == true) return;

        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer)
        {
            // 손가락으로 줌 인/아웃의 경우 무조건 2개의 손가락이 터치가 되어야 하기 때문에 Count = 2일 경우만 동작.
            // 아닐 경우는 지도를 이동시키는 목적밖에 없음.
            if (Input.touchCount == 2)
            {
                m_bDrag = false;
                if (/*Input.touchCount == 2 &&*/ Input.GetTouch(0).phase == TouchPhase.Moved && Input.GetTouch(1).phase == TouchPhase.Moved)
                {
                    Vector2 curDist = Input.GetTouch(0).position - Input.GetTouch(1).position;
                    Vector2 prevDist = ((Input.GetTouch(0).position - Input.GetTouch(0).deltaPosition) - (Input.GetTouch(1).position - Input.GetTouch(1).deltaPosition));
                    float touchDelta = curDist.magnitude - prevDist.magnitude;
                    float bfFov = MapCamera.fieldOfView;
                    MapCamera.fieldOfView -= touchDelta * Time.deltaTime;
                    if (MapCamera.fieldOfView > 110)
                    {
                        if (m_iZoomLevel > 15)
                        {
                            VectorD3 _vLatLon = new VectorD3();
                            _vLatLon.x = GoogleMapUtils.adjustLatByPixels(m_CenterGeoData.x, (int)(m_iMapPixelSize * 1 * -1), m_iZoomLevel);
                            _vLatLon.y = GoogleMapUtils.adjustLonByPixels(m_CenterGeoData.y, (int)(m_iMapPixelSize * 1 * 1), m_iZoomLevel);
                            m_vDeltaValue.x = (_vLatLon.x - m_CenterGeoData.x) / m_fTileScale;
                            m_vDeltaValue.y = (_vLatLon.y - m_CenterGeoData.y) / m_fTileScale;
                            Vector3 m_bfDiff = Vector3.zero - m_MapTiles.transform.position;
                            m_CenterGeoData.x = m_CenterGeoData.x + (m_bfDiff.y * m_vDeltaValue.x);
                            m_CenterGeoData.y = m_CenterGeoData.y + (m_bfDiff.x * m_vDeltaValue.y);

                            // 기본값
                            MapCamera.fieldOfView = 60;
                            SetGoogleMapParams(m_fTileScale, m_iMapPixelSize, m_iZoomLevel - 1);

                            m_MapTileController.SetLoadedValue(false);
                            m_MapTileController.RefreshMapTile(m_CenterGeoData.x, m_CenterGeoData.y);

                            bMapControllable = false;
                            StartCoroutine(MinusBlindMapAlpha());
                            return;
                        }
                        else
                        {
                            MapCamera.fieldOfView = bfFov;
                            return;
                        }
                    }
                    else if (MapCamera.fieldOfView < 20)
                    {
                        if (m_iZoomLevel < 17)
                        {
                            VectorD3 _vLatLon = new VectorD3();
                            _vLatLon.x = GoogleMapUtils.adjustLatByPixels(m_CenterGeoData.x, (int)(m_iMapPixelSize * 1 * -1), m_iZoomLevel);
                            _vLatLon.y = GoogleMapUtils.adjustLonByPixels(m_CenterGeoData.y, (int)(m_iMapPixelSize * 1 * 1), m_iZoomLevel);
                            m_vDeltaValue.x = (_vLatLon.x - m_CenterGeoData.x) / m_fTileScale;
                            m_vDeltaValue.y = (_vLatLon.y - m_CenterGeoData.y) / m_fTileScale;
                            Vector3 m_bfDiff = Vector3.zero - m_MapTiles.transform.position;
                            m_CenterGeoData.x = m_CenterGeoData.x + (m_bfDiff.y * m_vDeltaValue.x);
                            m_CenterGeoData.y = m_CenterGeoData.y + (m_bfDiff.x * m_vDeltaValue.y);

                            // 기본값
                            MapCamera.fieldOfView = 60;
                            SetGoogleMapParams(m_fTileScale, m_iMapPixelSize, m_iZoomLevel + 1);

                            m_MapTileController.SetLoadedValue(false);
                            m_MapTileController.RefreshMapTile(m_CenterGeoData.x, m_CenterGeoData.y);

                            bMapControllable = false;
                            StartCoroutine(MinusBlindMapAlpha());
                            return;
                        }
                        else
                        {
                            MapCamera.fieldOfView = bfFov;
                            return;
                        }
                    }
                }
            }
            else if (Input.touchCount == 1)
            {
                Touch touch = Input.GetTouch(0); // 첫번째 손가락 좌표

                if (m_bDrag == false && touch.phase == TouchPhase.Began)
                {
                    m_ray = MapCamera.ScreenPointToRay(Input.mousePosition);
                    LayerMask _layerMask = LayerMask.GetMask("Maps");
                    if (Physics.Raycast(m_ray, out m_hit, 100f, _layerMask))
                    {
                        m_bDrag = true;

                        m_diff = m_MapTiles.transform.position - m_hit.point;

                        VectorD3 _vLatLon = new VectorD3();
                        _vLatLon.x = GoogleMapUtils.adjustLatByPixels(m_CenterGeoData.x, (int)(m_iMapPixelSize * 1 * -1), m_iZoomLevel);
                        _vLatLon.y = GoogleMapUtils.adjustLonByPixels(m_CenterGeoData.y, (int)(m_iMapPixelSize * 1 * 1), m_iZoomLevel);
                        m_vDeltaValue.x = (_vLatLon.x - m_CenterGeoData.x) / m_fTileScale;
                        m_vDeltaValue.y = (_vLatLon.y - m_CenterGeoData.y) / m_fTileScale;
                    }
                }
                else if (m_bDrag && (touch.phase == TouchPhase.Moved || touch.phase == TouchPhase.Stationary))
                {

                    var pos = MapCamera.ScreenToWorldPoint(new Vector3(
                                                                    touch.position.x,
                                                                    touch.position.y,
                                                                    -MapCamera.transform.position.z));
                    Vector3 ksk = pos + m_diff;
                    ksk.z = 0.0f;
                    m_MapTiles.transform.position = ksk;
                }
                else if (m_bDrag && (touch.phase == TouchPhase.Ended || touch.phase == TouchPhase.Canceled))
                {
                    m_bDrag = false;

                    if (Vector3.Distance(Vector3.zero, m_MapTiles.transform.position) < m_fTileScale) return;

                    _bfDiff = Vector3.zero - m_MapTiles.transform.position;

                    m_CenterGeoData.x = m_CenterGeoData.x + (_bfDiff.y * m_vDeltaValue.x);
                    m_CenterGeoData.y = m_CenterGeoData.y + (_bfDiff.x * m_vDeltaValue.y);

                    m_MapTileController.SetLoadedValue(false);
                    m_MapTileController.RefreshMapTile(m_CenterGeoData.x, m_CenterGeoData.y);

                    bMapControllable = false;
                    StartCoroutine(MinusBlindMapAlpha());
                }
            }
        }
        /*else
        {
            // 줌
            {
                if (Input.mouseScrollDelta.y != 0.0f)
                {
                    float _scale = 2.0f * -1.0f; // FOV는 값이 커지면 시야각이 넓어지는 것이므로 뒤로 물러나는 효과(축소)가 발생한다.
                    float bfFov = MapCamera.fieldOfView;
                    MapCamera.fieldOfView += Input.mouseScrollDelta.y * _scale;

                    if (MapCamera.fieldOfView > 85)
                    {
                        if (m_iZoomLevel > 15)
                        {// 기본값
                            MapCamera.fieldOfView = 60;
                            SetGoogleMapParams(m_fTileScale, m_iMapPixelSize, m_iZoomLevel - 1);

                            m_MapTileController.SetLoadedValue(false);
                            m_MapTileController.RefreshMapTile(m_CenterGeoData.x, m_CenterGeoData.y);

                            bMapControllable = false;
                            StartCoroutine(MinusBlindMapAlpha());
                        }
                        else
                        {
                            MapCamera.fieldOfView = bfFov;
                        }
                    }

                    if (MapCamera.fieldOfView < 35)
                    {
                        if (m_iZoomLevel < 19)
                        {// 기본값
                            MapCamera.fieldOfView = 60;
                            SetGoogleMapParams(m_fTileScale, m_iMapPixelSize, m_iZoomLevel + 1);

                            m_MapTileController.SetLoadedValue(false);
                            m_MapTileController.RefreshMapTile(m_CenterGeoData.x, m_CenterGeoData.y);

                            bMapControllable = false;
                            StartCoroutine(MinusBlindMapAlpha());
                        }
                        else
                        {
                            MapCamera.fieldOfView = bfFov;
                        }
                    }
                }
            }

            // 이동
            {
                Vector3 _pos = Input.mousePosition;
                if (Input.GetMouseButtonDown(0) == true)
                {
                    m_ray = MapCamera.ScreenPointToRay(Input.mousePosition);
                    if (Physics.Raycast(m_ray, out m_hit, 100f))
                    {
                        m_bDrag = true;

                        m_diff = m_MapTiles.transform.position - m_hit.point;

                        VectorD3 _vLatLon = new VectorD3();
                        _vLatLon.x = GoogleMapUtils.adjustLatByPixels(m_CenterGeoData.x, (int)(m_iMapPixelSize * 1 * -1), m_iZoomLevel);
                        _vLatLon.y = GoogleMapUtils.adjustLonByPixels(m_CenterGeoData.y, (int)(m_iMapPixelSize * 1 * 1), m_iZoomLevel);
                        m_vDeltaValue.x = (_vLatLon.x - m_CenterGeoData.x) / m_fTileScale;
                        m_vDeltaValue.y = (_vLatLon.y - m_CenterGeoData.y) / m_fTileScale;
                    }
                }

                if (!m_bDrag) { return; }

                if (Input.GetMouseButtonUp(0) == true)
                {
                    m_bDrag = false;

                    if (Vector3.Distance(Vector3.zero, m_MapTiles.transform.position) < m_fTileScale) return;

                    //GPSManager.Instance.Timestamp++;
                    _bfDiff = Vector3.zero - m_MapTiles.transform.position;

                    m_CenterGeoData.x = m_CenterGeoData.x + (_bfDiff.y * m_vDeltaValue.x);
                    m_CenterGeoData.y = m_CenterGeoData.y + (_bfDiff.x * m_vDeltaValue.y);
                    m_MapTileController.SetLoadedValue(false);
                    m_MapTileController.RefreshMapTile(m_CenterGeoData.x, m_CenterGeoData.y);

                    bMapControllable = false;
                    StartCoroutine(MinusBlindMapAlpha());
                }
                else
                {
                    var pos = MapCamera.ScreenToWorldPoint(new Vector3(
                                                                    _pos.x,
                                                                    _pos.y,
                                                                    -MapCamera.transform.position.z));
                    Vector3 ksk = pos + m_diff;
                    m_MapTiles.transform.position = ksk;
                }
            }
        }*/
    }

    public void InitMinimapValues()
    {
        m_bDrag = false;
        m_bBlindCosoutinStart = false;
        //m_MapTiles.transform.position = new Vector3(0, 0, 0);
        m_MapTileController.SetLoadedValue(true);
        Color _StoreBlindMapColor = m_BlindMapImg.color;
        _StoreBlindMapColor.a = 0.0f;
        m_BlindMapImg.color = _StoreBlindMapColor;

        if(m_CenterGeoData == null) {
            m_CenterGeoData = new VectorD2(GPSManager.Instance.Latitude, GPSManager.Instance.Longitude);
        }

        if (GPSManager.Instance.IsCanGPS == true)
        {
            bMapControllable = true;
        }
    }

    public void OnDrawingMapViewOn()
    {
        bViewDrawingMap = true;
        DrawingMapPanel.SetActive(true);
    }

    public void OnDrawingMapViewOff()
    {
        bViewDrawingMap = false;
        DrawingMapPanel.SetActive(false);
    }

    public void SetGoogleMapParams(float _scale, int _pixel, int _zoom)
    {
        m_fTileScale = _scale;
        GPSManager.Instance.MapTileScale = (int)_scale;
        GPSManager.Instance.MapTileSizePixels = m_iMapPixelSize = _pixel;
        GPSManager.Instance.MapTileZoomLevel = m_iZoomLevel = _zoom;

        GPSManager.Instance.CenterMap(m_CenterGeoData.x, m_CenterGeoData.y);
    }

    public void RepositioningMarker()
    {
        Vector3 _pos;
        if (m_CenterGeoData == null)
        {
            return;
        }

        SetGoogleMapParams(m_fTileScale, m_iMapPixelSize, m_iZoomLevel);

        foreach (KeyValuePair<int, TreasureMapMarker> Val in m_ActivatedMapMarkers)
        {
            _pos = GPSManager.Instance.ConvertToWorldSpace(Val.Value.dLon, Val.Value.dLat);
            _pos = _pos + m_MapTiles.transform.position;
            _pos.z = -0.02f;
            Val.Value.Marker.transform.position = _pos;
        }

        if (m_MyMarker != null)
        {
            _pos = GPSManager.Instance.ConvertToWorldSpace(GPSManager.Instance.Longitude, GPSManager.Instance.Latitude);
            _pos = _pos + m_MapTiles.transform.position;
            _pos.z = -0.05f;
            m_MyMarker.Marker.transform.position = _pos;
        }

        if (m_MapMarker_Simulation != null)
        {
            _pos = GPSManager.Instance.ConvertToWorldSpace(127.978020d, 37.491877d);
            _pos = _pos + m_MapTiles.transform.position;
            _pos.z = -0.1f;
            m_MapMarker_Simulation.transform.position = _pos;
        }

        if (m_MapMarker_ArtHall != null)
        {
            _pos = GPSManager.Instance.ConvertToWorldSpace(127.977394d, 37.490512d);
            _pos = _pos + m_MapTiles.transform.position;
            _pos.z = -0.1f;
            m_MapMarker_ArtHall.transform.position = _pos;
        }


        if (m_MapMarker_ParkingPlace != null)
        {
            _pos = GPSManager.Instance.ConvertToWorldSpace(127.98833d, 37.489609d);
            _pos = _pos + m_MapTiles.transform.position;
            _pos.z = -0.1f;
            m_MapMarker_ParkingPlace.transform.position = _pos;
        }

        if (m_MapMarker_TMall != null)
        {
            _pos = GPSManager.Instance.ConvertToWorldSpace(127.987215d, 37.489627d);
            _pos = _pos + m_MapTiles.transform.position;
            _pos.z = -0.1f;
            m_MapMarker_TMall.transform.position = _pos;
        }

        if (m_MapMarker_Festival != null)
        {
            _pos = GPSManager.Instance.ConvertToWorldSpace(127.985377d, 37.497806d);
            _pos = _pos + m_MapTiles.transform.position;
            _pos.z = -0.1f;
            m_MapMarker_Festival.transform.position = _pos;
        }
    }

    IEnumerator InitAfterGPSStart()
    {
        while (!GPSManager.Instance.IsCanGPS)
        {
            yield return null;
            continue;
        }

        if (m_CenterGeoData == null)
        {
            m_CenterGeoData = new VectorD2(GPSManager.Instance.Latitude, GPSManager.Instance.Longitude);
        }

        m_CenterGeoData.x = GPSManager.Instance.Latitude;
        m_CenterGeoData.y = GPSManager.Instance.Longitude;

        bMapControllable = true;
        SetGoogleMapParams(m_fTileScale, m_iMapPixelSize, m_iZoomLevel);
        m_MapTileController.RefreshMapTile(m_CenterGeoData.x, m_CenterGeoData.y);

        StartCoroutine(MarkerPositioning());
    }

    void HelpMarkerPositioning()
    {
        // DB의 서버와 통신하여 갱신된 상자 목록과 현재 존재하는 마커를 비교하여
        // DB에 존재하지 않는 제거 목록을 만들고, 그 목록에 있는 것들을 Dictionary에서 제거.
        List<int> _removeList = new List<int>();
        foreach (KeyValuePair<int, TreasureMapMarker> item in m_ActivatedMapMarkers)
        {
            if (m_tDB.m_tbObjectList.ContainsKey(item.Key) == false)
                _removeList.Add(item.Key);
        }

        for (int i = 0; i < _removeList.Count; i++)
        {
            m_ActivatedMapMarkers[_removeList[i]].SetDeactivate();
            m_ActivatedMapMarkers.Remove(_removeList[i]);
        }

        if (m_tDB == null || m_tDB.m_tbObjectList == null)
        {
            return;
        }

        SetGoogleMapParams(m_fTileScale, m_iMapPixelSize, m_iZoomLevel);
        // 위와 마찬가지로 비교하지만 DB의 목록에는 있으나 만약 활성화한 마커가 없는 경우에는 생성하고,
        // 이미 있다면 마커 위의 표기숫자를 업데이트 한다.
        foreach (KeyValuePair<int, TBDatabase.TreasureBoxInfo> item in m_tDB.m_tbObjectList)
        {
            if (m_ActivatedMapMarkers.ContainsKey(item.Key) == false)
            {
                TreasureMapMarker _marker = null;
                for (int i = 0; i < m_MapMarkers.Count; i++)
                {
                    if (m_MapMarkers[i].Idx == -1)
                    {
                        _marker = m_MapMarkers[i];
                        break;
                    }
                }
                if (_marker == null)
                {
                    continue;
                }

                if (_marker.Marker == null)
                {
                    _marker.Marker = Instantiate(MapMarkerPrefab);
                    _marker.Marker.transform.SetParent(m_MapTiles.transform);
                    _marker.lScale = _marker.Marker.transform.localScale;
                }

                _marker.dLat = item.Value.tb_lat;
                _marker.dLon = item.Value.tb_lon;

                // 마커 위치 지정
                Vector3 _pos;
                _pos = GPSManager.Instance.ConvertToWorldSpace(_marker.dLon, _marker.dLat);
                _marker.Marker.transform.position = _pos + m_MapTiles.transform.position;

                // 상자 개수 입력
                _marker.UpdateCount(item.Value.tb_count);


                // 마커 보이기
                _marker.SetActivate(item.Key);


                // 컨테이너에 추가
                m_ActivatedMapMarkers.Add(_marker.Idx, _marker);
            }
            else
            {
                // 상자 개수 업데이트
                m_ActivatedMapMarkers[item.Key].UpdateCount(item.Value.tb_count);
            }

        }
    }

    IEnumerator MarkerPositioning()
    {
        while (true)
        {
            HelpMarkerPositioning();
            // 갱신 주기
            yield return new WaitForSeconds(1);
        }
    }

    IEnumerator MinusBlindMapAlpha()
    {
        Color m_StoreBlindMapColor;
        if (m_bBlindCosoutinStart == false)
        {
            m_StoreBlindMapColor = m_BlindMapImg.color;
            m_bBlindCosoutinStart = true;
            m_StoreBlindMapColor.a = 1.0f;
            m_BlindMapImg.color = m_StoreBlindMapColor;
            float _StoreBlindMapDelayPositioning = 0.0f;

            float _StoredIdleTime = 0.0f;

            while (m_bBlindCosoutinStart == true)
            {
                _StoredIdleTime += Time.deltaTime;

                if (!m_MapTileController.IsAllLoaded())
                {
                    if (_StoredIdleTime < 1.0f)
                    {
                        yield return null;
                        continue;
                    }
                    else
                    {
                        _StoredIdleTime = 3.0f;
                        break;
                    }
                }

                _StoreBlindMapDelayPositioning += Time.deltaTime;

                if (_StoreBlindMapDelayPositioning > 0.5f)
                {
                    m_StoreBlindMapColor.a = Mathf.Lerp(1, 0, _StoreBlindMapDelayPositioning - 0.5f);

                    if (m_StoreBlindMapColor.a <= 0.0f)
                    {
                        m_StoreBlindMapColor.a = 0.0f;
                        break;
                    }
                    m_BlindMapImg.color = m_StoreBlindMapColor;
                }
                else
                {
                    m_MapTiles.transform.position = new Vector3(0, 0, 0);
                }

                yield return null;
            }

            m_MapTiles.transform.position = new Vector3(0, 0, 0);
            m_MapTileController.SetLoadedValue(true);
            m_StoreBlindMapColor.a = 0.0f;
            m_BlindMapImg.color = m_StoreBlindMapColor;
            bMapControllable = true;
            m_bDrag = false;
            m_bBlindCosoutinStart = false;
        }
        //else
        //{
        //    m_MapTiles.transform.position = new Vector3(0, 0, 0);
        //    m_MapTileController.SetLoadedValue(true);
        //    m_StoreBlindMapColor = m_BlindMapImg.color;
        //    m_StoreBlindMapColor.a = 0.0f;
        //    m_BlindMapImg.color = m_StoreBlindMapColor;
        //    bMapControllable = true;
        //}
    }
}
