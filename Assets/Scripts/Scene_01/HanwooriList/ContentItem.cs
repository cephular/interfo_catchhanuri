using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ContentItem : MonoBehaviour
{
    [SerializeField]
    private Image image;

    private bool m_bBlind;

    public Button m_Button;
    public int idx;
    internal ListController m_ListController;

    public bool Blind
    {
        get { return m_bBlind; }
        private set { }
    }

    private void Awake()
    {
        image = GetComponent<Image>();
        m_Button = GetComponent<Button>();
    }

    private void Start()
    {
        m_Button.onClick.RemoveAllListeners();
        m_Button.onClick.AddListener(Callback_OpenHanuriInfo);
    }

    public void SetIcon(Sprite mySprite)
    {
        image.sprite = mySprite;
    }

    public void SetBlind(bool bBlind)
    {
        m_bBlind = bBlind;
        Color color = new Color(1, 1, 1, 1);
        color.r = 1 * (m_bBlind ? 0 : 1);
        color.g = 1 * (m_bBlind ? 0 : 1);
        color.b = 1 * (m_bBlind ? 0 : 1);
        image.color = color;
    }

    public void Callback_OpenHanuriInfo()
    {
        if(m_ListController != null && m_ListController.m_CoinBook != null)
        {
            m_ListController.m_CoinBook.ViewHanuriInfo(idx, m_bBlind);
        }
    }
}
