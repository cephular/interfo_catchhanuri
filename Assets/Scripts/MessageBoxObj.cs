using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using TMPro;

public class MessageBoxObj : MonoBehaviour
{
    public int m_idx = -1;

    Transform m_tr;
    RectTransform m_rc;

    UnityAction m_confirm, m_cancel;

    public TextMeshProUGUI m_Title;
    public TextMeshProUGUI m_Text;

    private void Awake()
    {
        m_tr = gameObject.transform;
        m_rc = gameObject.GetComponent<RectTransform>();
        gameObject.SetActive(false);
    }

    public void SetParent(Transform tr)
    {
        m_tr.SetParent(tr);
        m_tr.SetSiblingIndex(1);
        m_tr.localScale = Vector3.one;

        m_rc.offsetMin = Vector2.zero;
        m_rc.offsetMax = Vector2.zero;
    }

    public void SetText(string _subject, string _text)
    {
        m_Title.text = _subject;
        m_Text.text = _text;

        m_Title.SetNativeSize();
        m_Text.SetNativeSize();
    }

    public void SetCallback(UnityAction _complete = null, UnityAction _cancel = null)
    {
        m_confirm = _complete;
        m_cancel = _cancel;
    }

    public void Callback_Confirm()
    {
        if (m_confirm != null) m_confirm.Invoke();
        MessageBox.Instance.DeleteMessageBox(m_idx);
    }

    public void Callback_Cancel()
    {
        if (m_cancel != null) m_cancel.Invoke();
        MessageBox.Instance.DeleteMessageBox(m_idx);
    }
}
