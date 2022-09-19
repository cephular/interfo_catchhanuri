#define __UPGRADE_PROC__

#if __UPGRADE_PROC__
#define __UPGRADE_PROC_190513_v1__
#endif

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
#if (!UNITY_IOS && !UNITY_EDITOR_OSX)
using GoogleARCore;
#endif

#region Json Helper Class
[System.Serializable]
public class JsonTreasureBoxInfo
{
    public string tb_id;
    public string mem_id;
    public string tb_type;
    public string tb_lat;
    public string tb_lon;

    public string tb_divide;
    public string tb_startangle;
    public string tb_angle;
    public string tb_dist;
    public string tb_initcount;
    public string tb_count;

    public string tb_startdate;
    public string tb_enddate;
    public string tb_status;
    public string cooltime;
}

[System.Serializable]
public class JsonTreasureBox
{
    public string Result;
    public string Desc;
    public JsonTreasureBoxInfo[] list;
}

[System.Serializable]
public class JsonTreasureBoxNoArr
{
    public string Result;
    public string Desc;
    public JsonTreasureBoxInfo list;
}

[System.Serializable]
public class JsonStoredHanuri
{
    public string Result;
    public string catchedid;
    public string datetime;
}
#endregion

public class TBDatabase : MonoBehaviour
{
    internal TreasureBox TBox;
    internal Camera m_mainCamera;
    internal TBFinder m_TBFinder;

    private bool bTokenReady;
    private bool bDatabaseReady;
    private bool bFirstLocationSetting;
    internal bool IsDatabaseReady
    {
        get { return bDatabaseReady; }
    }

    private void Awake()
    {
        bFirstLocationSetting = true;
        bDatabaseReady = false;
        bTokenReady = false;

        StartCoroutine(LoadTBList());
    }

    IEnumerator LoadTBList()
    {
        while (true)
        {
            if (bTokenReady == false)
            {
                if (UnityCommunicator.Instance.m_userData.token != null && UnityCommunicator.Instance.m_userData.token.Length > 0)
                {
                    bTokenReady = true;
                }
                else
                {
                    yield return new WaitForEndOfFrame();
                    continue;
                }
            }

            double _Latitude = 1.0d;
            double _Longitude = 1.0d;

#if !UNITY_EDITOR
            if (GPSManager.Instance.IsGPSReadyNotNorth == true)
            {
                _Latitude = GPSManager.Instance.Latitude;
                _Longitude = GPSManager.Instance.Longitude;
            }
#else
            _Latitude = GPSManager.Instance.Latitude;
            _Longitude = GPSManager.Instance.Longitude;
#endif
            string sendMessage = UnityCommunicator.Instance.m_userData.token + "?curr_lat=" + _Latitude + "&curr_lon=" + _Longitude;
            DataTransfer.RequestURL(DataTransfer.DataType.ARTreasure_LoadAll, sendMessage, null, RebuildTBList);

            if (bFirstLocationSetting == true)
            {
                if (GPSManager.Instance.IsGPSReadyComplete == true && bDatabaseReady == true)
                {
                    bFirstLocationSetting = false;
                    RelocationTBList();
                }
            }
            yield return new WaitForSeconds(0.5f);
        }
    }


    internal class TreasureBoxInfo
    {
        internal int tb_id;
        internal int mem_id;
        internal string tb_type;
        internal double tb_lat;
        internal double tb_lon;

        internal int tb_divide;
        internal float tb_startangle;
        internal float[] tb_angle;
        internal float[] tb_dist;
        internal int tb_initcount;
        internal int tb_count;

        internal DateTime startDate;
        internal DateTime endDate;

        internal bool tb_status;
        internal List<int> tb_hwIdxList;

        internal TreasureBox obj;

        internal TreasureBoxInfo()
        {
            tb_hwIdxList = new List<int>();
        }
    }

    internal Dictionary<int, TreasureBoxInfo> m_tbObjectList = new Dictionary<int, TreasureBoxInfo>();

