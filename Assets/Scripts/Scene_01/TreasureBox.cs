//#define __GPSPOSITIONING__
//#define __DistanceView__
//#define __INTERFO_TEST__

using System.Collections;
using System.Collections.Generic;
using GoogleARCore;
using UnityEngine;

using TMPro;

public class TreasureBox : MonoBehaviour
{
    public Camera m_mainCamera;
    public Animator m_Animator;

    public GameObject m_goShaftScale;
    public GameObject m_goShaftPosition;
    public GameObject m_goShaftRotate;
    public GameObject m_ParticleSystem;

    public TextMeshPro tmPro;
    public List<MeshRenderer> m_MeshRenderer = new List<MeshRenderer>();

    public const float touchableDist = 10.0f;
    public const float visableDist = 30.0f;

    internal double m_lat = 0.0d, m_lon = 0.0d;
    internal int tb_id;
    internal bool bChild = false;
    internal bool bParent = false;

    public bool bTouched;

    public List<TreasureBox> m_ChildBoxs = new List<TreasureBox>();
    public List<int> m_hwIdxList = new List<int>();
    public int m_CurrentHWIdx;

    internal TBFinder m_TBFinder;

    List<MaterialPropertyBlock> m_propBlocks = new List<MaterialPropertyBlock>();

    private bool bDestroying;
    internal bool Destroying
    {
        get { return bDestroying; }
    }

    private bool m_visible;
    internal bool Visible
    {
        get { return m_visible; }
    }

    private bool m_touchable;
    internal bool Touchable
    {
        get { return m_touchable; }
    }

    private double m_dist = 9000.0d;
    private float m_distFromFrame = 0.0f;

    // Animation
    internal bool m_DestroyAnimEnd;
    private Coroutine CoTakableAnim;
    private Coroutine CoDestroing;

