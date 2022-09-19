//#define __GPSPOSITIONING__
//#define __DistanceView__
//#define __INTERFO_TEST__

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Linq;
using TMPro;
#if UNITY_ANDROID
using GoogleARCore;
#endif

#region Json Helper Class
/// <summary>
/// 코인함 관련
/// </summary>
[System.Serializable]
public class CoinData
{
    public string feco_count;
}

[System.Serializable]
public class ReceiveCoin
{
    public string Result; // 결과값 (bool)
    public string list; // 사용자 코인정보 개수
    public string Desc; // 실패했을 때의 설명
}

[System.Serializable]
public class EleConfigClass
{
    public string config;
}

[System.Serializable]
public class JsonGetConfigClass
{
    public string Result;
    public EleConfigClass list;
}

/// <summary>
/// 쿠폰함 관련
/// </summary>
[System.Serializable]
public class JsonCouponSoldoutStateItem
{
    public string cp_id;
    public string cp_count;
    public string soldout_state;
}

[System.Serializable]
public class JsonCouponSoldoutState
{
    public string Result;
    public string Desc;
    public JsonCouponSoldoutStateItem[] list;
}

[System.Serializable]
public class CouponData
{
    public string idx; // 쿠폰 아이디
    public string cp_id; // 쿠폰 종류 아이디
    public string cp_subject; // 쿠폰 이름
    public string cp_no; // 쿠폰 번호
    public string cp_status;
    public string cp_memo;
    public string cp_userid;
    public string cp_del;
    public string cp_use_time; // 쿠폰 사용 종료기간
    public string cp_use_ip;
    public string cp_point;
    public string cp_created; // 쿠폰 사용 시작기간
    public string cp_updated;
    public string cp_type; // 방식 ('교환', '')
    public string cp_image; // 쿠폰 이미지(url)
    public string cp_brandlogo; // 브랜드 로고 이미지(url)
    public string cp_limit;
    public string cp_count;
    public string cp_contentid; // 쿠폰의 축제 아이디
    public string cp_usecoupon; // 사용 여부 (0: 미사용, 1: 사용)
}

[System.Serializable]
public class ReceiveCoupon
{
    public string Result;
    public CouponData[] list;
    public string Desc;
}

[System.Serializable]
public class ReceiveCouponOnlyOne
{
    public string Result;
    public CouponData list;
    public string Desc;
}
#endregion

public class TBFinder : MonoBehaviour
{
    public UnityEngine.Events.UnityEvent clickEvent;
    private bool bNotFestDay;
    internal AppConfig m_AppConfig;
    private bool bCollectTDB = false;
    private TBDatabase m_tDB = null;
    private GameObject UIMainPanel = null, UIMapviewObj = null, UIARObj = null, UICoinbookPanel = null, UIGameHelp = null, UICouponList = null;

    public GameObject GPSReadyPannel;

    public ScrollSnapRect m_GameHelpSnapRectController;

    [Header("Page Classes")]
    public CoinBook m_CoinBook;
    public CouponBook m_CouponBook;
    public TBMapView MapViewContain;

    [Header("TreasureBox Prefab")]
    public TreasureBox BoxPrefab;


    [Header("AR Camera")]
    public Camera m_firstCameraARCore;
    public Camera m_firstCameraARKit;

    [Header("Main UI Canvas")]
    public Canvas UICanvas;

    [Header("AR Mode - Current Count")]
    public TMP_Text m_ARMode_fecoCurrentCount;

    [Header("Blind Obj")]
    public GameObject InitBlindObj;

    [Header("AR Helper Message")]
    public ARHelpMessage m_arHelperMessage;

    [Header("Get Hanuri Message")]
    public GameObject m_GetHanuriMsg;
    public TMP_Text m_GetHanuriMsgName;
    public Image m_GetHanuriMsgImg;

    [Header("Hanuri Images")]
    public Sprite[] m_HanuriImages;