    internal void RelocationTBList()
    {
        foreach (var item in m_tbObjectList)
        {
            {
                TreasureBoxInfo t = item.Value;

                double angle = GPSManager.Instance.AngleFromCoordinate(t.tb_lat, t.tb_lon);
                double dist = GPSManager.Instance.GeoDistance(t.tb_lat, t.tb_lon);
                Vector3 dir = GPSManager.Instance.TrueDir(Vector3.up, angle);

                t.obj.m_mainCamera = m_mainCamera;
#if true
                for(int i = 0; i < t.obj.m_ChildBoxs.Count; i++)
                {
                    TreasureBox child = t.obj.m_ChildBoxs[i];
                    child.m_mainCamera = m_mainCamera;
                }
#else
                for (int i = 0; i < t.obj.transform.childCount; i++) {
                    TreasureBox child = t.obj.transform.GetChild(i).GetComponent<TreasureBox>();
                    if (child != null) {
                        child.m_mainCamera = m_mainCamera;
                    }
                }
#endif

                //<<-- 김영천
                //origin
                //t.obj.transform.position = Frame.Pose.position + dir * (float)dist;
#if (UNITY_IOS || UNITY_EDITOR_OSX)
                t.obj.transform.position = m_mainCamera.transform.position + dir * (float)dist;
#elif (UNITY_ANDROID || UNITY_EDITOR_WIN)
                t.obj.transform.position = Frame.Pose.position + dir * (float)dist;
#endif
                //if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.WindowsEditor) {
                //    //android
                //    t.obj.transform.position = Frame.Pose.position + dir * (float)dist;
                //}
                //else {
                //    //iOS
                //    t.obj.transform.position = m_mainCamera.transform.position + dir * (float)dist;
                //}
                // 김영천 -->>
            }
        }
    }