    IEnumerator DestroyAnim()
    {
#if false
        float _maxSize = 1.0f;//0.25f;
        float _minSize = 0.0125f;
        float _size = 0.0f;
        float _t = 0.0f;

        int _iCycle = 0;
        bool _bReverseAnim = false;

        m_DestroyAnimEnd = false;

        if (bChild == true)
            m_ParticleSystem.SetActive(true);

        Vector3 _tPos = Camera.main.transform.position, _sPos = gameObject.transform.position;
        _tPos.y = _sPos.y = 0.0f;
        m_goShaftRotate.transform.rotation = Quaternion.LookRotation((_tPos - _sPos).normalized, Vector3.up);

        while (true)
        {
            _t += (_bReverseAnim ? -Time.deltaTime : Time.deltaTime) * 2.0f;
            if (_t > 1.0f)
            {
                _t = 1.0f;
                _bReverseAnim = true;
            }
            else if (_t < 0.0f)
            {
                _t = 0.0f;
                _bReverseAnim = false;
                ++_iCycle;
            }

            if (bChild == true)
            {
                _size = Mathf.SmoothStep(_maxSize, _minSize, _t);
                Vector3 _locSize = new Vector3(_size, _size, _size);
                m_goShaftScale.transform.localScale = _locSize;
            }
            yield return null;

            if (_iCycle > 3) break;
        }

        while(true)
        {
            m_storedDeltaTime += Time.deltaTime;

            if (bChild == false)
            {
                if (m_Animator != null)
                {
                    if (m_storedDeltaTime >= 4.0f)
                    {
                        // 부모를 날리면 딸린 자식들 전부도 날아감.
                        Destroy(gameObject);
                    }
                }
                else
                {
                    if (m_ChildBoxs.Count > 0 && m_ChildBoxs[0].m_DestroyAnimEnd == true)
                    {
                        // 부모를 날리면 딸린 자식들 전부도 날아감.
                        yield return new WaitForSeconds(1.5f);
                        GameObject.Destroy(gameObject);
                    }
                }
            }
            else
            {
                if (m_storedDeltaTime >= 2.0f)
                {
                    for (int i = 0; i < m_MeshRenderer.Count; i++)
                    {
                        m_MeshRenderer[i].enabled = false;
                    }

                    m_DestroyAnimEnd = true;
                }
                else
                {
                    Vector3 pos = m_goShaftPosition.transform.localPosition;

                    pos.y = Mathf.Lerp(pos.y, m_destPlusUpY, Time.deltaTime * 0.5f);

                    m_goShaftPosition.transform.localPosition = pos;
                }
            }
            yield return null;
        }
#else
        float _maxSize = 2.0f;//0.25f;
        float _minSize = 0.0125f;
        float _size = 0.0f;
        float _t = 0.0f;

        int _iCycle = 0;
        bool _bReverseAnim = false;

        m_DestroyAnimEnd = false;

        if (bChild == true)
            m_ParticleSystem.SetActive(true);

        if (gameObject == null || gameObject.transform == null || Camera.main == null) yield break;
        Vector3 _tPos = Camera.main.transform.position, _sPos = gameObject.transform.position;
        _tPos.y = _sPos.y = 0.0f;
        m_goShaftRotate.transform.rotation = Quaternion.LookRotation((_sPos - _tPos).normalized, Vector3.up);

        while (true)
        {
            _t += (_bReverseAnim ? -Time.deltaTime : Time.deltaTime) * 2.0f;
            if (_t > 1.0f)
            {
                _t = 1.0f;
                _bReverseAnim = true;
            }
            else if (_t < 0.0f)
            {
                _t = 0.0f;
                _bReverseAnim = false;
                ++_iCycle;
            }

            if (bChild == true)
            {
                _size = Mathf.SmoothStep(_maxSize, _minSize, _t);
                Vector3 _locSize = new Vector3(_size, _size, _size);
                m_goShaftScale.transform.localScale = _locSize;
            }
            yield return null;

            if (_iCycle > 3) break;
        }

        while (true)
        {
            m_storedDeltaTime += Time.deltaTime;

            if (bChild == false)
            {
                if (m_Animator != null)
                {
                    if (m_storedDeltaTime >= 4.0f)
                    {
                        // 부모를 날리면 딸린 자식들 전부도 날아감.
                        m_TBFinder.PopupGetHanuriMessage(m_CurrentHWIdx);
                        Destroy(gameObject);
                    }
                }
                else
                {
                    if (m_ChildBoxs.Count > 0 && m_ChildBoxs[0].m_DestroyAnimEnd == true)
                    {
                        // 부모를 날리면 딸린 자식들 전부도 날아감.
                        m_TBFinder.PopupGetHanuriMessage(m_CurrentHWIdx);
                        yield return new WaitForSeconds(1.5f);
                        GameObject.Destroy(gameObject);
                    }
                }
            }
            else
            {
                for (int i = 0; i < m_MeshRenderer.Count; i++)
                {
                    m_MeshRenderer[i].enabled = false;
                }

                m_DestroyAnimEnd = true;
                break;
            }
            yield return null;
        }
#endif
    }

    IEnumerator TakableAnim()
    {
        float _t = 0, y = 0;
        bool _bReverseAnim = false;

        Vector3 _pos = m_goShaftScale.transform.localPosition;
        _pos.y = -0.25f + y;
        m_goShaftScale.transform.localPosition = _pos;
        yield return new WaitForFixedUpdate();

        while (bDestroying == false && m_touchable)
        {
#if false
            _t += (_bReverseAnim ? -Time.deltaTime : Time.deltaTime);

            //y = CubicBezierCurve(0, 0.61f, 0.355f, 1.0f, _t);
            y = CubicBezierCurve(0.755f, 0.05f, 0.855f, 0.06f, _t);

            if (_t > 1.0f)
            {
                _t = 1.0f;
                _bReverseAnim = true;
            }
            else if(_t < 0.0f)
            {
                _t = 0.0f;
                _bReverseAnim = false;
            }

            _pos = m_Object.transform.localPosition;
            _pos.y = -0.25f + y;
            m_Object.transform.localPosition = _pos;

            yield return new WaitForFixedUpdate();
#else
            _t += Time.deltaTime * 2.0f;

            m_goShaftRotate.transform.Rotate(Vector3.up * Time.deltaTime * 80.0f);

            if (_t >= 3.14f)
                _t = -3.14f;
            y = (((Mathf.Sin(_t) + 1.0f) * 0.25f) + 0.5f);


            _pos = m_goShaftPosition.transform.localPosition;
            _pos.y = y;
            m_goShaftPosition.transform.localPosition = _pos;

            yield return new WaitForFixedUpdate();
#endif
        }
    }

