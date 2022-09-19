using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ARHelpMessage : MonoBehaviour
{
    [SerializeField]
    private TMP_Text m_text;

    private float m_storedTime;

    // Start is called before the first frame update
    void Start()
    {
        m_storedTime = 3.0f;
        m_text.enabled = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (m_storedTime > 3.0f)
        {
            if (m_text.enabled == true)
            {
                m_text.enabled = false;
            }
        }
        else
        {
            if (m_text.enabled == false)
            {
                m_text.enabled = true;
            }
            m_storedTime += Time.deltaTime;
        }
    }

    public void VisibleHelpMsg(string msg)
    {
        m_text.text = msg;
        m_storedTime = 0.0f;
    }
}
