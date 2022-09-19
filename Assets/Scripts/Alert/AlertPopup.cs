using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class AlertPopup : MonoBehaviour
{

    static AlertPopup s_instance;
    static bool m_initOnce;

    public static AlertPopup Instance
    {
        get
        {
            if (s_instance == null)
            {
                s_instance = FindObjectOfType<AlertPopup>();
                if (s_instance == null)
                {
                    s_instance = (new GameObject("AlertPopup")).AddComponent<AlertPopup>();
                }
            }
            return s_instance;
        }
    }
    //


    //GameObject m_goAlertWindow;
    //AlertPopupWindowItems m_alertPopupWindow;

    ObjMgr<AlertObj> m_alertObjMgr = new ObjMgr<AlertObj>();
    // m_audioObjMgr -> m_alertObjMgr 로 변수명 변경 ( 김영천 )


    class AlertObj
    {
        //static int s_idx = int.MaxValue;

        public int m_dataId = -1;
        public GameObject gameObject, gameObjectEx;
        public AlertPopupWindowItems m_alertPopupWindow;

        Transform m_tr;
        RectTransform m_rc;

        public AlertObj()
        {
            gameObject = Instantiate(Resources.Load<GameObject>("ui/alert/ui_alert_window"));
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
        //Debug.Log("AlertPopup initialize()");
        //DontDestroyOnLoad(this);
    }
    /* << 기존 코드 >> - 김영천
    public int DisplayMessage(string title, string message, UnityAction callback_completed = null) {
        SetBlind(true);
        var dataId = Acquire();

        //SetPopupWindowActive(true);
        m_alertObjMgr[dataId].gameObject.SetActive(true);

        m_audioObjMgr[dataId].m_alertPopupWindow.m_tmp_title.text = title;
        m_audioObjMgr[dataId].m_alertPopupWindow.m_tmp_contents.text = message;
       
        if (callback_completed != null) {
            m_alertObjMgr[dataId].m_alertPopupWindow.m_btn_confirm.onClick.AddListener(callback_completed);
        }

        return dataId;
    }
    */

    public int DisplayMessage(string title, string message, UnityAction callback_completed = null)
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
        m_alertObjMgr[dataId].m_alertPopupWindow.SetMessage(title, message);
        m_alertObjMgr[dataId].m_alertPopupWindow.m_btn_confirm.onClick.AddListener(Callback);
        // 추가한 코드 >>

        if (callback_completed != null)
        {
            m_alertObjMgr[dataId].m_alertPopupWindow.m_btn_confirm.onClick.AddListener(callback_completed);
        }

        return dataId;
    }

    //void SetPopupWindowActive(bool value) {
    //    if (m_goAlertWindow.activeSelf == value) { return; }
    //    m_goAlertWindow.SetActive(value);
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
        m_alertObjMgr[idx].gameObject.SetActive(false);
        m_alertObjMgr.Unacquire(idx);
    }

    public void Unacquire(int idx)
    {
        m_alertObjMgr[idx].m_alertPopupWindow.m_btn_confirm.onClick.RemoveAllListeners();
        m_alertObjMgr[idx].gameObject.SetActive(false);
        m_alertObjMgr.Unacquire(idx);
    }

    public int GetQueueCount()
    {
        return m_queue.Count;
    }
}