    private void Awake()
    {
        bTouched = false;
        bDestroying = false;
        //GameObject td = new GameObject("TextDistance");
        //td.transform.parent = this.transform;

        //tmPro = td.AddComponent<TextMeshPro>();
        //tmPro.autoSizeTextContainer = true;
        //tmPro.alignment = TextAlignmentOptions.Center;

        //td.transform.localPosition = new Vector3(0, 0.5f, 0);
        //m_MeshRenderer = transform.Find("FEst_COin").GetComponent<MeshRenderer>();
        if(m_MeshRenderer == null)
        {
            m_MeshRenderer = new List<MeshRenderer>();
        }
        m_MeshRenderer.Clear();

        if (m_MeshRenderer.Count < 1 || m_MeshRenderer[0] == null)
        {
            for (int i = 0; i < m_goShaftScale.gameObject.transform.childCount; i++)
            {
                MeshRenderer _mr = m_goShaftScale.gameObject.transform.GetChild(i).GetComponent<MeshRenderer>();
                if (_mr != null)
                {
                    MaterialPropertyBlock _mpb = new MaterialPropertyBlock();
                    _mr.GetPropertyBlock(_mpb);

                    m_propBlocks.Add(_mpb);
                    m_MeshRenderer.Add(_mr);
                }
            }
        }

        SetVisible(false);
    }

    // Use this for initialization
    void Start()
    {
        if (tmPro == null)
        {
            tmPro = transform.Find("TextDistance").GetComponent<TextMeshPro>();
        }

        tmPro.text = "";

        if(bParent == true)
        {
            for (int i = 0; i < m_MeshRenderer.Count; i++)
            {
                m_MeshRenderer[i].enabled = false;
            }

            m_MeshRenderer.Clear();
        }

        StartCoroutine(RePositioning());
    }

    public bool GetRandomIdx(out int idx)
    {
        bool _found = false;
        List<int> _nocatchList = new List<int>();

        if (m_hwIdxList != null && m_hwIdxList.Count > 0)
        {
            for (int i = 0; i < m_hwIdxList.Count; i++)
            {
                if (UnityCommunicator.Instance.m_userData.catchedVerify[m_hwIdxList[i]] == false)
                {
                    _found = true;
                    _nocatchList.Add(m_hwIdxList[i]);
                }
            }
        }
        else
        {
            for (int i = 0; i < UnityCommunicator.HWMaxCount; i++)
            {
                if (UnityCommunicator.Instance.m_userData.catchedVerify[i] == false)
                {
                    _found = true;
                    _nocatchList.Add(i);
                }
            }
        }

        if (_found)
        {
            //idx = Random.Range(_nocatchList[0], _nocatchList[_nocatchList.Count - 1]);
            idx = Random.Range(0, _nocatchList.Count);
            idx = _nocatchList[idx];
            return true;
        }

        idx = -1;
        return false;
    }

    public void SetVisible(bool visible)
    {
        if (GPSManager.Instance.IsGPSReadyComplete == false && visible == true) return;
        if (bDestroying == true) return;

        if (visible == true)
        {
            if (m_TBFinder.m_bVisibleTB == true) return;
            // 부모일 경우, 모든 자식들의 SetVisible(true)를 호출하고, 자신은 보이지 않음.
            if (bParent == true)
            {
                for (int i = 0; i < m_MeshRenderer.Count; i++)
                {
                    m_MeshRenderer[i].enabled = false;
                }

                if (m_visible == false)
                {
                    bool _found = GetRandomIdx(out m_CurrentHWIdx);

                    if(_found == false)
                    {
                        return;
                    }
                    else
                    {
                        m_ChildBoxs[0].ChangeImage(m_CurrentHWIdx);
                    }
                }

                if (m_ChildBoxs.Count > 0)
                {
                    m_ChildBoxs[0].SetVisible(true);
                }

                m_visible = true;
            }
            else
            {
                if (m_visible == false)
                {
                    m_TBFinder.m_bVisibleTB = true;
                    m_TBFinder.m_iVisibleTBIdx = tb_id;
                }

                for (int i = 0; i < m_MeshRenderer.Count; i++)
                {
                    m_MeshRenderer[i].enabled = true;
                }

                m_visible = true;
            }
        }
        else
        {
            // 부모일 경우, 모든 자식들의 SetVisible(false)을 호출.
            if (bParent == true)
            {
                if (m_TBFinder.m_iVisibleTBIdx == tb_id)
                {
                    m_TBFinder.m_bVisibleTB = false;
                    m_TBFinder.m_iVisibleTBIdx = -1;
                }

                if (m_ChildBoxs.Count > 0)
                {
                    m_ChildBoxs[0].SetVisible(false);
                }
                m_visible = false;
            }
            else
            {
                for (int i = 0; i < m_MeshRenderer.Count; i++)
                {
                    m_MeshRenderer[i].enabled = false;
                }
                m_visible = false;
            }
        }
    }

