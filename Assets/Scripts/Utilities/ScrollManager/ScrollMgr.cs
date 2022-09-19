using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public enum CouponType
{
    Discount, Exchange,
}

[RequireComponent(typeof(VerticalLayoutGroup))]
public class ScrollMgr : MonoBehaviour {

    static ScrollMgr s_instance;
    internal static ScrollMgr Instance {
        get {
            if (!s_instance) {
                s_instance = FindObjectOfType<ScrollMgr>();
            }
            return s_instance;
        }
    }

    //여기에 할인, 교환 등 쿠폰의 종류를 추가
    //스크롤 항목 설정 양
    public class ScrollItemSettingForm {
        public float scrollItem_height;
        public RectOffset padding;
        public float spacing;
    }

    #region 상수
    const int Ref_Resolution_X = 1440;
    const int Ref_Resolution_Y = 2560;
    const int Ref_Scrollitem_Height = 150; // 250

    readonly float m_itemSpacing = Screen.height * 300 / Ref_Resolution_Y; // 30
    readonly float m_itemHeight = Screen.height * Ref_Scrollitem_Height / Ref_Resolution_Y;
    #endregion //상수

    public UseCouponProgress m_UseCouponProgress;
    public Transform m_trScroll_contents;
    public Transform s_parentScrollItemBundle;

    GameObject m_prefabScrollItem;

    #region vertical layout group
    VerticalLayoutGroup m_verticalLayoutGroup;
    ScrollItemSettingForm m_settingForm = new ScrollItemSettingForm();
    RectOffset m_rectOffset;
    #endregion //vertical layout group


    //스크롤아이템을 cidx를 이용하여 색인하기 위한 용도
    Dictionary<int, ScrollCouponItem> m_dicScrollItem = new Dictionary<int, ScrollCouponItem>();

    internal ScrollCouponItem this[int cidx] {
        get {
            if (!m_dicScrollItem.ContainsKey(cidx))
            {
                return null;
            }
            return m_dicScrollItem[cidx];
        }
        set {
            m_dicScrollItem[cidx] = value;
        }
    }

    internal int GetScrollItemCount() {
        return m_dicScrollItem.Count;
    }
    //test

    public int m_cidx_test = 0;
    //


    void Awake() {
        s_instance = this;
        m_verticalLayoutGroup = GetComponent<VerticalLayoutGroup>();

        //스크롤항목 로드
        m_prefabScrollItem = Resources.Load<GameObject>("ui/scroll_item/coupon_item_re");
        SetScrollItemSize();
    }

    void Start() {
        //Debug.Log("screen : " + Screen.width + " x " + Screen.height);

       
    }

    void SetScrollItemSize() {
        const int Scrollitem_Height = Ref_Scrollitem_Height;
        //스크롤 항목 설정
        var padding = m_verticalLayoutGroup.padding;
        m_rectOffset = new RectOffset(
                      Screen.width * padding.left / Ref_Resolution_X,
                      Screen.width * padding.right / Ref_Resolution_X,
                      Screen.height * padding.top / Ref_Resolution_Y,
                      Screen.height * padding.bottom / Ref_Resolution_Y
        );

        m_settingForm.padding = m_rectOffset;
        m_settingForm.spacing = Screen.height * m_verticalLayoutGroup.spacing / Ref_Resolution_Y;
        m_settingForm.scrollItem_height = Screen.height * Scrollitem_Height / Ref_Resolution_Y;
    }

    //void Update() {
    //    if (Input.GetKeyDown(KeyCode.A)) {
    //        //기존 항목을 contents에 제거
    //        //ClearContents();
    //        AddScrollItem(
    //            url_logo: "https://img1.daumcdn.net/thumb/R720x0.q80/?scode=mtistory&fname=http%3A%2F%2Fcfile29.uf.tistory.com%2Fimage%2F1706744D4D8852EE1A8A93",
    //            url_thumnail:"http://www.econovill.com/news/photo/201612/304768_133191_136.JPG",
    //            couponType:CouponType.Discount,
    //            strCouponName:"cokejoa",
    //            strPeriod:"2019.05.01 ~ 2019.05.30",
    //            isUsedCoupon:false,
    //            cidx: m_cidx_test++
    //        );
    //    }

    //    if (Input.GetKeyDown(KeyCode.E)) {
    //        //기존 항목을 contents에 제거
    //        //ClearContents();
    //        ClearContents();
    //    }

    //    if (Input.GetKeyDown(KeyCode.Keypad1))
    //    {
    //        m_trScroll_contents.GetChild(1).GetComponent<ScrollCouponItem>().SetBlind(true);
    //    }

    //    if (Input.GetKeyDown(KeyCode.Keypad0))
    //    {
    //        m_trScroll_contents.GetChild(0).GetComponent<ScrollCouponItem>().SetBlind(true);
    //    }

    //    if (Input.GetKeyDown(KeyCode.Keypad2))
    //    {
    //        m_trScroll_contents.GetChild(2).GetComponent<ScrollCouponItem>().SetBlind(true);
    //    }
    //}

