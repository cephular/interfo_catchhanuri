using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIResizeFromAnchor : MonoBehaviour
{
    public Vector2 m_Min;
    public Vector2 m_Max;

    private Vector2 m_initBoxSize;

    // Start is called before the first frame update
    void Start()
    {
        RectTransform r = GetComponent<RectTransform>();
        Vector2 sDelta = new Vector2((m_Max.x - m_Min.x) * Screen.width, (m_Max.y - m_Min.y) * Screen.height);
        r.sizeDelta = sDelta;
    }
}
