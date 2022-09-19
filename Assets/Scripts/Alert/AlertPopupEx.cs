using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class AlertPopupEx : MonoBehaviour
{

    static AlertPopupEx s_instance;
    static bool m_initOnce;

    public static AlertPopupEx Instance
    {
        get
        {
            if (s_instance == null)
            {
                s_instance = FindObjectOfType<AlertPopupEx>();
                if (s_instance == null)
                {
                    s_instance = (new GameObject("AlertPopupEx")).AddComponent<AlertPopupEx>();
                }
            }
            return s_instance;
        }
    }

    ObjMgr<AlertExObj> m_alertObjMgr = new ObjMgr<AlertExObj>();
    class AlertExObj
    {
        static int s_idx = int.MaxValue;

        public int m_dataId = -1;
        public GameObject gameObject, gameObjectEx;
        public AlertPopupWindowItems m_alertPopupWindow;

        Transform m_tr;
        RectTransform m_rc;

        public AlertExObj()
        {
            gameObject = Instantiate(Resources.Load<GameObject>("ui/alert/ui_alert_window_ex"));
            m_alertPopupWindow = gameObject.GetComponentInChildren<AlertPopupWindowItems>();
            m_tr = gameObject.transform;
            m_rc = gameObject.GetComponent<RectTransform>();
            gameObject.SetActive(false);
        }

        public void SetTransform(Transform tr)
        {
            m_tr.SetParent(tr);
            //m_tr.SetAsFirstSibling();
            m_tr.SetSiblingIndex(1);

            m_tr.localScale = Vector3.one;

            m_rc.offsetMin = Vector2.zero;
            m_rc.offsetMax = Vector2.zero;

        }
    }

    Queue<int> m_queue = new Queue<int>();

    public Transform m_trParent;
    public GameObject m_blind;



    void Awake()
    {
        Instance.Initialize();
        SetBlind(false);

    }

    void Initialize()
    {
        if (m_initOnce) { return; }
        m_initOnce = true;

        //
        //Debug.Log("AlertPopupEx initialize()");
        //DontDestroyOnLoad(this);
    }
    public int DisplayMessage(string title, string subject, string message, UnityAction callback_ok = null, UnityAction callback_cancel = null)
    {
        var dataId = Acquire();
        SetBlind(true);
        //Debug.Log("screenSize : " + Screen.width + " x " + Screen.height + " / *******************");
        //SetPopupWindowActive(true);
        m_alertObjMgr[dataId].gameObject.SetActive(true);

        /* << 기존 코드 >> - 김영천
        //m_audioObjMgr[dataId].m_alertPopupWindow.m_tmp_title.text = title;
        //m_audioObjMgr[dataId].m_alertPopupWindow.m_tmp_contents.text = message;
        */

        // << 추가한 코드 - 김영천
        m_alertObjMgr[dataId].m_alertPopupWindow.SetMessage(title, message, subject);
        m_alertObjMgr[dataId].m_alertPopupWindow.m_btn_confirm.onClick.AddListener(Callback);
        m_alertObjMgr[dataId].m_alertPopupWindow.m_btn_cancel.onClick.AddListener(Callback);
        // 추가한 코드 >>

        if (callback_ok != null)
        {
            m_alertObjMgr[dataId].m_alertPopupWindow.m_btn_confirm.onClick.AddListener(callback_ok);
        }

        if (callback_cancel != null)
        {
            m_alertObjMgr[dataId].m_alertPopupWindow.m_btn_cancel.onClick.AddListener(callback_cancel);
        }

        return dataId;
    }
    //public void DisplayMessage(string title, string subject, string message, UnityAction callback_ok = null, UnityAction callback_cancel = null)
    //{
    //    SetBlind(true);
    //    var dataId = Acquire();

    //    //SetPopupWindowActive(true);
    //    m_alertObjMgr[dataId].gameObject.SetActive(true);
    //    m_alertObjMgr[dataId].m_alertPopupWindow.m_tmp_title.text = title;
    //    m_alertObjMgr[dataId].m_alertPopupWindow.m_tmp_subject.text = subject;
    //    m_alertObjMgr[dataId].m_alertPopupWindow.m_tmp_contents.text = message;

    //    m_alertObjMgr[dataId].m_alertPopupWindow.m_btn_confirm.onClick.AddListener(Callback);
    //    m_alertObjMgr[dataId].m_alertPopupWindow.m_btn_cancel.onClick.AddListener(Callback);

    //    if (callback_ok != null)
    //    {
    //        m_alertObjMgr[dataId].m_alertPopupWindow.m_btn_confirm.onClick.AddListener(callback_ok);
    //    }

    //    if (callback_cancel != null && m_alertObjMgr[dataId].m_alertPopupWindow.m_btn_cancel != null)
    //    {
    //        m_alertObjMgr[dataId].m_alertPopupWindow.m_btn_cancel.onClick.AddListener(callback_cancel);
    //    }
    //}

    void Callback()
    {
        Unacquire();
        if (m_queue.Count == 0) { SetBlind(false); }
    }

    void SetBlind(bool value)
    {
        if (m_blind.activeSelf == value) { return; }
        m_blind.SetActive(value);
    }

    int Acquire()
    {
        int dataId;
        var alertObj = m_alertObjMgr.Acquire(out dataId);
        m_queue.Enqueue(dataId);

        alertObj.SetTransform(m_trParent);

        return dataId;
    }

    void Unacquire()
    {
        if (m_queue.Count < 1) { return; }
        var idx = m_queue.Dequeue();
        m_alertObjMgr[idx].m_alertPopupWindow.m_btn_confirm.onClick.RemoveAllListeners();
        m_alertObjMgr[idx].m_alertPopupWindow.m_btn_cancel.onClick.RemoveAllListeners();
        m_alertObjMgr[idx].gameObject.SetActive(false);
        m_alertObjMgr.Unacquire(idx);
    }

    public int GetQueueCount()
    {
        return m_queue.Count;
    }
}
