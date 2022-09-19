using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;



public class ScrollCouponItem : MonoBehaviour
{
    private UseCouponProgress m_UseCouponProgress;

    public RawImage m_rawimg_thumnail;
    public RawImage m_rawimg_logo;
    public RawImage m_rawimg_discountNExchange;
    public Text m_textui_couponName;
    public Text m_textui_couponName2;
    public Text m_textui_period;
    public Button m_btn_useCoupon;
    public Material DiscntMaterial;
    public Material ExchgMaterial;
    public Text m_text_DiscountNExchange;
    public Text m_textui_countText;
    public Text m_textui_count;

    [Header("<쿠폰 사용 후 블라인드 이미지>")]
    public GameObject m_blind;
    [Space(20)]


    internal int cidx;
    internal bool isUsedCoupon;

    public void SetUseCouponProgressClass(UseCouponProgress p)
    {
        this.m_UseCouponProgress = p;
    }

    internal void SetExchgNDiscnt(CouponType _type)
    {
        switch(_type)
        {
            case CouponType.Exchange:
                m_text_DiscountNExchange.text = "교환";
                break;

            case CouponType.Discount:
                m_text_DiscountNExchange.text = "할인";
                break;
        }
    }

    internal void SetBlind(bool isUsedCoupon) {

        this.isUsedCoupon = isUsedCoupon;

        //쿠폰을 사용여부에 따른 버튼 활성화/비활성화
        if(m_btn_useCoupon != null) m_btn_useCoupon.interactable = !isUsedCoupon;

        if (m_blind != null && m_blind.activeSelf != isUsedCoupon) {
            m_blind.SetActive(isUsedCoupon);
        }
    }

    public void OnPushButtonUseCoupon()
    {
        m_UseCouponProgress.m_Idx = cidx;
        m_UseCouponProgress.OnActiveSerialNumber();
    }

    public void SetElement(
        string url_logo, string url_thumnail, CouponType couponType,
        string strCouponName, string strCouponName2, string strPeriod, bool isUsedCoupon, int cidx)
    {
        switch (couponType)
        {
            case CouponType.Discount:
                m_rawimg_discountNExchange.material = DiscntMaterial;
                break;

            case CouponType.Exchange:
                m_rawimg_discountNExchange.material = ExchgMaterial;
                break;
        }
        m_textui_couponName.text = strCouponName;
        m_textui_period.text = strPeriod;
        if(strCouponName2.Length > 0)
        {
            m_textui_couponName.enabled = false;
            m_textui_period.enabled = false;

            m_textui_couponName2.enabled = true;
            m_textui_couponName2.text = strCouponName2;
        }
        this.cidx = cidx;
        SetExchgNDiscnt(couponType);

        if (url_logo.Length < 1)
        {
            Color aa = m_rawimg_logo.color;
            aa.a = 0.0f;
            m_rawimg_logo.color = aa;
        }
        else
        {
            WebRequestHandler.Instance.GetTextureFromWebServer(url_logo, (texture) =>
            {
                m_rawimg_logo.texture = texture;
                m_rawimg_logo.GetComponent<AspectRatioFitter>().aspectRatio = (float)m_rawimg_logo.texture.width / (float)m_rawimg_logo.texture.height;
            });
        }


        if (url_thumnail.Length < 1)
        {
            Color aa = m_rawimg_thumnail.color;
            aa.a = 0.0f;
            m_rawimg_thumnail.color = aa;
        }
        else
        {
            WebRequestHandler.Instance.GetTextureFromWebServer(url_thumnail, (texture) =>
            {
                m_rawimg_thumnail.texture = texture;
                m_rawimg_thumnail.GetComponent<AspectRatioFitter>().aspectRatio = (float)m_rawimg_thumnail.texture.width / (float)m_rawimg_thumnail.texture.height;
            });
        }

        //쿠폰을 사용여부에 따른 블라인드 설정 
        SetBlind(isUsedCoupon);
    }
}
