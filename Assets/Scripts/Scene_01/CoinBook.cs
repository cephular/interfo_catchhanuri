using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class CoinBook : MonoBehaviour
{
    public Image m_GetCouponButtonImage;
    public ListController m_HanuriList;
    private int m_CoinCount;
    
    public ScrollCouponItem m_TakeCouponMsg;
    private System.Action m_TakeCouponCallback_coin = null;
    private System.Action m_TakeCouponCallback_coupon = null;
    private bool m_bPressTakeCoupon;

    public TMP_Text m_currentCount;
    public Slider m_currentSlider;

    public GameObject m_goHanuriInfoMessage;
    public TMP_Text m_txtHanuriInfoName;
    public TMP_Text m_txtHanuriInfoGreeting;
    public Image m_imgHanuriInfoImage;

    internal TBFinder m_TBFinder;

    private void Awake()
    {
        m_CoinCount = 0;

        if (m_TakeCouponMsg != null) m_TakeCouponMsg.gameObject.SetActive(false);
        m_bPressTakeCoupon = false;

        m_HanuriList.m_CoinBook = this;
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

        DataTransfer.RequestURL(DataTransfer.DataType.HanwooriGO_GetHWList, (UnityCommunicator.Instance.m_userData.token), null, GlobalCoinSetting);
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

    /// <summary>
    /// 쿠폰 받기 버튼
    /// </summary>
    /// <param name="_callBack_coin"></param>
    /// <param name="_callBack_coupon"></param>
    public void OnTakeCouponButton(System.Action _callBack_coin, System.Action _callBack_coupon)
    {
        if (m_bPressTakeCoupon == true) return;
        m_bPressTakeCoupon = true;

        if (m_TakeCouponCallback_coin != null)
        {
            m_TakeCouponCallback_coin -= m_TakeCouponCallback_coin;
        }
        m_TakeCouponCallback_coin = _callBack_coin;

        if (m_TakeCouponCallback_coupon != null)
        {
            m_TakeCouponCallback_coupon -= m_TakeCouponCallback_coupon;
        }
        m_TakeCouponCallback_coupon = _callBack_coupon;

        DataTransfer.RequestURL(DataTransfer.DataType.ARTreasure_GetCoupon,
            //(UnityCommunicator.Instance.m_userData.token + "?" + "cp_contentid=" + UnityCommunicator.FestivalContentId + "&" + "feco_count=" + UnityCommunicator.Instance.m_userData.coin_count),
            (UnityCommunicator.Instance.m_userData.token + "?" + "cp_contentid=" + UnityCommunicator.FestivalContentId + "&" + "feco=" + UnityCommunicator.FECOExchangeCount),
            null,
            (fullJson) =>
            {
                ReceiveCouponOnlyOne afk = JsonUtility.FromJson<ReceiveCouponOnlyOne>(fullJson);

                m_bPressTakeCoupon = false;
                if (afk.Result.ToLower().Equals("true"))
                {
                    //m_AppConfig.PlaySFXCongratPopup();
                    m_TakeCouponMsg.gameObject.SetActive(true);
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
                        "",
                        afk.list.cp_created.Split(' ')[0] + " ~ " + afk.list.cp_use_time.Split(' ')[0],
                        false,
                        -1);

                }

                DataTransfer.RequestURL(DataTransfer.DataType.ARTreasure_GetCoinCount, (UnityCommunicator.Instance.m_userData.token), null, __Callback_CoinRefresh);
                DataTransfer.RequestURL(DataTransfer.DataType.ARTreasure_GetMyCouponList, (UnityCommunicator.Instance.m_userData.token + "?cp_contentid=" + UnityCommunicator.FestivalContentId), null, __Callback_CouponRefresh);
            });
    }

    public void __Callback_CoinRefresh(string fullJson)
    {
        CoinBook.GlobalCoinSetting(fullJson);
        SetCoinCount();
        m_TakeCouponCallback_coin?.Invoke();
    }

    public void __Callback_CouponRefresh(string fullJson)
    {
        CouponBook.GlobalCouponSetting(fullJson);
        m_TakeCouponCallback_coupon?.Invoke();
    }

    public static void GlobalCoinSetting(string fullJson)
    {
        int _coinCount = 0;
        ReceiveCoin afk = JsonUtility.FromJson<ReceiveCoin>(fullJson);


        if (afk.Result.ToLower().Equals("true"))
        {
            if (afk.list != null && afk.list.Length > 0)
            {
                //UnityCommunicator.Instance.m_userData.catchedVerify = System.Array.ConvertAll<bool, bool>(UnityCommunicator.Instance.m_userData.catchedVerify, b => b = false);
                UnityCommunicator.Instance.m_userData.catchedVerify = Enumerable.Repeat<bool>(false, 50).ToArray();

                string[] _split = afk.list.Split(new char[] { ',' });
                int _idx = -1;
                _coinCount = _split.Length;
                if (_split.Length > 0)
                {
                    for (int i = 0; i < _coinCount; i++)
                    {
                        if(int.TryParse(_split[i], out _idx))
                        {
                            UnityCommunicator.Instance.m_userData.catchedVerify[_idx] = true;
                        }
                    }
                }
            }
        }
        UnityCommunicator.Instance.m_userData.coin_count = _coinCount;
    }

    public void CoinLoad(string fullJson, bool bMessage = false)
    {
        GlobalCoinSetting(fullJson);

        SetCoinCount();

        //if (bMessage == true && UnityCommunicator.Instance.m_userData.coin_count >= 15)
        //{
        //    AlertPopup.Instance.DisplayMessage("페코 최대치", "쿠폰함에서 쿠폰받기를 하신 후,\n다시 이용해주세요.");
        //}
    }

    private void SetCoinCount()
    {
        m_HanuriList.InitDB();

        //TODO: 상단에 게이지와 현황 수정
        if (m_currentCount != null)
            m_currentCount.text = UnityCommunicator.Instance.m_userData.coin_count.ToString();
        if (m_currentSlider != null)
            m_currentSlider.value = (float)UnityCommunicator.Instance.m_userData.coin_count / (float)UnityCommunicator.HWMaxCount;
    }

    public void ViewHanuriInfo(int idx, bool bBlind)
    {
        m_TBFinder.m_AppConfig.PlaySFXBaseTouch();

        m_goHanuriInfoMessage.SetActive(true);
        m_imgHanuriInfoImage.sprite = UnityCommunicator.Instance.m_HanuriDB[idx].img;

        if (bBlind == true)
        {
            m_imgHanuriInfoImage.color = new Color(0, 0, 0);
            m_txtHanuriInfoGreeting.text = "나를 얼른 찾아줘!";

            string _name = "나를 찾으면 이름을 알려줄께.";
            m_txtHanuriInfoName.text = _name;
        }
        else
        {
            m_imgHanuriInfoImage.color = new Color(1, 1, 1);
            m_txtHanuriInfoGreeting.text = "안녕?";

            string _name = UnityCommunicator.Instance.m_HanuriDB[idx].name;
            _name = "나는 \"" + _name + (_name.Substring(_name.Length - 1).Equals("리") ? ("\"야!") : ("\"이야!"));
            m_txtHanuriInfoName.text = _name;
        }
    }
}