    public enum DisplayMode
    {
        Main,
        AR,
        MapView,
        CoinBook,
        GameHelp,
        CouponList,
        Max
    };
    internal DisplayMode m_CurrentMode;

    internal int m_iVisibleTBIdx;
    internal bool m_bVisibleTB;

    private void Awake()
    {
#if __INTERFO_TEST__
        UnityCommunicator.Instance.m_userData.token = "eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpc3MiOiJ7XCJ1c2VyaWRcIjpcImFkbWluXCIsXCJwYXNzd29yZFwiOlwiNjcxOFwifSJ9.Zmm2QvzTHf6TA5FZWe8hdZUh0pw7WY_Tm3EeO-NV9LM"; // root
#endif
        bCollectTDB = false;
        m_bVisibleTB = false;
        m_iVisibleTBIdx = -1;

        // 스크린을 강제로 세로로 만듬.
        // 이후 Scene에서 재정립해야 함.
        Screen.orientation = ScreenOrientation.Portrait;
        //Screen.orientation = ScreenOrientation.Landscape;
        
        Screen.sleepTimeout = SleepTimeout.NeverSleep;

        m_AppConfig = gameObject.GetComponent<AppConfig>();

        InitHanuriDBImg();

        UIMainPanel = UICanvas.transform.Find("UI00MainPanel")?.gameObject;
        UIMapviewObj = UICanvas.transform.Find("UI01Mapview")?.gameObject;
        UIARObj = UICanvas.transform.Find("UI02AR")?.gameObject;
        UICoinbookPanel = UICanvas.transform.Find("UI03Coinbook")?.gameObject;
        UIGameHelp = UICanvas.transform.Find("UI04GameHelp")?.gameObject;
        UICouponList = UICanvas.transform.Find("UI05CouponBook")?.gameObject;
        
        System.DateTime _startDate = System.DateTime.ParseExact("20190603", "yyyyMMdd", null);
        System.DateTime _endDate = System.DateTime.ParseExact("20190610", "yyyyMMdd", null);
        if ((_startDate.Subtract(System.DateTime.Now).TotalDays > 0) ||
            (_endDate.Subtract(System.DateTime.Now).TotalDays < 0))
        {
            bNotFestDay = true;
        }

        m_CoinBook.m_TBFinder = this;

        double distance = GPSManager.GeoDistance(37.77131, 128.87038, 37.771265, 128.870100);
    }

    // Use this for initialization
    void Start()
    {
        MapViewContain.gameObject.SetActive(false);
        m_CurrentMode = DisplayMode.Main;
#if (UNITY_IOS || UNITY_EDITOR_OSX)
        m_firstCameraARKit.gameObject.SetActive(true);
#else
        m_firstCameraARCore.gameObject.SetActive(true);
#endif
        DataTransfer.RequestURL(DataTransfer.DataType.HanwooriGO_GetHWList, (UnityCommunicator.Instance.m_userData.token), null, CoinBook.GlobalCoinSetting);

        if (UIMainPanel != null) UIMainPanel.SetActive(true);
        if (UIMapviewObj != null) UIMapviewObj.SetActive(false);
        //if (MapViewContain != null) MapViewContain.gameObject.SetActive(false);
        if (UIARObj != null) UIARObj.SetActive(false);
        if (UICoinbookPanel != null) UICoinbookPanel.SetActive(false);
        if (UIGameHelp != null) UIGameHelp.SetActive(false);
        if (UICouponList != null) UICouponList.SetActive(false);

        StartCoroutine(CoLoadConfig());
        StartCoroutine(CoGPSReadyPanelSetActive());
    }

    IEnumerator CoGPSReadyPanelSetActive()
    {
        while (true)
        {
            if (GPSManager.Instance.IsGPSReadyComplete == true)
            {
                GPSReadyPannel.SetActive(false);
                break;
            }
            yield return null;
        }
    }

