using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class CustomConfiguration
{
    public bool bViewHelp;
    public bool bSound;

    public CustomConfiguration()
    {
        this.bSound = false;
        this.bViewHelp = false;
    }
}

public class UnityCommunicator : MonoBehaviour {

    internal const string url = "http://hanwoorigo.interfo.com";
    internal const int FestivalContentId = 520;
    internal const string CouponPassword = "369";
    internal const int FECOExchangeCount = 15;
    internal const int FECOCooltimeSec = 60 * 3; // 3분
    //internal const int FECOCooltimeSec = 10 * 3; // 30초
    internal const int CouponMaximumGetCount= 1;
    internal const int HWMaxCount = 50;

    /// <summary>
    /// 설정
    /// </summary>
    internal CustomConfiguration m_appConfig = null;

    internal class UserData
    {
        internal string token;
        internal int coin_count;
        internal CouponData[] couponList;
        internal int couponCount;
        internal Dictionary<int, bool> couponSoldoutState;
        internal bool[] catchedVerify;

        public UserData()
        {
            token = "";
            coin_count = 0;
            couponCount = 0;

            catchedVerify = new bool[HWMaxCount];
            catchedVerify = Enumerable.Repeat<bool>(false, HWMaxCount).ToArray();

            couponSoldoutState = new Dictionary<int, bool>();
        }

        public void ClearData()
        {
            coin_count = 0;
            couponCount = 0;

            if (catchedVerify == null)
                catchedVerify = new bool[HWMaxCount];
            catchedVerify = Enumerable.Repeat<bool>(false, HWMaxCount).ToArray();

            if (couponSoldoutState == null)
                couponSoldoutState = new Dictionary<int, bool>();
            couponSoldoutState.Clear();

            if (couponList != null)
                couponList = null;
        }
    }

    internal class HanuriData
    {
        internal int idx;
        internal string name;
        internal Sprite img;
        internal int imgIdx;
        internal string desc;

        internal HanuriData()
        {
            this.idx = -1;
            this.name = "";
            this.img = null;
            this.desc = "";
            this.imgIdx = -1;
        }
    }

    private static bool m_initOnce;
    public bool m_bLoadData;
    private static UnityCommunicator s_instance;
    internal UserData m_userData;
    internal Dictionary<int, HanuriData> m_HanuriDB;

    internal static UnityCommunicator Instance
    {
        get
        {
            if(s_instance == null)
            {
                s_instance = FindObjectOfType<UnityCommunicator>();
                if (s_instance == null)
                {
                    s_instance = new GameObject("UnityCommunicator").AddComponent<UnityCommunicator>();
                    s_instance.m_bLoadData = false;
                }
            }

            return s_instance;
        }
    }


    void Initialize()
    {
        if (m_initOnce) { return; }
        m_initOnce = true;

        DontDestroyOnLoad(this);

        if (s_instance == null)
        {
            s_instance = this;
        }

        s_instance.m_userData = new UserData();
        s_instance.m_HanuriDB = new Dictionary<int, HanuriData>();
        s_instance.m_appConfig = new CustomConfiguration();

        InitHanuriDatabase();

#if UNITY_EDITOR && UNITY_ANDROID
        s_instance.m_userData.token = "eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.IntcInVzZXJpZFwiOlwiYWRtaW5cIixcInBhc3N3b3JkXCI6XCI2NzE4XCJ9Ig.UAQ_4yCEvAakF-lrjWY_v1JS_M67AfXZlZMZnkK7eLU";
#endif
        s_instance.LoadPrefData();
    }

    internal void SavePrefData()
    {
        DataTransfer.RequestURL(DataTransfer.DataType.ARTreasure_SetConfig, (UnityCommunicator.Instance.m_userData.token + "?" + "config=" + (UnityCommunicator.Instance.m_appConfig.bSound ? "1" : "0") + ":1"), null, Callback_SavePrefData);
    }

    public void Callback_SavePrefData(string fullJson)
    {
        ;
    }

    internal void LoadPrefData()
    {
        //m_bLoadData = true;
        
        //if (PlayerPrefs.HasKey("Sound_Enabled"))
        //{
        //    Debug.LogError("=============> Sound_Enabled key Exist !!![" + PlayerPrefs.GetInt("Sound_Enabled") + "]");
        //    m_appConfig.bSound = PlayerPrefs.GetInt("Sound_Enabled") == 1 ? true : false;
        //}
        //else
        //{
        //    Debug.LogError("=============> Sound_Enabled key not Exist ...........");
        //    m_appConfig.bSound = true;
        //}
        //if (PlayerPrefs.HasKey("Help_Viewed"))
        //{
        //    Debug.LogError("=============> Help_Viewed key Exist !!!");
        //    m_appConfig.bViewHelp = true;
        //}
        //else
        //{
        //    Debug.LogError("=============> Help_Viewed key not Exist ...........");
        //    m_appConfig.bViewHelp = false;
        //}
    }

