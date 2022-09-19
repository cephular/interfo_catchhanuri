using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


//홑잎 : 축제 이벤트 보상 알림메시지 1
//꽃 : 레벨업 보상
//<size=1800%><sprite="icon_cherry" index=0><size=1200%> + 1
//<size=1600%><sprite="icon_petal" index=0><size=1200%> + 1
//<size=1800%><sprite="icon_goldcherry" index=0><size=1200%> + 1


public class AlertPopupWindowItems : MonoBehaviour
{
    public TextMeshProUGUI m_tmp_title;
    public TextMeshProUGUI m_tmp_subject;
    public TextMeshProUGUI m_tmp_contents;
    public TMP_InputField m_tmp_input;
    public Button m_btn_confirm, m_btn_cancel;

    int m_prevlineCount;
    void Awake()
    {
        if (m_btn_confirm == null)
        {
            m_btn_confirm = GetComponentInChildren<Button>();
        }
    }

    void OnEnable()
    {
        var rctr = m_tmp_contents.rectTransform;
        rctr.offsetMax = Vector2.zero;
        rctr.offsetMin = Vector2.zero;

        m_prevlineCount = 0;

        /* << 기존 코드 >> - 김영천
        StartCoroutine(CoSetRectSize());
        */
    }

    // << 추가한 코드 - 김영천
    internal void SetMessage(string title, string message, string subject = "")
    {
        m_tmp_title.text = title;
        if(m_tmp_subject != null) m_tmp_subject.text = subject;
        m_tmp_contents.text = message;

        //개행 개수
        const int correction_value = 1;  // 라인 보정 값.
        int line_count = CountWord(message, "\n") + correction_value;
        //print("line_count : " + line_count);
        SetTMPRectSize(m_tmp_contents, line_count);
    }

    void SetTMPRectSize(TextMeshProUGUI tmp, int line_count)
    {
        var textInfo = m_tmp_contents.textInfo;
        if (m_prevlineCount == line_count ||
            1 == line_count) { return; }
        m_prevlineCount = line_count;

        var deltasize = m_tmp_contents.fontSize * line_count;
        var halfsize = deltasize * 0.5f;
        //print("deltasize: "+deltasize);
        var rctr = m_tmp_contents.rectTransform;
        rctr.offsetMax = new Vector2(0f, halfsize);
        rctr.offsetMin = new Vector2(0f, -halfsize);
    }

    int CountWord(string origin, string word)
    {
        var arrstr = origin.Split(new string[] { word }, System.StringSplitOptions.None);
        return arrstr.Length - 1;
    }
    // 추가한 코드 >> - 김영천


    /*  << 기존 코드 >>  - 김영천

    IEnumerator CoSetRectSize(){
        yield return null;

        SetTMPRectSize(m_tmp_contents);
    }

    void SetTMPRectSize(TextMeshProUGUI tmp) {
        var textInfo = m_tmp_contents.textInfo;
        if (m_prevlineCount == textInfo.lineCount ||
            1 == textInfo.lineCount) { return; }
        m_prevlineCount = textInfo.lineCount;

        var deltasize = m_tmp_contents.fontSize * textInfo.lineCount;
        var halfsize = deltasize * 0.5f;
        //print("deltasize: "+deltasize);
        var rctr = m_tmp_contents.rectTransform;
        rctr.offsetMax = new Vector2(0f, halfsize);
        rctr.offsetMin = new Vector2(0f, -halfsize);
    }
    */

}
