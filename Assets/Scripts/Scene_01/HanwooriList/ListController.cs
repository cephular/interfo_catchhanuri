using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ListController : MonoBehaviour
{
    [SerializeField]
    private int m_ConstraintCount_Width = 5;
    [SerializeField]
    private int m_ConstraintCount_Height = 5;

    [SerializeField]
    private GridLayoutGroup m_gridGroup;
    [SerializeField]
    private RectTransform m_rtViewport;

    internal List<CItem> m_lstContentItems;

    [SerializeField]
    private GameObject buttonTemplate;

    [SerializeField]
    private Sprite[] iconSprites;

    [SerializeField]
    private GameObject m_Content;

    public CoinBook m_CoinBook;

    public class CItem
    {
        public int idx;
        public GameObject gameObject;
        public Sprite iconSprite;
    }

    private void Awake()
    {
        m_gridGroup.constraintCount = m_ConstraintCount_Width;

        for (int i = 0; i < 50; i++)
        {
            GameObject _newButton = Instantiate(buttonTemplate) as GameObject;
            _newButton.SetActive(true);
            _newButton.transform.SetParent(m_Content.transform, false);
        }

        Rect _rectViewport = m_rtViewport.rect;
        float _sw = _rectViewport.width / m_ConstraintCount_Width * 0.1f;
        float _w = _rectViewport.width / m_ConstraintCount_Width - (_sw);
        float _sh = _rectViewport.height / m_ConstraintCount_Height * 0.12f;
        float _h = _rectViewport.height / m_ConstraintCount_Height - (_sh);
        m_gridGroup.cellSize = new Vector2(_w, _h);
        m_gridGroup.spacing = new Vector2(_sw * 0.5f, 0);

        m_lstContentItems = new List<CItem>();

        for (int i = 0; i < m_Content.transform.childCount; i++)
        {
            CItem _item = new CItem();
            _item.idx = i;
            _item.gameObject = m_Content.transform.GetChild(i).gameObject;

            m_lstContentItems.Add(_item);
        }

        InitDB(true, true);
    }

    public void InitDB(bool bSprite = false, bool bFirst = false)
    {
        for (int i = 0; i < m_lstContentItems.Count; i++)
        {
            ContentItem _item = m_lstContentItems[i].gameObject.GetComponent<ContentItem>();

            if (bSprite == true)
            {
                _item.SetIcon(UnityCommunicator.Instance.m_HanuriDB[i].img); // 블라인드 설정이라서 잡은 내역과는 반대로 설정.
            }

            if(bFirst == true)
            {
                _item.idx = i;
                _item.m_ListController = this;
            }

            //if (bFirst == false && UnityCommunicator.Instance.m_userData.catchedVerify[i] == false) continue;

            _item.SetBlind(!UnityCommunicator.Instance.m_userData.catchedVerify[i]); // 블라인드 설정이라서 잡은 내역과는 반대로 설정.
        }
    }

    // Start is called before the first frame update
    void Start()
    {
    }

    public int SetBlind(int idx, bool bBlind)
    {
        if (m_lstContentItems.Count <= idx) return 1;

        ContentItem _item = m_lstContentItems[idx].gameObject.GetComponent<ContentItem>();

        if (_item == null) return 2;

        _item.SetBlind(bBlind);

        return 0;
    }

    public bool GetBlind(int idx)
    {
        if (m_lstContentItems.Count <= idx) return false;
        ContentItem _item = m_lstContentItems[idx].gameObject.GetComponent<ContentItem>();

        if (_item == null) return false;
        
        return _item.Blind;
    }

    public int SetIcon(int idx, Sprite sprite)
    {
        if (m_lstContentItems.Count <= idx) return 1;
        ContentItem _item = m_lstContentItems[idx].gameObject.GetComponent<ContentItem>();
        if (_item == null) return 2;
        m_lstContentItems[idx].iconSprite = sprite;
        _item.SetIcon(m_lstContentItems[idx].iconSprite);

        return 0;
    }

    public Sprite GetSprite(int idx)
    {
        if (m_lstContentItems.Count <= idx) return null;
        ContentItem _item = m_lstContentItems[idx].gameObject.GetComponent<ContentItem>();
        if (_item == null) return null;

        return m_lstContentItems[idx].iconSprite;
    }
}
