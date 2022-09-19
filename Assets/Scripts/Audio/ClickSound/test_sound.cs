using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test_sound : MonoBehaviour {

	// Use this for initialization
	void Start () {
        Init();
	}
	
	// Update is called once per frame
	void Update () {
        if(Input.GetMouseButtonDown(0)){
            SoundMgr.Instance.PlaySfx("sprinkle", volume: 1f);
        }
	}
    void Init() {
        // Resources 폴더의 소리파일 SoundMgr에 등록.
        SoundMgr.AddToSoundFile();
        SoundMgr.Instance.PlayBgm("creativeminds", true);
        // 테트로미노 패턴 정의
     
    }
}
