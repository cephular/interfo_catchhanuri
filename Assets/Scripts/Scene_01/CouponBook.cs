#define __COUPON_VERSION_2__

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class CouponBook : MonoBehaviour
{
    public GetCouponProgress m_GetCouponProgress;
    public GameObject m_goScrollView;
    public GameObject m_goExistCoupon;
    public ScrollMgr m_CouponListScrollMgr;
    private System.Action m_OpenCouponBookCallback;

    [SerializeField]
    UIMover[] buttonUIMover;

    public Image[] Images;
    public Image[] ImageCovers;

    public Sprite[] m_imgTakeable;
    public Sprite[] m_imgNotTakeable;
    public Sprite m_imgSoldOut;
    public Sprite m_imgExchanged;

    public TMP_Text m_currentCount_Couponbook;
    public Slider m_currentSlider_Couponbook;

    public ScrollCouponItem m_TakeCouponMsg;

    Coroutine m_CoRefreshSoldoutState;

    public bool m_bImsiExchanged;
    public int m_bImsiIdx;

    public class sButton
    {
        public bool bSoldout;
        public bool bNotAvailable;

        public int idx;

        public sButton()
        {
            bSoldout = false;
            bNotAvailable = false;
            idx = -1;
        }
    }

    public sButton[] m_Buttons = new sButton[5];

    private void Awake()
    {
        m_OpenCouponBookCallback = null;
        if (m_TakeCouponMsg != null) m_TakeCouponMsg.gameObject.SetActive(false);

        for (int i = 0; i < 5; i++)
        {
            m_Buttons[i] = new sButton();
        }

        if(m_CoRefreshSoldoutState != null)
        {
            StopCoroutine(m_CoRefreshSoldoutState);
        }
        m_CoRefreshSoldoutState = null;
    }

    private void Start()
    {
        StartCoroutine(InitializeSupport());
    }

    IEnumerator InitializeSupport()
    {
        while (true)
        {
            if (UnityCommunicator.Instance.m_userData.token != null && UnityCommunicator.Instance.m_userData.token.Length > 0)
            {
                break;
            }
            yield return null;
        }

        DataTransfer.RequestURL(DataTransfer.DataType.ARTreasure_GetMyCouponList, (UnityCommunicator.Instance.m_userData.token + "?cp_contentid=" + UnityCommunicator.FestivalContentId), null, CouponBook.GlobalCouponSetting);
        DataTransfer.RequestURL(DataTransfer.DataType.ARTreasure_GetCouponList, (UnityCommunicator.Instance.m_userData.token), null, SetGiftList);
    }

    public void SetGiftList(string fullJson)
    {
        // 소지 쿠폰이 1개 이상이면 받을 수 있는 상품 목록 표시를 없앰.
        if (UnityCommunicator.Instance.m_userData.couponCount < 1)
        {
            ReceiveCoupon afk = JsonUtility.FromJson<ReceiveCoupon>(fullJson);

            if (afk.Result.ToLower().Equals("true"))
            {
                m_CouponListScrollMgr.ClearContents();
                for (int i = 0; i < afk.list.Length; i++)
                {
                    string[] _split = afk.list[i].cp_subject.Split(new char[] { ':' });
                    string _subject = "";
                    string _subject2 = "";
                    string _desc = "";

                    _subject = afk.list[i].cp_subject;
                    if (_split.Length > 0)
                        _subject = _split[0];
                    if (_split.Length > 1)
                    {
                        _desc = _split[1];
                        _desc = _desc.Replace("\\n", "\n");
                    }
                    else
                    {
                        _subject2 = _subject;
                    }
                    int _cidx = -1;
                    if (int.TryParse(afk.list[i].cp_id, out _cidx) == false)
                        _cidx = -1;

                    m_CouponListScrollMgr.AddScrollItem(
                        afk.list[i].cp_brandlogo,
                        afk.list[i].cp_image,
                        CouponType.Exchange,
                        _subject,
                        _subject2,
                        _desc,
                        false,
                        _cidx);
                }
            }
            m_CoRefreshSoldoutState = StartCoroutine(CoRefreshSoldoutState());
        } else
        {
            _ButtonSetting();
        }
    }

    IEnumerator CoRefreshSoldoutState()
    {
        while (true)
        {
            ReCalcSoldout();
            yield return new WaitForSeconds(1.0f);
        }
    }

    public void ReCalcSoldout()
    {
        DataTransfer.RequestURL(DataTransfer.DataType.ARTreasure_GetMyCouponList, (UnityCommunicator.Instance.m_userData.token + "?cp_contentid=" + UnityCommunicator.FestivalContentId), null, SubCouponSetting);
    }

    public void _helpReCalcSoldout(string fullJson)
    {
        JsonCouponSoldoutState afk = JsonUtility.FromJson<JsonCouponSoldoutState>(fullJson);
        if (afk.Result.ToLower().Equals("true"))
        {
            UnityCommunicator.Instance.m_userData.couponSoldoutState.Clear();
            for (int i = 0; i < afk.list.Length; i++)
            {
                m_CouponListScrollMgr[i + 1].m_textui_count.text = afk.list[i].cp_count + "개";
                if (afk.list[i].soldout_state.ToLower().Equals("true"))
                {
                    int _idx = int.Parse(afk.list[i].cp_id);
                    UnityCommunicator.Instance.m_userData.couponSoldoutState.Add(_idx, true);
                }
            }

            _ButtonSetting();
        }
        else
        {
            string sendMessage = UnityCommunicator.Instance.m_userData.token + "?cascade=2";
            DataTransfer.RequestURL(DataTransfer.DataType.HanwooriGO_CheckCouponSoldout, sendMessage, null, _helpReCalcSoldout);
        }
    }

    public void OpenCouponBook(System.Action _callBack)
    {
        if(m_OpenCouponBookCallback != null)
        {
            m_OpenCouponBookCallback -= m_OpenCouponBookCallback;
        }

#if true
        m_OpenCouponBookCallback = _callBack;

#if __COUPON_VERSION_2__
#else
        m_CouponListScrollMgr.ClearContents();
#endif
        string sendMessage = UnityCommunicator.Instance.m_userData.token + "?cp_contentid=" + UnityCommunicator.FestivalContentId;
        DataTransfer.RequestURL(DataTransfer.DataType.ARTreasure_GetMyCouponList, sendMessage, null, Callback_SettingCouponList);
#else
        if (Application.platform == RuntimePlatform.Android)
        {
            using (AndroidJavaClass jc_unityActivity = new AndroidJavaClass("kfestar.interfo.com.kfestar.Activity.UnityPlayerActivity"))
            using (AndroidJavaClass jc_unityplayerActivity = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
            using (AndroidJavaObject currActivity = jc_unityplayerActivity.GetStatic<AndroidJavaObject>("currentActivity"))
            {
                //AndroidJavaObject jo_context = currActivity.Call<AndroidJavaObject>("getApplicationContext");
                jc_unityActivity.CallStatic("MoveToFecoTab", currActivity);
            }
        }
        else
        {
            m_OpenCouponBookCallback = _callBack;

            m_CouponListScrollMgr.ClearContents();
            string sendMessage = UnityCommunicator.Instance.m_userData.token + "?cp_contentid=" + UnityCommunicator.FestivalContentId;
            DataTransfer.RequestURL(DataTransfer.DataType.ARTreasure_GetCouponList, sendMessage, null, Callback_SettingCouponList);
        }
#endif
    }

    void Callback_SettingCouponList(string fullJson)
    {
        GlobalCouponSetting(fullJson);

#if __COUPON_VERSION_2__
#else
        for (int i = 0; i < UnityCommunicator.Instance.m_userData.couponCount; i++)
        {
            CouponType _cType = CouponType.Discount;
            CouponData _data = UnityCommunicator.Instance.m_userData.couponList[i];

            if (_data.cp_type.Equals("교환"))
            {
                _cType = CouponType.Exchange;
            }

            m_CouponListScrollMgr.AddScrollItem(
                url_logo: _data.cp_brandlogo,
                url_thumnail: _data.cp_image,
                couponType: _cType,
                strCouponName: _data.cp_subject,
                //strPeriod: _data.cp_created.Split(' ')[0] + " ~ " + _data.cp_use_time.Split(' ')[0],
                strPeriod: _data.cp_created + " ~ " + _data.cp_use_time,
                isUsedCoupon: _data.cp_usecoupon.Equals("0") ? false : true,
                cidx: int.Parse(_data.idx)
            );
        }
#endif
        m_OpenCouponBookCallback?.Invoke();
    }

    public void Callback_SettingTakeCouponUI(string fullJson)
    {
        CoinBook.GlobalCoinSetting(fullJson);
        _ButtonSetting();

        if (m_currentCount_Couponbook != null)
            m_currentCount_Couponbook.text = UnityCommunicator.Instance.m_userData.coin_count.ToString();
        if (m_currentSlider_Couponbook != null)
            m_currentSlider_Couponbook.value = (float)UnityCommunicator.Instance.m_userData.coin_count / (float)UnityCommunicator.HWMaxCount;

        string sendMessage = UnityCommunicator.Instance.m_userData.token + "?cascade=1";
        DataTransfer.RequestURL(DataTransfer.DataType.HanwooriGO_CheckCouponSoldout, sendMessage, null, _helpSettingTakeCouponUI);
        _ButtonSetting();
    }

    public void _helpSettingTakeCouponUI(string fullJson)
    {
        JsonCouponSoldoutState afk = JsonUtility.FromJson<JsonCouponSoldoutState>(fullJson);

        if (afk.Result.ToLower().Equals("true"))
        {
            int _cpid = 0;
            UnityCommunicator.Instance.m_userData.couponSoldoutState.Clear();

            if (afk.list != null)
            {
                for (int i = 0; i < afk.list.Length; i++)
                {
                    if (int.TryParse(afk.list[i].cp_id, out _cpid))
                    {
                        if (!UnityCommunicator.Instance.m_userData.couponSoldoutState.ContainsKey(_cpid))
                        {
                            UnityCommunicator.Instance.m_userData.couponSoldoutState.Add(_cpid, true);
                        }
                    }
                }
            }
        }
        else
        {
            string sendMessage = UnityCommunicator.Instance.m_userData.token + "?cascade=1";
            DataTransfer.RequestURL(DataTransfer.DataType.HanwooriGO_CheckCouponSoldout, sendMessage, null, _helpSettingTakeCouponUI);
        }
        _ButtonSetting();
    }

    void _ButtonSetting()
    {
        if (UnityCommunicator.Instance.m_userData.couponCount > 0)
        {
            for (int i = 0; i < Images.Length; i++)
            {
                buttonUIMover[i].idx = i;
                bool _bFind = false;
                for(int j = 0; j < UnityCommunicator.Instance.m_userData.couponCount; j++)
                {
                    int _idx = int.Parse(UnityCommunicator.Instance.m_userData.couponList[j].cp_id);
                    if(i == (_idx - 1))
                    {
                        _bFind = true;
                        break;
                    }
                }

                if (_bFind)
                {
                    ImageCovers[i].enabled = true;
                    ImageCovers[i].sprite = m_imgExchanged;
                    ImageCovers[i].preserveAspect = true;
                    Images[i].sprite = m_imgTakeable[i];
                }
                else
                {
                    Images[i].sprite = m_imgNotTakeable[i];
                    ImageCovers[i].enabled = true;

                    if (UnityCommunicator.Instance.m_userData.couponSoldoutState.ContainsKey(i + 1))
                    {
                        ImageCovers[i].sprite = m_imgSoldOut;
                        ImageCovers[i].preserveAspect = true;
                    }
                    else
                    {
                        ImageCovers[i].color = new Color(1, 1, 1, 0);
                    }
                }
                m_Buttons[i].bNotAvailable = true;

                // 움직임 모두 해제
                buttonUIMover[i].bMoveEnable = false;
            }

            m_goScrollView.SetActive(false);
            m_goExistCoupon.SetActive(true);

            if (m_CoRefreshSoldoutState != null)
                StopCoroutine(m_CoRefreshSoldoutState);
            m_CoRefreshSoldoutState = null;
        }
        else
        {
            for (int i = 0; i < 5; i++)
            {
                buttonUIMover[i].idx = i;

                if (UnityCommunicator.Instance.m_userData.couponSoldoutState.ContainsKey(i + 1))
                {
                    Images[i].sprite = m_imgNotTakeable[i];
                    ImageCovers[i].sprite = m_imgSoldOut;
                    ImageCovers[i].enabled = true;
                    ImageCovers[i].preserveAspect = true;
                    m_Buttons[i].bSoldout = true;

                    // 매진된 쿠폰은 움직임 해제.
                    buttonUIMover[i].bMoveEnable = false;
                    continue;
                }
                else
                {
                    ImageCovers[i].enabled = false;
                }

                if(m_bImsiExchanged == true && i == m_bImsiIdx)
                {
                    ImageCovers[i].enabled = true;
                    ImageCovers[i].sprite = m_imgExchanged;
                }

                if ((10 * (i + 1)) <= UnityCommunicator.Instance.m_userData.coin_count)
                //                if (0 <= UnityCommunicator.Instance.m_userData.coin_count)
                {
                    Images[i].sprite = m_imgTakeable[i];
                    m_Buttons[i].bNotAvailable = false;

                    buttonUIMover[i].bMoveEnable = true;
                }
                else
                {
                    Images[i].sprite = m_imgNotTakeable[i];
                    m_Buttons[i].bNotAvailable = true;

                    buttonUIMover[i].bMoveEnable = false;
                }
            }
        }
    }

    public void Callback_TakeCouponButton(int i)
    {
        string sendMessage = UnityCommunicator.Instance.m_userData.token + "?cascade=1";
        DataTransfer.RequestURL(DataTransfer.DataType.HanwooriGO_CheckCouponSoldout, sendMessage, null, (fullJson) =>
        {
            _helpSettingTakeCouponUI(fullJson);

            if (UnityCommunicator.Instance.m_userData.couponCount > 0)
            {
                AlertPopup.Instance.DisplayMessage("획득 실패", "교환은 한번만\n가능합니다!");
            }
            else if (m_Buttons[i - 1].bSoldout == true)
            {
                AlertPopup.Instance.DisplayMessage("상품 교환 실패", "해당 상품이 매진되었습니다!");
            }
            else if (m_Buttons[i - 1].bNotAvailable == true)
            {
                AlertPopup.Instance.DisplayMessage("개수 부족", "한우리를 더 모아주세요!");
            }
            else
            {
                //TODO: 쿠폰받기
                AlertPopupEx.Instance.DisplayMessage("상품을 교환하시겠습니까?", "", "상품은 단 한번만 지급되며\n교환 이후에는 재교환 되지 않습니다.", () =>
                {
#if false
                    DataTransfer.RequestURL(DataTransfer.DataType.HanwooriGO_GetCoupon,
                        (UnityCommunicator.Instance.m_userData.token + "?" + "cp_contentid=" + UnityCommunicator.FestivalContentId + "&" + "feco=0&cid=" + i.ToString()),
                        null,
                        (fullJson2) =>
                        {

                            ReceiveCouponOnlyOne afk = JsonUtility.FromJson<ReceiveCouponOnlyOne>(fullJson2);

                            //m_bPressTakeCoupon = false;
                            if (afk.Result.ToLower().Equals("true"))
                            {
                                //m_AppConfig.PlaySFXCongratPopup();
                                m_TakeCouponMsg.gameObject.SetActive(true);
#if __COUPON_VERSION_2__
#else
                                CouponType _cType = CouponType.Discount;

                                if (afk.list.cp_type.Equals("교환"))
                                {
                                    _cType = CouponType.Exchange;
                                }

                                m_TakeCouponMsg.SetElement(
                                    afk.list.cp_brandlogo,
                                    afk.list.cp_image,
                                    _cType,
                                    afk.list.cp_subject,
                                    //afk.list.cp_created.Split(' ')[0] + " ~ " + afk.list.cp_use_time.Split(' ')[0],
                                    afk.list.cp_created + " ~ " + afk.list.cp_use_time,
                                    false,
                                    -1);
#endif
                            }

#if __COUPON_VERSION_2__
#else
                            m_CouponListScrollMgr.ClearContents();
#endif
                            m_OpenCouponBookCallback = null;
                            string sendMessage2 = UnityCommunicator.Instance.m_userData.token + "?cp_contentid=" + UnityCommunicator.FestivalContentId;
                            DataTransfer.RequestURL(DataTransfer.DataType.ARTreasure_GetMyCouponList, sendMessage2, null, Callback_SettingCouponList);
                        });
#else
                    m_bImsiExchanged = true;
                    m_bImsiIdx = i - 1;
                    m_GetCouponProgress.OnActiveSerialNumber();
                    m_GetCouponProgress.m_Idx = i;
#endif
                },
                () =>
                {
                    m_bImsiExchanged = false;
                });
            }
        });
    }

    public static void GlobalCouponSetting(string fullJson)
    {
        ReceiveCoupon afk = JsonUtility.FromJson<ReceiveCoupon>(fullJson);

        UnityCommunicator.Instance.m_userData.couponCount = 0;

        if (afk.Result.ToLower().Equals("true"))
        {
            UnityCommunicator.Instance.m_userData.couponCount = afk.list.Length;
            UnityCommunicator.Instance.m_userData.couponList = afk.list;
        }
        else
        {
            //Debug.LogError("===================> GlobalCouponSetting: " + fullJson);
            //AlertPopup.Instance.DisplayMessage("데이터 수신 지연", "잠시 후에 다시 시도해주세요.");
            byte[] unicode = System.Text.Encoding.UTF8.GetBytes(afk.Desc);
            string _desc = System.Text.Encoding.Default.GetString(unicode);
            //if (_desc.IndexOf("쿠폰이 없습니다.") == -1)
                Debug.Log("----------------> GlobalCouponSetting: " + _desc);
        }
    }

    public void SubCouponSetting(string fullJson)
    {
        ReceiveCoupon afk = JsonUtility.FromJson<ReceiveCoupon>(fullJson);

        UnityCommunicator.Instance.m_userData.couponCount = 0;

        if (afk.Result.ToLower().Equals("true"))
        {
            UnityCommunicator.Instance.m_userData.couponCount = afk.list.Length;
            UnityCommunicator.Instance.m_userData.couponList = afk.list;
        }
        else
        {
            //Debug.LogError("===================> SubCouponSetting: " + fullJson);
            byte[] unicode = System.Text.Encoding.UTF8.GetBytes(afk.Desc);
            string _desc = System.Text.Encoding.Default.GetString(unicode);
            //if (_desc.IndexOf("쿠폰이 없습니다.") == -1)
                Debug.Log("----------------> SubCouponSetting: " + _desc);
        }

        string sendMessage = UnityCommunicator.Instance.m_userData.token + "?cascade=2";
        DataTransfer.RequestURL(DataTransfer.DataType.HanwooriGO_CheckCouponSoldout, sendMessage, null, _helpReCalcSoldout);
    }

    /// <summary>
    /// 쿠폰 받기 메세지 닫기
    /// </summary>
    public void OnDisableGetCouponMsg()
    {
        m_TakeCouponMsg.gameObject.SetActive(false);
    }

    public bool IsPopupTakeCouponMsg()
    {
        return m_TakeCouponMsg.gameObject.activeSelf;
    }
}
