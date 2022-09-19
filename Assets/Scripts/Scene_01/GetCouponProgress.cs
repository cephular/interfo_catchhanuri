using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GetCouponProgress : MonoBehaviour
{
    public CouponBook m_CouponBook;
    public int m_Idx;

    public Canvas m_Canvas;
    public TMP_InputField inputField;

    public AppConfig m_AppConfig;

    // Start is called before the first frame update
    void Start()
    {
        //gameObject.SetActive(false);
    }

    public void OnActiveSerialNumber()
    {
        gameObject.SetActive(true);
    }

    public void OnDeactiveSerialNumber()
    {
        m_CouponBook.m_bImsiExchanged = false;
        m_CouponBook.m_bImsiIdx = 0;
        m_CouponBook.ReCalcSoldout();
        gameObject.SetActive(false);
    }

    public void OnPushConfirm()
    {
        if (inputField.text.Equals(UnityCommunicator.CouponPassword) == false)
        {
            AlertPopup.Instance.DisplayMessage("Serial Number :", "확인번호가 틀렸습니다.");
            inputField.text = "";
        }
        else
        {
            DataTransfer.RequestURL(DataTransfer.DataType.HanwooriGO_GetCoupon,
                (UnityCommunicator.Instance.m_userData.token + "?" + "cp_contentid=" + UnityCommunicator.FestivalContentId + "&" + "feco=0&cid=" + m_Idx),
                null,
                (fullJson2) =>
                {

                    ReceiveCouponOnlyOne afk = JsonUtility.FromJson<ReceiveCouponOnlyOne>(fullJson2);

                    //m_bPressTakeCoupon = false;
                    if (afk.Result.ToLower().Equals("true"))
                    {
                        //m_AppConfig.PlaySFXCongratPopup();
#if __COUPON_VERSION_2__
#else
                        CouponType _cType = CouponType.Discount;

                        if (afk.list.cp_type.Equals("교환"))
                        {
                            _cType = CouponType.Exchange;
                        }
#endif
                    }

                    //TODO: 쿠폰목록 다시 불러오기
                    m_CouponBook.m_bImsiExchanged = false;
                    m_CouponBook.m_bImsiIdx = 0;
                    m_CouponBook.ReCalcSoldout();
                    gameObject.SetActive(false);
                    inputField.text = "";
                });
        }
    }
}