    public void TBTouched()
    {
        if (bTouched == true) return;

        if(bParent == true)
        {
            for (int i = 0; i < transform.childCount; i++)
            {
                TreasureBox _tb = transform.GetChild(i).GetComponent<TreasureBox>();
                if (_tb != null)
                {
                    _tb.bTouched = true;
                }
            }
            bTouched = true;
        }
        else if(bChild == true)
        {
            transform.parent.GetComponent<TreasureBox>().TBTouched();
        }
        else if(bChild == false)
        {
            bTouched = true;
        }
    }

#if false
    public void SelfDestruction(bool bSucc = false)
    {
        if (bDestroying == false)
        {
            bDestroying = true;
            GameObject.DestroyImmediate(transform.gameObject);
        }
    }
#else
    /// <summary>
    /// 자식일 경우에는 부모의 SelfDestruction을 호출하고, 호출된 부모에서는 자신과 자식들의 PlayTakeAnimation을 호출 함.
    /// </summary>
    /// <param name="bHidingStatus">숨겨진 상태에서 없어지는가?</param>
    public void SelfDestruction(bool bHidingStatus = false)
    {
        if (bDestroying == false)
        {
            if (bParent == true)
            {
                if (m_ChildBoxs.Count > 0)
                {
                    m_ChildBoxs[0].PlayTakeAnimation(false);
                }

                //PlayTakeAnimation(bHidingStatus);
                PlayTakeAnimation(bHidingStatus);
            }
            else if(bChild == true)
            {
                transform.parent.GetComponent<TreasureBox>().SelfDestruction();
            }
            else if(bChild == false)
            {
                PlayTakeAnimation(false);
            }
        }
    }

    /// <summary>
    /// 습득 애니메이션 재생
    /// </summary>
    /// <param name="bHidingStatus">숨겨진 상태에서 없어지는가?</param>
    public void PlayTakeAnimation(bool bHidingStatus)
    {
        bDestroying = true;
        
        if (bHidingStatus == false)
        {
            if (m_Animator != null)
            {
                m_Animator.SetBool("IsTaked", true);
            }
            else
            {
                if (CoDestroing == null)
                    CoDestroing = StartCoroutine(DestroyAnim());
            }
        }
        else
        {
            if(bChild == false)
            {
                Destroy(gameObject);
            }
        }
    }
#endif

    float m_destPlusUpY = 2.5f;
    float m_storedDeltaTime = 0.0f; // 사라질 시간

    // Update is called once per frame
    void Update()
    {
        if(bParent == true && m_MeshRenderer.Count > 0)
        {
            for (int i = 0; i < m_MeshRenderer.Count; i++)
            {
                m_MeshRenderer[i].enabled = false;
            }
        }

        if (m_mainCamera == null) {
            if (bChild == true)
            {
                TreasureBox _parentBox = gameObject.GetComponentInParent<TreasureBox>();
                if (_parentBox != null)
                {
                    if (_parentBox.m_mainCamera == null) return;

                    m_mainCamera = _parentBox.m_mainCamera;
                }
            }
            else
            {
                return;
            }
        }

        //if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.WindowsEditor) {
        //    //android
        //}
        //else {
        //    //iOS
        //}

        //#if (UNITY_IOS || UNITY_EDITOR_OSX)
        //        m_dist = Vector3.Distance(m_mainCamera.transform.position, transform.position);
        //#elif (UNITY_ANDROID || UNITY_EDITOR_WIN)
        //        m_dist = Vector3.Distance(Frame.Pose.position, transform.position);
        //#endif
        m_dist = Vector3.Distance(m_mainCamera.transform.position, transform.position);
        if (m_dist < 0.0f) m_dist = -m_dist;
    }