    void RebuildTBList(string fullJson)
    {
        try
        {
            JsonTreasureBox afk = JsonUtility.FromJson<JsonTreasureBox>(fullJson);

            if (afk.Result.ToLower().Equals("true"))
            {
                Dictionary<int, TreasureBoxInfo> _tbObjectList = new Dictionary<int, TreasureBoxInfo>();
                foreach (var item in afk.list)
                {
                    TreasureBoxInfo _t = new TreasureBoxInfo();

                    // 스테이터스가 0이면 제거
                    _t.tb_status = item.tb_status.Equals("0") ? false : true;
                    if (_t.tb_status == true)
                        continue;

                    // 날짜 지났으면 제거
                    _t.startDate = DateTime.ParseExact(item.tb_startdate, "yyyyMMdd HH:mm", null);
                    _t.endDate = DateTime.ParseExact(item.tb_enddate, "yyyyMMdd HH:mm", null);
                    if (((_t.startDate.Subtract(DateTime.Now).Minutes) >= 0) ||
                        ((_t.endDate.Subtract(DateTime.Now).Minutes) < 0))
                    {
                        continue;
                    }

                    // 쿨타임 안지났으면 제거
                    if (item.cooltime.Length > 0 && (int)(DateTime.Now.Subtract(DateTime.Parse(item.cooltime)).TotalSeconds) <= UnityCommunicator.FECOCooltimeSec)
                    {
                        continue;
                    }
                    ////////////////////////

                    string[] _splitIdx = item.tb_type.Split(new char[] { '_' });
                    List<int> _hwIdxList = new List<int>();
                    _hwIdxList.Clear();
                    if (_splitIdx.Length > 1)
                    {

                        int _startIdx = -1, _endIdx = -1;
                        int.TryParse(_splitIdx[1], out _startIdx);
                        if (_splitIdx.Length > 2)
                        {
                            int.TryParse(_splitIdx[2], out _endIdx);

                            for (int _i = _startIdx; _i <= _endIdx; _i++)
                            {
                                if (UnityCommunicator.Instance.m_userData.catchedVerify[_i] == false)
                                    _hwIdxList.Add(_i);
                            }
                        }
                        else
                        {
                            _hwIdxList.Add(_startIdx);
                        }
                    }
                    if (_hwIdxList.Count < 1) continue;
                    ////////////////////////

                    // 남은 갯수가 0일 경우엔 제거
                    _t.tb_initcount = int.Parse(item.tb_initcount);
                    _t.tb_count = int.Parse(item.tb_count);
                    if (_t.tb_count == 0) continue;

                    _t.tb_id = int.Parse(item.tb_id);
                    _t.mem_id = int.Parse(item.mem_id);
                    _t.tb_type = item.tb_type;
                    if (_t.tb_type.IndexOf("HSHanu2019") != 0)
                    {
                        // 2019 횡성한우가 아닐 경우, 패스.
                        continue;
                    }

                    _t.tb_lat = double.Parse(item.tb_lat);
                    _t.tb_lon = double.Parse(item.tb_lon);

                    // 1km 이상 거리 차이가 난다면 패스
                    double _dist = GPSManager.Instance.GeoDistance(_t.tb_lat, _t.tb_lon);
                    //if (_dist > 1000.0f || _dist < 0.0f) continue;

                    int _div = 1;
                    int.TryParse(item.tb_divide, out _div);
                    if (_div < 1) _div = 1;

                    _t.tb_divide = 5 + (_div - 1);
                    float.TryParse(item.tb_startangle, out _t.tb_startangle);
                    float _divBase = 360.0f / _t.tb_divide;

                    _t.tb_angle = new float[_t.tb_divide];
                    _t.tb_dist = new float[_t.tb_divide];

                    string[] sAngles = null;
                    string[] sDists = null;
                    if (_div > 1)
                    {
                        sAngles = item.tb_angle.Split(':');
                        sDists = item.tb_dist.Split(':');
                    }

                    for (int i = 0; i < _t.tb_divide; i++)
                    {
                        if ((sAngles == null) || (sAngles.Length < 1) || (i >= sAngles.Length))
                        {
                            _t.tb_angle[i] = _divBase - (UnityEngine.Random.Range(0, (_divBase * 0.75f)) * 0.5f);
                        }
                        else
                        {
                            if (float.TryParse(sAngles[i], out _t.tb_angle[i]) == false)
                            {
                                _t.tb_angle[i] = _divBase - (UnityEngine.Random.Range(0, (_divBase * 0.75f)) * 0.5f);
                            }
                        }


                        if ((sDists == null) || (sDists.Length < 1) || (i >= sDists.Length))
                        {
                            _t.tb_dist[i] = UnityEngine.Random.Range(5.0f, 35.0f);
                        }
                        else
                        {
                            if(float.TryParse(sDists[i], out _t.tb_dist[i]) == false)
                            {
                                _t.tb_dist[i] = UnityEngine.Random.Range(5.0f, 35.0f);
                            }
                        }
                    }

                    _t.obj = null;

                    _tbObjectList.Add(_t.tb_id, _t);
                }

                List<int> removeKeys = new List<int>();
                foreach (var item in m_tbObjectList)
                {
                    if (_tbObjectList.ContainsKey(item.Key) == false)
                    {
                        removeKeys.Add(item.Key);
                    }
                    else
                    {
                        if (((int)item.Value.startDate.Subtract(DateTime.Now).TotalDays > 0) ||
                            ((int)item.Value.endDate.Subtract(DateTime.Now).TotalDays < 0))
                        {
                            removeKeys.Add(item.Key);
                        }
                    }

                }

                // 제거
                foreach (int key in removeKeys)
                {
                    if (m_tbObjectList[key].obj != null)
                    {
                        m_tbObjectList[key].obj.SelfDestruction(true);
                    }
                    m_tbObjectList.Remove(key);
                }

                // 추가
                foreach (var item in _tbObjectList)
                {
                    if (m_tbObjectList.ContainsKey(item.Key) == false)
                    {
                        TreasureBoxInfo t = item.Value;

                        t.obj = Instantiate(TBox);
                        t.obj.m_TBFinder = m_TBFinder;
                        t.obj.m_mainCamera = m_mainCamera;

                        if (GPSManager.Instance.IsGPSReadyComplete == true)
                        {
                            //Anchor a = Session.CreateAnchor(Frame.Pose);
                            //a.transform.position = a.transform.position + dir * (float)dist;
                            //t.obj.transform.parent = a.transform;
                            //t.anchor = a;
                            //t.obj.transform.position = Frame.Pose.position + dir * (float)dist;

                            double angle = GPSManager.Instance.AngleFromCoordinate(t.tb_lat, t.tb_lon);
                            double dist = GPSManager.Instance.GeoDistance(t.tb_lat, t.tb_lon);
                            Vector3 dir = GPSManager.Instance.TrueDir(Vector3.up, angle);
                            t.obj.m_lat = t.tb_lat;
                            t.obj.m_lon = t.tb_lon;
                            t.obj.tb_id = t.tb_id;
#if UNITY_IOS || UNITY_EDITOR_OSX
                            t.obj.transform.position = m_mainCamera.transform.position + dir * (float)dist;
#else
                            t.obj.transform.position = Frame.Pose.position + dir * (float)dist;
#endif
                        }

                        string[] _splitIdx = t.tb_type.Split(new char[] { '_' });
                        if (_splitIdx.Length > 1)
                        {
                            t.tb_hwIdxList.Clear();

                            int _startIdx = -1, _endIdx = -1;
                            int.TryParse(_splitIdx[1], out _startIdx);
                            if (_splitIdx.Length > 2)
                            {
                                int.TryParse(_splitIdx[2], out _endIdx);

                                for (int _i = _startIdx; _i <= _endIdx; _i++)
                                {
                                    t.tb_hwIdxList.Add(_i);
                                }
                            }
                            else
                            {
                                t.tb_hwIdxList.Add(_startIdx);
                            }
                            t.obj.m_hwIdxList = new List<int>(t.tb_hwIdxList);
                        }

                        t.obj.bParent = false;

                        // 나타날 오브젝트 생성
                        {
                            t.obj.bParent = true;

                            {
                                TreasureBox child = Instantiate(TBox);
                                child.m_TBFinder = m_TBFinder;
                                child.bChild = true;
                                child.tb_id = t.tb_id;
                                child.m_mainCamera = m_mainCamera;
                                child.transform.SetParent(t.obj.transform);
                                t.obj.m_ChildBoxs.Add(child);

                                Vector3 _dir = Quaternion.Euler(0.0f, 90.0f, 0.0f) * Vector3.right;
                                child.transform.localPosition = _dir.normalized * 30.0f;
                                child.SetVisible(false);
                            }
                        }
                        t.obj.SetVisible(false);
                        m_tbObjectList.Add(item.Key, t);
                    }
                    else
                    {
                        // 값 갱신
                        TreasureBoxInfo t = m_tbObjectList[item.Key];

                        t.obj.m_mainCamera = m_mainCamera;
                        t.tb_initcount = item.Value.tb_initcount;
                        t.tb_count = item.Value.tb_count;
                        t.tb_type = item.Value.tb_type;

                        string[] _splitIdx = t.tb_type.Split(new char[] { '_' });
                        if (_splitIdx.Length > 1)
                        {
                            t.tb_hwIdxList.Clear();

                            int _startIdx = -1, _endIdx = -1;
                            int.TryParse(_splitIdx[1], out _startIdx);
                            if (_splitIdx.Length > 2)
                            {
                                int.TryParse(_splitIdx[2], out _endIdx);

                                for (int _i = _startIdx; _i <= _endIdx; _i++)
                                {
                                    t.tb_hwIdxList.Add(_i);
                                }
                            }
                            else
                            {
                                t.tb_hwIdxList.Add(_startIdx);
                            }
                            t.obj.m_hwIdxList = new List<int>(t.tb_hwIdxList);
                        }
                    }
                }
            }

            bDatabaseReady = true;
        } // try
        catch (System.Exception e)
        {
            AlertPopup.Instance.DisplayMessage("Error", e.ToString());
        }
    }
}
