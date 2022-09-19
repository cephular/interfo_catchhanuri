using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class SoundMgr : MonoBehaviour {
    static Dictionary<string, AudioClip> s_dicSfxCollections = new Dictionary<string, AudioClip>();
    static Dictionary<string, AudioClip> s_dicBgmCollections = new Dictionary<string, AudioClip>();

    public static SoundMgr s_instance;
    static bool m_initOnce;

    public static SoundMgr Instance {
        get {
            if (s_instance == null) {
                s_instance = FindObjectOfType<SoundMgr>();

                if (s_instance == null) {
                    // Create gameObject and add component
                    s_instance = (new GameObject("SoundManager")).AddComponent<SoundMgr>();
                }
            }
            return s_instance;
        }
    }


    Transform m_tr; //SoundMgr Transform
    ObjMgr<AudioObj> m_audioObjMgr = new ObjMgr<AudioObj>();
    List<int> m_listAudioSfxId = new List<int>();
    IAudio m_currAudioBgm = new NullAudio();
    IAudio m_nextAudioBgm = new NullAudio();
    bool m_isReplacingAudio;    //bgm 교체중인지.

    //소리 크기 미구현. 나중에
    internal static float s_bgmVolume = 1f;
    internal static float s_sfxVolume = 1f;
    //
    static bool s_isAddOne;


    internal static void AddToSoundFile() {
        if (s_isAddOne) { return; }
        s_isAddOne = true;

        var clips = Resources.LoadAll<AudioClip>("Sounds/SFX");
        for(int i = 0; i < clips.Length; ++i) {
            s_dicSfxCollections.Add(clips[i].name, clips[i]);
        }
        clips = Resources.LoadAll<AudioClip>("Sounds/BGM");
        for(int i = 0; i < clips.Length; ++i) {
            s_dicBgmCollections.Add(clips[i].name, clips[i]);
        }
    }

    #region unity event function

    void Awake() {
        Instance.Initialize();
     
    }

    void Initialize() {
        if (m_initOnce) { return; }
        m_initOnce = true;
        //
        m_tr = transform;


        //
        Debug.Log("SoundMgr initialize()");

        //DontDestroyOnLoad(this);
    }

    void Update() {
        UnacquireIfNotPlaying();
    }

    #endregion //unity event function

    internal void SetVolumeBGM(float value){
        value = Mathf.Clamp(value, 0, 1f);  
        m_currAudioBgm.SetVolume(value);
        m_nextAudioBgm.SetVolume(value);
    } 

    internal void SetVolumeSFX(float value){
        s_sfxVolume = Mathf.Clamp(value, 0, 1f);  
    } 

    void UnacquireIfNotPlaying() {// 오디오가 실행중에 있는지 확인.
        if(m_listAudioSfxId.Count <= 0) { return; }
        for(int i = 0; i < m_listAudioSfxId.Count; ++i) {
            m_audioObjMgr[m_listAudioSfxId[i]].UnacquireIfNotPlaying();
        }
    }

    AudioObj Acquire(out int dataId) {
        var audioObj = m_audioObjMgr.Acquire(out dataId);
        audioObj.Init(dataId, m_tr);
        audioObj.SetActive(true);
        return audioObj;
    }

    void Unacquire(int dataId) {
        if(dataId == -1) { return; }

        var audioObj = m_audioObjMgr[dataId];
        audioObj.SetActive(false);
        m_listAudioSfxId.Remove(dataId);
        m_audioObjMgr.Unacquire(dataId);
    }

    public void PlaySfx(string key, float volume) {
        int dataId;
        var audioObj = Acquire(out dataId);
        audioObj.PlaySfx(s_dicSfxCollections[key], volume * s_sfxVolume, Callback_MusicStop);
        m_listAudioSfxId.Add(dataId);
    }

    public void PlayBgm(string key, bool isLoop = true) {
        //bgm 은 Audio 하나만 사용.
        // bgm 교체중이라면 return
        if(m_isReplacingAudio) { return; }
        m_isReplacingAudio = true;

        int dataId;
        m_nextAudioBgm = Acquire(out dataId);
        m_nextAudioBgm.PlayBgm(s_dicBgmCollections[key], isLoop, Callback_MusicStop);

        StartCoroutine(CoAdjustVolume());
    }

    void Callback_MusicStop(int dataId) {
        Unacquire(dataId);
    }

    IEnumerator CoAdjustVolume() {
        const float MAX_VOLUME = 1f;
        const float MIN_VOLUME = 0f;
        const float FIXEDTIME = 0.5f;

        float deltaTime = 0f;
        while(deltaTime <= FIXEDTIME) {
            deltaTime += Time.deltaTime;
            m_currAudioBgm.SetVolume(Mathf.Lerp(MAX_VOLUME, MIN_VOLUME, deltaTime / FIXEDTIME));
            m_nextAudioBgm.SetVolume(Mathf.Lerp(MIN_VOLUME, MAX_VOLUME, deltaTime / FIXEDTIME));

            yield return null;
        }
        m_currAudioBgm.Stop();
        Unacquire(m_currAudioBgm.GetIdentifier());
        m_currAudioBgm = m_nextAudioBgm;
        m_nextAudioBgm = new NullAudio();

        m_isReplacingAudio = false;
    }
}