    IEnumerator CoLoadConfig()
    {
        while (true)
        {
            if (UnityCommunicator.Instance.m_userData.token.Length > 0)
            {
                //Debug.LogError("===================> TBFinder][ Token: " + UnityCommunicator.Instance.m_userData.token);
                break;
            }
            yield return null;
        }

        UnityCommunicator.Instance.LoadData();
        DataTransfer.RequestURL(DataTransfer.DataType.ARTreasure_GetConfig, (UnityCommunicator.Instance.m_userData.token), null, Callback_LoadConfigData);
    }

    public void Callback_LoadConfigData(string fullJson)
    {
        JsonGetConfigClass afk = JsonUtility.FromJson<JsonGetConfigClass>(fullJson);
        if (afk.Result.ToLower().Equals("true"))
        {
            if (afk.list.config.Length > 0)
            {
                string[] spConfig = afk.list.config.Split(':');
                if (spConfig.Length > 0) UnityCommunicator.Instance.m_appConfig.bSound = spConfig[0].Equals("0") ? false : true;
                if (spConfig.Length > 1) UnityCommunicator.Instance.m_appConfig.bViewHelp = spConfig[1].Equals("0") ? false : true;
            }
            else
            {
                UnityCommunicator.Instance.m_appConfig.bSound = true;
                UnityCommunicator.Instance.m_appConfig.bViewHelp = false;
            }
        }
        else
        {
            UnityCommunicator.Instance.m_appConfig.bSound = true;
            UnityCommunicator.Instance.m_appConfig.bViewHelp = false;
        }

        if (UIGameHelp != null)
        {
            UIGameHelp.SetActive(false);

            // 앱 설치 이후 처음실행에 대한 도움말 화면 처리.
            if (UnityCommunicator.Instance.m_appConfig.bViewHelp == false)
            {
                m_CurrentMode = DisplayMode.GameHelp;
                if(UIMainPanel != null) UIMainPanel.SetActive(false);
                UIGameHelp.SetActive(true);
            }
        }

        if (m_AppConfig != null) {
            m_AppConfig.UpdateSoundIcons();
            m_AppConfig.UpdateSoundStatus();
        }

        if (InitBlindObj != null) {
            InitBlindObj.SetActive(false);
        }

        OnPopupNotYetFestival();
    }

    // Update is called once per frame
    void Update()
    {
        OnBackButtonEvent();
        if (bCollectTDB == false)
        {
            m_tDB = new GameObject("TBDatabase").AddComponent<TBDatabase>();
            m_tDB.m_TBFinder = this;

#if (UNITY_IOS || UNITY_EDITOR_OSX)
            m_tDB.m_mainCamera = m_firstCameraARKit;
#elif (UNITY_ANDROID || UNITY_EDITOR_WIN)
            m_tDB.m_mainCamera = m_firstCameraARCore;
#endif
            m_tDB.TBox = BoxPrefab;
            MapViewContain.SetTBDatabase(ref m_tDB);
            bCollectTDB = true;
        }
        else if (GPSManager.Instance.IsGPSReadyComplete == true && m_tDB.IsDatabaseReady == true)
        {
            TouchTreasure();
        }
    }

    #region GameHelp

    public void OnGameHelp()
    {
        m_CurrentMode = DisplayMode.GameHelp;

        if (UIMainPanel != null) UIMainPanel.SetActive(false);
        UIGameHelp.SetActive(true);
        m_GameHelpSnapRectController.SetPage(0);
        m_GameHelpSnapRectController.SetPageSelection(0);
    }

    #endregion

    #region Coupon List

