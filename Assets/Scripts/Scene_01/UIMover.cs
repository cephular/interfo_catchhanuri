using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIMover : MonoBehaviour
{
    public bool bMoveEnable;
    public int idx;

    RectTransform m_rt;
    Rect m_initRect;

    bool m_bProgressUp;
    float m_fCurrentY;
    float m_fDestPositionDown;
    float m_fDestPositionUp;

    float m_fSlideSpeed = 5.5f;
    float m_storedTime;
    float m_storedTime2;
    int m_iCount;

    private void Awake()
    {
        m_rt = gameObject.GetComponent<RectTransform>();
        m_initRect = m_rt.rect;
        m_bProgressUp = true;
        bMoveEnable = false;
    }

    // Start is called before the first frame update
    void Start()
    {
        m_fCurrentY = 0.0f;
        m_bProgressUp = true;

        m_fDestPositionUp = (m_rt.rect.yMax - m_rt.rect.yMin) * 0.125f;
        m_fDestPositionDown = 0.0f;
    }

    private void OnEnable()
    {
        m_rt.offsetMin = new Vector2(0, 0);
        m_rt.offsetMax = new Vector2(0, 0);

        m_storedTime = (3.14159274F * 0.5f);
        m_bProgressUp = true;
        m_iCount = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if(bMoveEnable == false)
        {
            m_rt.offsetMin = new Vector2(0, 0);
            m_rt.offsetMax = new Vector2(0, 0);
            m_storedTime = (3.14159274F * 0.5f);
            m_bProgressUp = true;
            m_iCount = 0;
            m_storedTime2 = 0.0f;
            return;
        }

#if true
        m_storedTime = m_storedTime + (Time.deltaTime * m_fSlideSpeed);
        float _sine = (Mathf.Sin(m_storedTime) + 1.0f) * 0.5f;

        if(m_bProgressUp == true)
        {
            if(_sine > 0.99f)
            {
                m_bProgressUp = false;
                m_iCount++;
            }
        }
        else
        {
            if(_sine < 0.01f)
            {
                m_bProgressUp = true;
                m_iCount++;
            }
        }

        if(m_iCount > 4)
        {
            m_rt.offsetMin = new Vector2(0, 0);
            m_rt.offsetMax = new Vector2(0, 0);

            m_storedTime2 += Time.deltaTime;
            if(m_storedTime2 >= 2)
            {
                m_iCount = 0;
                m_bProgressUp = true;
                m_storedTime2 = 0.0f;
                m_storedTime = (3.14159274F * 0.5f);
            }
            return;
        }

        m_fCurrentY = Mathf.SmoothStep(m_fDestPositionUp, m_fDestPositionDown, _sine);
#else
        m_fCurrentY = Mathf.SmoothStep(m_fCurrentY, m_bProgressUp ? m_fDestPositionUp : m_fDestPositionDown, m_fSlideSpeed * Time.deltaTime);

        if(m_bProgressUp == true)
        {
            if(m_fCurrentY >= (m_fDestPositionUp * 0.98f))
            {
                m_fCurrentY = m_fDestPositionUp;
                m_bProgressUp = false;
            }
        }
        else
        {
            if (m_fCurrentY <= (m_fDestPositionUp * 0.02f))
            {
                m_fCurrentY = m_fDestPositionDown;
                m_bProgressUp = true;
            }
        }
#endif
        m_rt.offsetMin = new Vector2(0, m_fCurrentY);
        m_rt.offsetMax = new Vector2(0, m_fCurrentY);
    }
}
