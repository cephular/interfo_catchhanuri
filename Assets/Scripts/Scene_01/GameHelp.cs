using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameHelp : MonoBehaviour
{
    public Image m_SkipStartButton;
    public Sprite m_SkipSprite;
    public Sprite m_StartSprite;

    private void Awake()
    {
        // 시작할 때 종횡비 맞춤 설정 강제.
        m_SkipStartButton.preserveAspect = true;
    }

    private void Start()
    {
        m_SkipStartButton.sprite = m_SkipSprite;
    }

    private void OnEnable()
    {
        m_SkipStartButton.sprite = m_SkipSprite;
    }

    /// <summary>
    /// page index가 5(6번째 페이지)이면 '시작하기', 이외는 'Skip >' 이미지로 치환.
    /// </summary>
    /// <param name="_page"></param>
    public void OnGameHelpPageChanged(int _page)
    {
        switch(_page)
        {
            case 5:
                m_SkipStartButton.sprite = m_StartSprite;
                break;

            default:
                m_SkipStartButton.sprite = m_SkipSprite;
                break;
        }
    }
}