    IEnumerator RePositioning()
    {

        while (true)
        {
#if __GPSPOSITIONING__
            if (m_distFromFrame > 10.0f)
            {
                double angle = GPSManager.Instance.AngleFromCoordinate(m_lat, m_lon);
                Vector3 dir = GPSManager.Instance.TrueDir(Vector3.up, angle);
                transform.position = Frame.Pose.position + (dir * (float)m_dist);
            }
#endif

#if __DistanceView__
            tmPro.text = "Dist: " + m_dist;
#else
            tmPro.text = "";
#endif

#if false
            if (bDestroying == true)
            {
                m_storedDeltaTime += Time.deltaTime;

                if (bChild == false)
                {
                    if(m_Animator != null)
                    {
                        if (m_storedDeltaTime >= 4.0f)
                        {
                            // 부모를 날리면 딸린 자식들 전부도 날아감.
                            Destroy(gameObject);
                        }
                    }
                    else
                    {
                        if (m_DestroyAnimEnd == true)
                        {
                            // 부모를 날리면 딸린 자식들 전부도 날아감.
                            GameObject.Destroy(gameObject);
                        }
                    }
                }
                else
                {
                    if (m_storedDeltaTime >= 1.0f)
                    {
                        Vector3 pos = m_goShaftPosition.transform.localPosition;

                        pos.y = Mathf.Lerp(pos.y, m_destPlusUpY, Time.deltaTime * 0.5f);

                        m_goShaftPosition.transform.localPosition = pos;
                    }
                }
                yield return null;
                continue;
            }
#endif
            if (bChild == false)
            {
                // 자식이 아닐 때. (부모 경우도 포함이며, 자식을 가지고 있지 않을 때도 마찬가지)
                if (m_dist <= visableDist)
                {
                    if (m_visible == false && m_ChildBoxs.Count > 0)
                    {
                        Vector3 _dir = m_mainCamera.transform.position - gameObject.transform.position;
                        float _dist = Vector3.Distance(m_mainCamera.transform.position, gameObject.transform.position);
                        m_ChildBoxs[0].gameObject.transform.position = gameObject.transform.position + (_dir.normalized * (_dist * 0.75f));
                    }

                    SetVisible(true);
                }
                else
                {
                    SetVisible(false);
                }

                // 아래의 터치 가능여부는 bParent가 true라면 의미가 없음. (TBFinder::CantCheckTouchable() 참조)
                if (m_dist <= touchableDist)
                {
                    m_touchable = true;
                    SetTakableAnim(true);
                }
                else
                {
                    m_touchable = false;
                    SetTakableAnim(false);
                }
            }
            else
            {
                // 자식일 때.
                // 자식일 때는 부모로부터 설정되어 연결된 m_visible이 true일 때에만 터치 가능 여부를 계산.
                if (m_visible == true)
                {
                    if (m_dist <= touchableDist)
                    {
                        m_touchable = true;
                        SetTakableAnim(true);
                    }
                    else
                    {
                        m_touchable = false;
                        SetTakableAnim(false);
                    }
                    SetVisible(true);
                }
                else
                {
                    m_touchable = false;
                    SetTakableAnim(false);
                    SetVisible(false);
                }
            }

            if (m_visible == false) { yield return new WaitForSeconds(1.0f); }
            else { yield return new WaitForSeconds(1.0f); }
        }
    }

    private void SetTakableAnim(bool bTakable)
    {
        if (m_Animator != null)
        {
            m_Animator.SetBool("IsTakable", bTakable);
        }
        else
        {
            if (bTakable == true)
            {
                if (CoTakableAnim == null)
                {
                    CoTakableAnim = StartCoroutine(TakableAnim());
                }
            }
            else
            {
                if (CoTakableAnim != null)
                {
                    StopCoroutine(CoTakableAnim);
                    CoTakableAnim = null;

                    m_goShaftPosition.transform.localPosition = Vector3.zero;
                    m_goShaftRotate.transform.rotation.SetLookRotation(Camera.main.transform.position);
                }
            }
        }
    }

    public void ChangeImage(int idx)
    {
        for (int i = 0; i < m_propBlocks.Count; i++)
        {
            m_propBlocks[i].SetTexture("_MainTex", UnityCommunicator.Instance.m_HanuriDB[idx].img.texture);
            m_MeshRenderer[i].SetPropertyBlock(m_propBlocks[i]);
        }
    }
}
