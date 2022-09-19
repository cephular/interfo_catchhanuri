using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UrlMover : MonoBehaviour
{
    public void Callback_FindAccount()
    {
        //계정찾기
        var url = "http://hanwoorigo.interfo.com/findaccount";
        Application.OpenURL(url);
    }

    public void Callback_OpenUrlDocument_1() {
        //이용약관
        //var url = "https://www.koreafestar.com/document/KFestAr_1";
        var url = "http://hanwoorigo.interfo.com/document/KFestAr_1";
        Application.OpenURL(url);
    }

    public void Callback_OpenUrlDocument_2() {
        //개인정보 처리방침
        //var url = "https://www.koreafestar.com/document/KFestAr_3";
        var url = "http://hanwoorigo.interfo.com/document/KFestAr_3";
        Application.OpenURL(url);
    }
}
