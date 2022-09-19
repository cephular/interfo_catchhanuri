using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataTransfer {

    internal enum DataType
    {
        Login,
        Register,
        DuplicateCheck,

        Exist_Check_Email_To_Id, //email 확인 후 ID, 가입일자 등 반환 

        ARTreasure_LoadAll,
        ARTreasure_Touch,
        ARTreasure_GetCoinCount,
        ARTreasure_GetCoupon,
        ARTreasure_GetCouponList,
        ARTreasure_GetMyCouponList,
        ARTreasure_GetCouponUse,
        ARTreasure_GetConfig,
        ARTreasure_SetConfig,

        HanwooriGO_GetHWList,
        HanwooriGO_CatchHW,
        HanwooriGO_GetCoupon,
        HanwooriGO_CheckCouponSoldout,
    }

    internal const string url = "https://koreafestar.com/Hanwoorigo/index?uri=";//"http://hanwoorigo.interfo.com";
    //private static string url = "https://koreafestar.com";
    
    private const string url_loginForm = "/api/login/";
    private const string url_registerForm = "/api/register/";
    private const string url_existCheckForm = "/api/register_exist_check/";
    private const string url_exist_check_email_to_id = "/api/exist_check_email_to_id/mem_email?data=";

    // AR보물상자
    private const string url_ARTreasure_loadAll = "/api/getLBTList/";
    private const string url_ARTreasure_Touch = "/api/touchTreasure/";
    private const string url_ARTreasure_GetCoinCount = "/api/getMyFeco/";
    private const string url_ARTreasure_GetCoupon = "/api/getCoupon/";
    private const string url_ARTreasure_GetCouponList = "/api/getCouponList/";
    private const string url_ARTreasure_GetMyCouponList = "/api/getMyCouponlist/";
    private const string url_ARTreasure_GetCouponUse = "/api/getCouponuse/";
    private const string url_ARTreasure_GetConfig = "/api/getConfig/";
    private const string url_ARTreasure_SetConfig = "/api/setConfig/";

    //2019 횡성한우 한우리GO
    private const string url_HanwooriGO_GetHWList = "/api/getHWList/"; // 저정된 한우 목록 불러오기. {token}
    private const string url_HanwooriGO_CatchHW = "/api/storedHanwoori/"; // 잡은 한우 저장. {token}?{catched_id}
    private const string url_HanwooriGO_GetCoupon = "/api/getCoupon/"; // 쿠폰 얻기. {token}?{cp_contentid=520}&{feco=0}&{cid}
    private const string url_HanwooriGO_CheckCouponSoldout = "/api/checkCouponSoldout/"; // 매진상태 확인. {token}?{coupon_id=-1}&{cascade=0}

    internal static void RequestURL(DataType type, string data, WWWForm formData, Action<string> callbackFunc)
    {
        string _url = url, _url2 = "";
        bool isGet = true;

        switch(type)
        {
            case DataType.Login:
                _url2 += url_loginForm + data;
                break;

            case DataType.Register:
                isGet = false;
                _url2 += url_registerForm + data;
                break;

            case DataType.DuplicateCheck:
                _url2 += url_existCheckForm + data;
                break;

            case DataType.Exist_Check_Email_To_Id:
                _url2 += url_exist_check_email_to_id + data;
                break;

            case DataType.ARTreasure_Touch:
                _url2 += url_ARTreasure_Touch + data;
                break;

            case DataType.ARTreasure_LoadAll:
                _url2 += url_ARTreasure_loadAll + data;
                break;

            case DataType.ARTreasure_GetCoinCount:
                _url2 += url_ARTreasure_GetCoinCount + data;
                break;

            case DataType.ARTreasure_GetCoupon:
                _url2 += url_ARTreasure_GetCoupon + data;
                break;

            case DataType.ARTreasure_GetCouponList:
                _url2 += url_ARTreasure_GetCouponList + data;
                break;

            case DataType.ARTreasure_GetMyCouponList:
                _url2 += url_ARTreasure_GetMyCouponList + data;
                break;

            case DataType.ARTreasure_GetCouponUse:
                _url2 += url_ARTreasure_GetCouponUse + data;
                break;

            case DataType.ARTreasure_GetConfig:
                _url2 += url_ARTreasure_GetConfig + data;
                //Debug.LogError("===================> TBFinder][ ARTreasure_GetConfig: [" + _url + "]");
                break;

            case DataType.ARTreasure_SetConfig:
                _url2 += url_ARTreasure_SetConfig + data;
                break;


            case DataType.HanwooriGO_GetHWList:
                _url2 += url_HanwooriGO_GetHWList + data;
                break;

            case DataType.HanwooriGO_CatchHW:
                _url2 += url_HanwooriGO_CatchHW + data;
                break;

            case DataType.HanwooriGO_GetCoupon:
                _url2 += url_HanwooriGO_GetCoupon + data;
                break;

            case DataType.HanwooriGO_CheckCouponSoldout:
                _url2 += url_HanwooriGO_CheckCouponSoldout + data;
                break;
        }

        _url2 = UnityEngine.WWW.EscapeURL(_url2, System.Text.Encoding.UTF8);
        _url += _url2;

        if (isGet)
        {
            WebRequestHandler.Instance.GetJsonFromWebServer(_url, callbackFunc);
        }
        else
        {
            WebRequestHandler.Instance.PostJsonToWebServer(_url, formData, callbackFunc);
        }
    }
}