    public void OnCouponListMode()
    {
        m_CouponBook.OpenCouponBook(
            // OnPopupNotYetFestival();
            () => {
                string sendMessage = UnityCommunicator.Instance.m_userData.token;
                DataTransfer.RequestURL(DataTransfer.DataType.HanwooriGO_GetHWList, sendMessage, null, (fullJson) => {
                    m_AppConfig.PlaySFXBaseTouch();
                    m_CoinBook.CoinLoad(fullJson, true);

                    m_CurrentMode = DisplayMode.CouponList;

                    if (UIMainPanel != null) { UIMainPanel.SetActive(false); }
                    UICouponList.SetActive(true);

                    m_CouponBook.Callback_SettingTakeCouponUI(fullJson);
                });
            });
    }


    #endregion

    #region Coin Book
    public void OnCoinbookMode()
    {
        m_AppConfig.PlaySFXBaseTouch();
        if (m_CurrentMode == DisplayMode.CoinBook) return;

        //OnPopupNotYetFestival();

        string sendMessage = UnityCommunicator.Instance.m_userData.token;
        DataTransfer.RequestURL(DataTransfer.DataType.HanwooriGO_GetHWList, sendMessage, null, Callback_OpenCoinbook);
    }

    void Callback_OpenCoinbook(string fullJson)
    {
        m_CoinBook.CoinLoad(fullJson, true);

        m_CurrentMode = DisplayMode.CoinBook;

        if (UIMainPanel != null) UIMainPanel.SetActive(false);
        if (UIMapviewObj != null) UIMapviewObj.SetActive(false);
        if (UIARObj != null) UIARObj.SetActive(false);
        UICoinbookPanel.SetActive(true);
    }

    /// <summary>
    /// 쿠폰 받기 버튼 터치
    /// </summary>
    public void OnTakeCouponButton()
    {
        m_AppConfig.PlaySFXBaseTouch();
        m_CoinBook.OnTakeCouponButton(ARMode_RefreshUI_FECOCount, null);
    }
    #endregion

    #region AR Mode

    public void OnARMode()
    {
        m_AppConfig.PlaySFXBaseTouch();

        if (m_CurrentMode == DisplayMode.AR) return;

        AlertPopup.Instance.DisplayMessage("안내", "움직이실 때에는 다른 보행자, 차량 및 장애물과 같은 위험을 인지해야 하며 안전사고에 유의하시기 바랍니다.\n\n만 13세 이하의 어린이는 보호자의 관리 및 지도가 필요합니다.", () =>
        {
            m_AppConfig.ChangeBgm(1);

            m_CurrentMode = DisplayMode.AR;

            if (UIMainPanel != null) UIMainPanel.SetActive(false);
            if (UICoinbookPanel != null) UICoinbookPanel.SetActive(false);
            if (UICouponList != null) UICouponList.SetActive(false);
            if (UIMapviewObj != null) UIMapviewObj.SetActive(false);
            UIARObj.SetActive(true);

#if (UNITY_IOS || UNITY_EDITOR_OSX)
        m_firstCameraARKit.gameObject.SetActive(true);
#else
            m_firstCameraARCore.gameObject.SetActive(true);
#endif
            MapViewContain.gameObject.SetActive(false);

            if (m_tDB != null && m_tDB.IsDatabaseReady) m_tDB.RelocationTBList();

            ARMode_RefreshUI_FECOCount();
        });
    }

    public void ARMode_RefreshUI_FECOCount()
    {
        m_ARMode_fecoCurrentCount.text = Mathf.Min(UnityCommunicator.Instance.m_userData.coin_count, UnityCommunicator.HWMaxCount).ToString();
    }
    #endregion

