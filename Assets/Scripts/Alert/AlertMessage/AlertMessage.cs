using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AlertMessage : MonoBehaviour {

    public void OnAlertMsg_Event() {
        AlertPopup.Instance.DisplayMessage("이벤트", "축제 기간이 아닙니다.");
    }

    public void OnAlertMsg_AR() { 
        AlertPopup.Instance.DisplayMessage("AR 증강현실", "준비 중입니다.");
    }

    public void OnAlertMsg_Usecoin() {
        AlertPopup.Instance.DisplayMessage("아이템 사용하기", "준비 중입니다.");
    }

    public void OnAlertMsg_Option() {
        //서버에 저장
        AlertPopup.Instance.DisplayMessage("저장", "KFestAR 서버에 저장하시겠습니까?", CallbackConfirmCompleted_Option);
    }

    void CallbackConfirmCompleted_Option() {
        
        //UnityCommunicator.Instance.SaveData();

    }

}
