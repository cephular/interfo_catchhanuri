using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class MessageBox : MonoBehaviour
{
    public GameObject MsgBoxPrefab;
    public GameObject ContainCanvas;

    private static bool m_initOnce;
    private static MessageBox s_instance;

    internal static MessageBox Instance
    {
        get
        {
            if(s_instance == null)
            {
                s_instance = FindObjectOfType<MessageBox>();
                if (s_instance == null)
                { }
                s_instance = new GameObject("MessageBox").AddComponent<MessageBox>();
            }

            return s_instance;
        }
    }

    private void Awake()
    {
        Initialize();
    }

    void Initialize()
    {
        if(m_initOnce) { return; }
        m_initOnce = true;

        DontDestroyOnLoad(this);

        if (s_instance == null)
        {
            s_instance = this;
            s_instance.m_idx = 0;
        }
    }

    Dictionary<int, MessageBoxObj> m_ObjList;
    public int m_idx;
    public int DisplayMessage(string title, string message, int messageCase, UnityAction callback_Completed = null, UnityAction callback_Cancel = null)
    {
        GameObject gobj = Instantiate(MsgBoxPrefab);
        MessageBoxObj _obj = gobj.GetComponent<MessageBoxObj>();
        _obj.m_idx = m_idx;
        _obj.SetParent(ContainCanvas.transform);
        _obj.SetText(title, message);
        _obj.SetCallback(callback_Completed, callback_Cancel);
        
        m_ObjList.Add(m_idx++, _obj);
        return m_idx;
    }

    public void DeleteMessageBox(int _idx)
    {
        if(m_ObjList.ContainsKey(_idx))
        {
            Destroy(m_ObjList[_idx].gameObject);
            m_ObjList.Remove(_idx);
        }
    }
}
