using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

[RequireComponent(typeof(RectTransform))]
public class SlidingHide : MonoBehaviour
{
    public GameObject m_ShaftObjRectTransform;
    public RectTransform ButtonRt;
    public float m_SlideSpeed = 100.0f;

    private RectTransform ShaftRt;
    private float m_fDestPositionUp, m_fDestPositionDown;
    private float m_fCurrentY;
    private bool m_bFinish;
    private bool m_bUp;

#if false
    [System.Serializable]
    public class Alphass
    {
        public int level;
        public float timeElapsed;
        public string playerName;
    }

    void Awake()
    {
        string jsonString = "{\"level\":1,\"timeElapsed\":47.5,\"playerName\":\"Dr Charles Francis\"}";
        //string jsonString = "{\"level\":\"1\",\"playerName\":\"Dr Charles Francis\"}";
        Alphass myObj = new Alphass();
        JsonUtility.FromJsonOverwrite(jsonString, myObj);

        string jsonString2 = JsonUtility.ToJson(myObj);

        bool asd;
        asd = jsonString.Equals(jsonString2);
    }
#endif

    // Start is called before the first frame update
    void Start()
    {
        RectTransform rt = GetComponent<RectTransform>();
        ShaftRt = m_ShaftObjRectTransform.GetComponent<RectTransform>();

        // 얼마나 올릴지에 대한 값을 계산.
        float dY = ShaftRt.anchorMax.y - ShaftRt.anchorMin.y;
        float dSizeY = rt.rect.height * dY;
        float buttonSizeY = dSizeY * ButtonRt.anchorMax.y;
        float dUpLength = dSizeY - buttonSizeY;

        m_fCurrentY = 0.0f;
        m_fDestPositionDown = 0.0f;
        m_fDestPositionUp = dUpLength;

        m_bFinish = true;
        m_bUp = false;
    }

    // Update is called once per frame
    void Update()
    {
        if(m_bFinish == false)
        {
            m_fCurrentY = Mathf.SmoothStep(m_fCurrentY, m_bUp ? m_fDestPositionUp : m_fDestPositionDown, m_SlideSpeed * (Time.deltaTime * 1.0f));
            
            if(m_bUp == true)
            {
                if (m_fCurrentY >= (m_fDestPositionUp * 0.98f))
                {
                    m_fCurrentY = m_fDestPositionUp;
                    m_bFinish = true;
                }
            }
            else
            {
                if (m_fCurrentY <= (m_fDestPositionUp * 0.02f))
                {
                    m_fCurrentY = m_fDestPositionDown;
                    m_bFinish = true;
                }
            }

            ShaftRt.offsetMin = new Vector2(0, m_fCurrentY);
            ShaftRt.offsetMax = new Vector2(0, m_fCurrentY);
        }
    }

    public void OnCollapseButton()
    {
        m_bFinish = false;
        m_bUp = !m_bUp;
    }
}
