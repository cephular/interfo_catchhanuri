using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AppConfig : MonoBehaviour
{
    public AudioClip m_sfx_baseTouch;
    public AudioClip m_sfx_completeCouponUse;
    public AudioClip m_sfx_congratPopup;
    public AudioClip m_sfx_getPeco;
    public AudioClip m_sfx_hawlOfCow;

    public AudioClip m_bgm;
    public AudioClip m_bgm2;


    public Image[] m_SoundIcons;

    public Sprite m_SoundImageNoMuteV1;
    public Sprite m_SoundImageMuteV1;

    public Sprite m_SoundImageNoMuteV2;
    public Sprite m_SoundImageMuteV2;


    private bool bMyMistake;
    private AudioSource m_audioSource;

    private int currentBgmIdx;

    private void Awake()
    {
        currentBgmIdx = 0;
        m_audioSource = gameObject.GetComponent<AudioSource>();
        m_audioSource.clip = m_bgm;
        m_audioSource.playOnAwake = false;
        m_audioSource.loop = true;
        m_audioSource.Stop();
    }

    // Start is called before the first frame update
    void Start()
    {

        UpdateSoundIcons();
        UpdateSoundStatus();
        bMyMistake = false;
    }

    private void Update()
    {
        //if(bMyMistake == false)
        //{
        //    bMyMistake = true;
        //    UpdateSoundIcons();
        //    UpdateSoundStatus();
        //}
    }

    public void OnViewedHelp()
    {
        UnityCommunicator.Instance.m_appConfig.bViewHelp = true;
        UnityCommunicator.Instance.SavePrefData();
    }

    public void OnTouchConfig_EnableSound()
    {
        UnityCommunicator.Instance.m_appConfig.bSound = !UnityCommunicator.Instance.m_appConfig.bSound;
        UpdateSoundIcons();
        UpdateSoundStatus();
        UnityCommunicator.Instance.SavePrefData();
    }

    /// <summary>
    /// 사운드 아이콘 이미지 변경
    /// </summary>
    public void UpdateSoundIcons()
    {
        if (m_SoundIcons == null || m_SoundIcons.Length < 1) return;

        for (int i = 0; i < m_SoundIcons.Length; i++)
        {
            if(m_SoundIcons[i] == null) { print("Why [" + i +"] is Null????\n"); continue; }

            if (m_SoundIcons[i].name.Equals("volumn_coinbook") == true || m_SoundIcons[i].name.Equals("volumn_mapview") == true || m_SoundIcons[i].name.Equals("volumn_couponbook") == true)
            {
                m_SoundIcons[i].sprite = UnityCommunicator.Instance.m_appConfig.bSound ? m_SoundImageNoMuteV2 : m_SoundImageMuteV2;
            }
            else
            {
                m_SoundIcons[i].sprite = UnityCommunicator.Instance.m_appConfig.bSound ? m_SoundImageNoMuteV1 : m_SoundImageMuteV1;
            }
        }
    }

    public void UpdateSoundStatus()
    {
        if (m_audioSource == null) return;
        
        if(UnityCommunicator.Instance.m_appConfig.bSound == true)
        {
            m_audioSource.Play();
        }
        else
        {
            m_audioSource.Pause();
        }
    }

    public void PlaySFXBaseTouch()
    {
        if (m_audioSource == null) return;
        if (UnityCommunicator.Instance.m_appConfig.bSound == false) return;

        m_audioSource.PlayOneShot(m_sfx_baseTouch);
    }

    public void PlaySFXCompleteCouponUse()
    {
        if (m_audioSource == null) return;
        if (UnityCommunicator.Instance.m_appConfig.bSound == false) return;

        m_audioSource.PlayOneShot(m_sfx_completeCouponUse);
    }

    public void PlaySFXCongratPopup()
    {
        if (m_audioSource == null) return;
        if (UnityCommunicator.Instance.m_appConfig.bSound == false) return;

        m_audioSource.PlayOneShot(m_sfx_congratPopup);
    }

    public void PlaySFXGetPeco()
    {
        if (m_audioSource == null) return;
        if (UnityCommunicator.Instance.m_appConfig.bSound == false) return;

        m_audioSource.PlayOneShot(m_sfx_getPeco);
    }

    public void PlaySFXHowlOfCow()
    {
        if (m_audioSource == null) return;
        if (UnityCommunicator.Instance.m_appConfig.bSound == false) return;

        m_audioSource.PlayOneShot(m_sfx_hawlOfCow);
    }

    public void ChangeBgm(int idx)
    {
        if (idx == currentBgmIdx) return;
        currentBgmIdx = idx;

        m_audioSource.Stop();
        switch (idx)
        {
            case 0:
                m_audioSource.clip = m_bgm;
                m_audioSource.playOnAwake = false;
                m_audioSource.loop = true;
                break;
            case 1:
                m_audioSource.clip = m_bgm2;
                m_audioSource.playOnAwake = false;
                m_audioSource.loop = true;
                break;
        }
        if (UnityCommunicator.Instance.m_appConfig.bSound == false) return;
        m_audioSource.Play();
    }
}