    #region Map View
    public void OnMapviewMode()
    {
        m_AppConfig.PlaySFXBaseTouch();
        if (m_CurrentMode == DisplayMode.MapView) return;

        //OnPopupNotYetFestival();

        // 준비가 안되었을 경우 맵이동도 하지 않음.
        if (m_tDB.IsDatabaseReady == false) return;

        m_CurrentMode = DisplayMode.MapView;

        if (UIMainPanel != null) UIMainPanel.SetActive(false);
        if (UICoinbookPanel != null) UICoinbookPanel.SetActive(false);
        if (UICouponList != null) UICouponList.SetActive(false);
        if (UIARObj != null) UIARObj.SetActive(false);
        UIMapviewObj.SetActive(true);

#if (UNITY_IOS || UNITY_EDITOR_OSX)
        m_firstCameraARKit.gameObject.SetActive(false);
#else
        m_firstCameraARCore.gameObject.SetActive(false);
#endif
        MapViewContain.gameObject.SetActive(true);
        MapViewContain.InitMinimapValues();
    }
    #endregion

    #region UI
    public void Callback_BackButton()
    {
        // 쿠폰을 받았다는 메세지가 팝업된 상태에서는 뒤로가기 버튼 기능 무효.
        if (m_CoinBook.IsPopupTakeCouponMsg() == true) return;

        m_AppConfig.PlaySFXBaseTouch();
        m_AppConfig.ChangeBgm(0);
        if (UIMainPanel != null) { UIMainPanel.SetActive(true); }
        switch (m_CurrentMode)
        {
            case DisplayMode.AR:
                UIARObj.SetActive(false);
                break;
            case DisplayMode.CoinBook:
                UICoinbookPanel.SetActive(false);
                break;
            case DisplayMode.MapView:
                UIMapviewObj.SetActive(false);
                MapViewContain.gameObject.SetActive(false);
#if (UNITY_IOS || UNITY_EDITOR_OSX)
                m_firstCameraARKit.gameObject.SetActive(true);
#else
                m_firstCameraARCore.gameObject.SetActive(true);
#endif
                break;
            case DisplayMode.GameHelp:
                UIGameHelp.SetActive(false);
                break;
            case DisplayMode.CouponList:
                UICouponList.SetActive(false);
                break;
            default:
                break;
        }

        m_CurrentMode = DisplayMode.Main;
        if (m_CurrentMode == DisplayMode.Main)
        {
            ;//OnPopupNotYetFestival();
        }
    }

    private void OnPopupNotYetFestival()
    {
        return;
        //if (bNotFestDay)
        //{
        //    AlertPopup.Instance.DisplayMessage("안내", "\n[정식코인 수집기간]\n06.03(월)-06.10(월)\n\n따라서 축제기간 전 수집된 코인은\n모두 초기화되니 참고해주세요.");
        //}
    }

    private void Callback_ExitApp()
    {
        Application.Quit();
    }

    public void OnExitButtonEvent()
    {
        m_AppConfig.PlaySFXBaseTouch();
        AlertPopupEx.Instance.DisplayMessage("종료", "", "정말로\n종료하시겠습니까?", Callback_ExitApp);
    }

    private void Callback_LogoutApp()
    {
        if (PlayerPrefs.HasKey("kfLoginToken") == true)
            PlayerPrefs.DeleteKey("kfLoginToken");
        //PlayerPrefs.DeleteAll();
        //Application.Quit();
        UnityCommunicator.Instance.m_userData.token = "";
        SceneManager.LoadScene("Scene_00_Login");

        UnityCommunicator.Instance.m_userData.ClearData();
    }

    public void OnLogoutButtonEvent()
    {
        m_AppConfig.PlaySFXBaseTouch();
        //AlertPopupEx.Instance.DisplayMessage("로그아웃", "", "정말로\n로그아웃 하시겠습니까?\n로그인을 다시 해야 합니다.", Callback_LogoutApp);
        AlertPopupEx.Instance.DisplayMessage("로그아웃", "", "로그아웃\n하시겠습니까?", Callback_LogoutApp);

    }

    public void OnUIBackButtonEvent()
    {
        Callback_BackButton();
    }