    public void Callback_LoadPref(string fullJson)
    {

    }


#region Unity Event Function
    private void Awake()
    {
        Instance.Initialize();
    }

    private void OnEnable()
    {
        ;
    }

    private void Start()
    {
        
    }

    //TODO: 일단 보류
    //private void OnApplicationPause(bool pause)
    //{
    //    if (pause == false)
    //    {
    //        LoadData();
    //    }
    //}

    //private void OnApplicationQuit()
    //{
    //    SaveData();
    //}
#endregion

#region Server Communicate

    internal void LoadData()
    {
        //DataTransfer.RequestURL(DataTransfer.DataType.ARTreasure_GetCoinCount, (UnityCommunicator.Instance.m_userData.token), null, (fullJson) =>
        //{
        //    int _coinCount = 0;
        //    ReceiveCoin afk = JsonUtility.FromJson<ReceiveCoin>(fullJson);


        //    if (afk.Result.ToLower().Equals("true"))
        //    {
        //        if (afk.list != null && afk.list.Length > 0)
        //        {
        //            _coinCount = int.Parse(afk.list);
        //        }
        //    }

        //    UnityCommunicator.Instance.m_userData.coin_count = _coinCount;
        //});
        
        DataTransfer.RequestURL(DataTransfer.DataType.ARTreasure_GetMyCouponList, (UnityCommunicator.Instance.m_userData.token + "?cp_contentid=" + UnityCommunicator.FestivalContentId), null, (fullJson) =>
        {
            ReceiveCoupon afk = JsonUtility.FromJson<ReceiveCoupon>(fullJson);

            UnityCommunicator.Instance.m_userData.couponCount = 0;

            if (afk.Result.ToLower().Equals("true"))
            {
                UnityCommunicator.Instance.m_userData.couponCount = afk.list.Length;
                UnityCommunicator.Instance.m_userData.couponList = afk.list;
            }
        });
    }

    public void AndroidToUnity(string data = "")
    {
        UnityCommunicator.Instance.m_userData.token = data;
        //print("Token Receive: " + UnityCommunicator.Instance.m_userData.token);
        Debug.LogError("Token Receive: " + UnityCommunicator.Instance.m_userData.token);
        LoadData();
    }
#endregion


    public void CallAndroid_ReviewActivity(string filePath)
    {
#if UNITY_EDITOR
        return;
#endif
        string orient = "";

        switch (Input.deviceOrientation)
        {
            //case DeviceOrientation.FaceUp:
            //    text_device_orient.text = "FaceUp";
            //    break;
            //case DeviceOrientation.FaceDown:
            //text_device_orient.text = "FaceDown";
            //break;
            case DeviceOrientation.LandscapeLeft:
                orient = "LandscapeLeft";
                break;
            case DeviceOrientation.LandscapeRight:
                orient = "LandscapeRight";
                break;
            case DeviceOrientation.Portrait:
                orient = "Portrait";
                break;
            case DeviceOrientation.PortraitUpsideDown:
                orient = "PortraitUpsideDown";
                break;
            case DeviceOrientation.Unknown:
                orient = "Unknown";
                break;
            default:
                orient = "????";
                break;
        }

        AndroidJavaClass jcUnityPlayer = new AndroidJavaClass("com.interfo.archerryblossom.ReviewBridge");
        AndroidJavaClass unityActivity = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        AndroidJavaObject currActivity = unityActivity.GetStatic<AndroidJavaObject>("currentActivity");
        jcUnityPlayer.CallStatic("SendFilePath", currActivity, filePath, orient);
    }

    public void InitHanuriDatabase()
    {
        TextAsset data = Resources.Load<TextAsset>("Text/hanuridb");
        StringReader sr = new StringReader(data.text);

        string _line;
        string[] _spLine;
        _line = sr.ReadLine();

        while (_line != null)
        {
            _spLine = _line.Split(new char[] { ',' });
            if (_spLine.Length < 3) continue;

            UnityCommunicator.HanuriData _data = new UnityCommunicator.HanuriData();

            if (int.TryParse(_spLine[0], out _data.idx) == false) continue;
            _data.idx = _data.idx - 1;

            _data.name = _spLine[1];

            //TODO: 이미지를 이미지 배열에서 인덱스로 찾아서 넣기
            if (int.TryParse(_spLine[2], out _data.imgIdx) == false) continue;

            UnityCommunicator.Instance.m_HanuriDB.Add(_data.idx, _data);

            _line = sr.ReadLine();
        }

    }
}
