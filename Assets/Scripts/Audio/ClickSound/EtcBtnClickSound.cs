using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EtcBtnClickSound : MonoBehaviour {

    public void OnClickEtcTouchSound(){
        SoundMgr.Instance.PlaySfx("etctouch", volume: 1f);

    }
}