    public void ClearContents() {
        //기존 항목을 contents에 제거
        //m_trScroll_contents.DetachChildren();
        int length = m_trScroll_contents.childCount;
        for (int i = 0; i < length; ++i) {
            var trItem = m_trScroll_contents.GetChild(0);
            if (trItem.gameObject.activeSelf) {
                trItem.gameObject.SetActive(false);
            }
            trItem.SetParent(s_parentScrollItemBundle);

            //
            Destroy(trItem.gameObject);
            m_dicScrollItem.Remove(trItem.GetComponent<ScrollCouponItem>().cidx);
        }
    }

    public void AddScrollItem(
        string url_logo, string url_thumnail, CouponType couponType,
        string strCouponName, string strCouponName2, string strPeriod, bool isUsedCoupon, int cidx) {

        GameObject item = Instantiate(m_prefabScrollItem);

        //항목을 contents에 추가
        if (!item.activeSelf) { item.SetActive(true); }

        //var trItem= item.transform;
        item.transform.SetParent(m_trScroll_contents);
        item.transform.localScale = Vector3.one;
        //

        var sci = item.GetComponent<ScrollCouponItem>();

#if true
        sci.SetUseCouponProgressClass(m_UseCouponProgress);
        sci.SetElement(url_logo, url_thumnail, couponType, strCouponName, strCouponName2, strPeriod, isUsedCoupon, cidx);
#else
        //sci.m_rawimg_discountNExchange = null;
        switch (couponType)
        {
            case CouponType.Discount:
                sci.m_rawimg_discountNExchange.material = sci.DiscntMaterial;
                break;

            case CouponType.Exchange:
                sci.m_rawimg_discountNExchange.material = sci.ExchgMaterial;
                break;
        }
        sci.SetUseCouponProgressClass(m_UseCouponProgress);
        sci.m_textui_couponName.text = strCouponName;
        sci.m_textui_period.text = strPeriod;
        sci.cidx = cidx;
        sci.SetExchgNDiscnt(couponType);

        if (url_logo.Length < 1)
        {
            Color aa = sci.m_rawimg_logo.color;
            aa.a = 0.0f;
            sci.m_rawimg_logo.color = aa;
        }
        else
        {
            WebRequestHandler.Instance.GetTextureFromWebServer(url_logo, (texture) =>
            {
                sci.m_rawimg_logo.texture = texture;
                sci.m_rawimg_logo.GetComponent<AspectRatioFitter>().aspectRatio = (float)sci.m_rawimg_logo.texture.width / (float)sci.m_rawimg_logo.texture.height;
                //for (int i = 0; i < m_trScroll_contents.childCount; i++)
                //{
                //    ScrollCouponItem _sci = m_trScroll_contents.GetComponent<ScrollCouponItem>();
                //    if (_sci != null && _sci.cidx == cidx)
                //    {
                //        _sci.m_rawimg_logo.texture = texture;
                //        break;
                //    }
                //}
            });
        }


        if (url_thumnail.Length < 1)
        {
            Color aa = sci.m_rawimg_thumnail.color;
            aa.a = 0.0f;
            sci.m_rawimg_thumnail.color = aa;
        }
        else
        {
            WebRequestHandler.Instance.GetTextureFromWebServer(url_thumnail, (texture) =>
            {
                sci.m_rawimg_thumnail.texture = texture;
                sci.m_rawimg_thumnail.GetComponent<AspectRatioFitter>().aspectRatio = (float)sci.m_rawimg_thumnail.texture.width / (float)sci.m_rawimg_thumnail.texture.height;
                //for (int i = 0; i < m_trScroll_contents.childCount; i++)
                //{
                //    ScrollCouponItem _sci = m_trScroll_contents.GetComponent<ScrollCouponItem>();
                //    if (_sci != null && _sci.cidx == cidx)
                //    {
                //        _sci.m_rawimg_thumnail.texture = texture;
                //        break;
                //    }
                //}
            });
        }
        //쿠폰을 사용여부에 따른 블라인드 설정 
        sci.SetBlind(isUsedCoupon);
#endif

        //색인을 위해서 인스턴스 저장
        SaveScrollItemInstance(cidx, sci);
   
        //항목 개수 만큼 contents size 조절
        int length = m_trScroll_contents.childCount;
        ResizeContents(m_settingForm, length);
    }

    void SaveScrollItemInstance(int cidx, ScrollCouponItem sci) {
        //색인을 위해서 인스턴스 저장
        if (m_dicScrollItem.ContainsKey(cidx)) {
            Destroy(m_dicScrollItem[cidx].gameObject);
            m_dicScrollItem[cidx] = sci;
        }
        else {
            m_dicScrollItem.Add(cidx, sci);
        }

    }

    void ResizeContents(ScrollItemSettingForm settingForm, int numOfItem) {

        //항목 개수 만큼 contents size 조절
        float contentsRectHeight =
                       settingForm.padding.top +
                       settingForm.padding.bottom +
                       settingForm.spacing * (numOfItem - 1) +
                       numOfItem * settingForm.scrollItem_height;

        var rectContents = m_trScroll_contents.GetComponent<RectTransform>();
        rectContents.sizeDelta = new Vector2(0, contentsRectHeight);

        //vertical layout group 조정
        m_verticalLayoutGroup.padding = settingForm.padding;
        m_verticalLayoutGroup.spacing = settingForm.spacing;
    }
}