interface IAudio {
    int GetIdentifier();
    void SetVolume(float volume);
    void SetActive(bool value);
    void Init(int dataId, Transform parent);
    void UnacquireIfNotPlaying();
    void PlaySfx(AudioClip clip, float volume, System.Action<int> cb_musicStop);
    void PlayBgm(AudioClip clip, bool isLoop, System.Action<int> cb_musicStop);
    void Stop();
}


class NullAudio : IAudio {
    public int GetIdentifier() {
        //MonoBehaviour.print("NullAudio::GetIdentifier()"); 
        return -1;
    }
    public void SetVolume(float volume) {
        //MonoBehaviour.print("NullAudio::SetVolume()");
    }
    public void SetActive(bool value) {
        //MonoBehaviour.print("NullAudio::GetIdentifier()");
    }
    public void Init(int dataId, Transform parent) {
        //MonoBehaviour.print("NullAudio::Init()");
    }
    public void UnacquireIfNotPlaying() {
        //MonoBehaviour.print("NullAudio::IsPlaying()");
    }
    public void PlaySfx(AudioClip clip, float volume, System.Action<int> cb_musicStop) {
        //MonoBehaviour.print("NullAudio::PlaySfx()");
    }
    public void PlayBgm(AudioClip clip, bool isLoop, System.Action<int> cb_musicStop) {
        //MonoBehaviour.print("NullAudio::PlayBgm()");
    }
    public void Stop() {
        //MonoBehaviour.print("NullAudio::Stop()");
    }
}


class AudioObj : IAudio {
    AudioSource m_audio;
    GameObject m_obj;
    Transform m_tr;
    int m_dataId = -1;
    System.Action<int> m_cbMusicStop;


    public int GetIdentifier() { return m_dataId; }
    public void SetVolume(float volume) { m_audio.volume = volume; }
    public void SetActive(bool value) { m_obj.SetActive(value); }

    public void Init(int dataId, Transform parent) {
        if(!m_obj) {
            string objName = "AudioObj";
            m_obj = new GameObject(objName);
            m_audio = m_obj.AddComponent<AudioSource>();
            m_tr = m_obj.transform;
        }
        m_audio.playOnAwake = true;
        m_tr.SetParent(parent);

        m_dataId = dataId;
    }

    public void UnacquireIfNotPlaying() {// 플레이중이 아니라면 콜백, AudioObj 자원반환
        if(!m_audio.isPlaying) { m_cbMusicStop(m_dataId); }
    }

    public void PlaySfx(AudioClip clip, float volume, System.Action<int> cb_musicStop) {
        m_cbMusicStop = cb_musicStop;
        m_audio.PlayOneShot(clip, volume);
    }

    public void PlayBgm(AudioClip clip, bool isLoop, System.Action<int> cb_musicStop) {
        m_cbMusicStop = cb_musicStop;
        m_audio.clip = clip;
        m_audio.loop = isLoop;
        m_audio.volume = 1 * SoundMgr.s_bgmVolume;
        m_audio.Play();
    }

    public void PlayBgm(AudioClip clip, bool isLoop, float volume, System.Action<int> cb_musicStop) {
        m_cbMusicStop = cb_musicStop;
        m_audio.clip = clip;
        m_audio.loop = isLoop;
        m_audio.volume = volume * SoundMgr.s_bgmVolume;
        m_audio.Play();
    }

    public void Stop() { m_audio.Stop(); }

}