    public void OnBackButtonEvent()
    {
        if (AlertPopup.Instance.GetQueueCount() > 0 || AlertPopupEx.Instance.GetQueueCount() > 0) return;
#if UNITY_ANDROID
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (m_CurrentMode == DisplayMode.GameHelp)
            {
                // 게임방법에서는 버튼을 제외하면 이동불가.
                return;
            }
            else if (m_CurrentMode == DisplayMode.Main)
            {
                OnExitButtonEvent();
            }
            else
            {
                Callback_BackButton();
            }
        }
#endif
    }
    #endregion

    #region Touch treasure


    /// <summary>
    /// 코인 터치 부분
    /// </summary>
    void TouchTreasure()
    {
        if (m_CurrentMode != DisplayMode.AR) return;

#if UNITY_EDITOR
        if (Input.GetMouseButtonDown(0) == false) return;
        Vector2 pos = Input.mousePosition;
#else
        if (Input.touchCount < 1) return;
        
        Touch _Touch = Input.GetTouch(0);
        if (_Touch.phase != TouchPhase.Began) return;

        Vector2 pos = _Touch.position;
#endif
        Vector3 dTouch = new Vector3(pos.x, pos.y, 0.0f);

#if (UNITY_IOS || UNITY_EDITOR_OSX)
        Ray ray = m_firstCameraARKit.ScreenPointToRay(dTouch);
#else
        Ray ray = m_firstCameraARCore.ScreenPointToRay(dTouch);
#endif

        LayerMask _layerMask = LayerMask.GetMask("TBObject");

        // 거리를 2배 한 이유는 코인 기준에서 보여지는 거리가 50m라 했을 때, 나눠지는 코인이 최대 반경 50m 밖에서 생성되었다면,
        // 그 나눠진 코인에서 유저의 거리의 최대값은 50m+50m가 되기 때문임.
        RaycastHit[] hitArr = Physics.RaycastAll(ray, TreasureBox.visableDist * 2.0f, _layerMask);
        if (hitArr.Length > 0)
        {
            //if (UnityCommunicator.Instance.m_userData.couponCount >= UnityCommunicator.CouponMaximumGetCount)
            //{
            //    AlertPopup.Instance.DisplayMessage("쿠폰은 최대 " + UnityCommunicator.CouponMaximumGetCount.ToString() + "장만!", "다음 축제에서도\n많은 참여 부탁드립니다!");
            //    return;
            //}

            System.Array.Sort(hitArr, delegate (RaycastHit hit1, RaycastHit hit2) { return hit1.distance.CompareTo(hit2.distance); });

            for (int i = 0; i < hitArr.Length; i++)
            {
                TreasureBox _tb = hitArr[i].transform.parent.parent.parent.parent.parent.GetComponent<TreasureBox>();

                if (!CantCheckTouchable(_tb, 1))
                {
                    //if (Vector3.Distance(ray.origin, _tb.transform.position) > TreasureBox.touchableDist)
                    if (_tb.Touchable == false)
                    {
                        m_arHelperMessage.VisibleHelpMsg("한우리에게 조금 더 가까이 가주세요!");
                        //AlertPopup.Instance.DisplayMessage("좀 더 가까이!", "페코가 회전할 때까지\n가까이 가주세요.");
                        return;
                    }

                    _tb.TBTouched();

                    string sendMessage = UnityCommunicator.Instance.m_userData.token + "?tb_id=" + _tb.tb_id + "&cooltime=" + UnityCommunicator.FECOCooltimeSec;
                    DataTransfer.RequestURL(DataTransfer.DataType.ARTreasure_Touch, sendMessage, null, ReceiveTouchTreasure);
                    break;
                }
            }
        }
    }

    /// <summary>
    /// 보이지 않는 상태이거나, 거리가 충족되지 않았다면 터치할 수 없음. 부모플래그인 경우에도 터치할 수 없음.
    /// 자식이라면 부모에 의해서 Visible과 Touchable이 정의되므로 일반적인 TB와 동일하게 처리.
    /// </summary>
    /// <param name="tb">Target TreasureBox Object</param>
    /// <returns>true is CANNOT Touchable.</returns>
    bool CantCheckTouchable(TreasureBox tb, int cases = 0)
    {
        if ((tb == null) || // NULL 채크
            (tb.Destroying == true) || // 사라지고 있는 중
            (tb.Visible == false) || // 안보임
            (tb.bParent == true) // 부모 오브젝트
            ) { return true; } // 터치가능한 상태

        switch(cases)
        {
            case 0:
                if (tb.Touchable == false) return true;
                break;
            default:
                break;
        }
        // 이미 터치된 상태인가
        if (tb.bTouched != false) return true;

        return false;
    }

    void ReceiveTouchTreasure(string jsonData)
    {
        JsonTreasureBoxNoArr afk = JsonUtility.FromJson<JsonTreasureBoxNoArr>(jsonData);
        if (afk.Result.ToLower().Equals("true"))
        {
            m_AppConfig.PlaySFXGetPeco();

            int _tbId = int.Parse(afk.list.tb_id);
            if (m_tDB.m_tbObjectList.ContainsKey(_tbId) == true)
            {
                string sendMessage = UnityCommunicator.Instance.m_userData.token + "?catched_id=" + m_tDB.m_tbObjectList[_tbId].obj.m_CurrentHWIdx;
                DataTransfer.RequestURL(DataTransfer.DataType.HanwooriGO_CatchHW, sendMessage, null, ReceiveStoredHW);

                m_tDB.m_tbObjectList[_tbId].obj.SelfDestruction();
                m_tDB.m_tbObjectList.Remove(_tbId);
            }
        }
    }

    void ReceiveStoredHW(string jsonData)
    {
        JsonStoredHanuri afk = JsonUtility.FromJson<JsonStoredHanuri>(jsonData);

        if (afk.Result.ToLower().Equals("true"))
        {
            UnityCommunicator.Instance.m_userData.coin_count += 1;

            int _idx = 0;
            if (int.TryParse(afk.catchedid, out _idx))
            {
                UnityCommunicator.Instance.m_userData.catchedVerify[_idx] = true;
                //PopupGetHanuriMessage(_idx);
            }
            ARMode_RefreshUI_FECOCount();
        }
    }

    // TreasureBox에서 Destroy 이전에 호출함.
    public void PopupGetHanuriMessage(int idx)
    {
        //TODO: 한우리 획득 메세지에 대한 처리하기.
        m_AppConfig.PlaySFXHowlOfCow();
        string _hanuriname = UnityCommunicator.Instance.m_HanuriDB[idx].name;
        string _ulrul = "를";
        if (_hanuriname.Length > 0)
        {
            _ulrul = _hanuriname.Substring(_hanuriname.Length - 1).Equals("리") ? "를" : "을";

            //m_GetHanuriMsgImg = 
        }
        m_GetHanuriMsgImg.sprite = UnityCommunicator.Instance.m_HanuriDB[idx].img;
        m_GetHanuriMsgImg.color = new Color(1, 1, 1);
        m_GetHanuriMsgName.text = "'" + _hanuriname + "' " + _ulrul + " 캐치했습니다.";
        m_GetHanuriMsg.SetActive(true);

        m_iVisibleTBIdx = -1;
        m_bVisibleTB = false;
    }
    #endregion

    public void ChangeHelpPage(int _page)
    {
        ;
    }

    public void InitHanuriDBImg()
    {
        if (m_HanuriImages.Length < 1) return;

        foreach(var _data in UnityCommunicator.Instance.m_HanuriDB)
        {
            if (_data.Value.imgIdx < 0 || _data.Value.imgIdx >= m_HanuriImages.Length)
            {
                _data.Value.img = m_HanuriImages[0];
                continue;
            }

            _data.Value.img = m_HanuriImages[_data.Value.imgIdx];
        }
    }
}
