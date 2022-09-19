//#define __USE_NEWTONJSON__

using System;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;

using System.Security.Cryptography;

using UnityEngine;
using UnityEngine.Networking;



internal struct RegisterForm
{
    internal string mem_userid;
    internal string mem_pw;
    internal string mem_email;
    internal string mem_nickname;
    internal string mem_birthday;
    internal string mem_sex;
    internal string mem_receive_email;
    internal string mem_receive_sns;
    internal string social_id;
    internal string social_type;
}

//[System.Serializable]
//public class MemberRegistrationResult
//{
//    public string Result;
//    public string Remark;
//    public RequestResult[] result;
//}

//[System.Serializable]
//public class RequestResult
//{
//    public string token;
//}

public class LoginHelper
{

    internal string token = "";
    private const string secret_key = "rlagudwns";

    private const string url_loginForm = UnityCommunicator.url + "/api/login/";
    private const string url_registerForm = UnityCommunicator.url + "/api/register/";
    private const string url_existCheckForm = UnityCommunicator.url + "/api/register_exist_check/";

    #region Help structure class
    public class ReceiveLoginData
    {
        public string Result;
        public string Remark;
        public Data Data;
    };

    public class Data
    {
        public string mem_id;
        public string social_id;
        public string social_type;
        public string mem_division;
        public string mem_userid;
        public string mem_email;
        public string mem_username;
        public string mem_nickname;
        public string mem_level;
        public string pid;
        public string mem_point;
        public string mem_homepage;
        public string mem_phone;
        public string mem_birthday;
        public string mem_sex;
        public string mem_zipcode;
        public string mem_address1;
        public string mem_address2;
        public string mem_address3;
        public string mem_address4;
        public string shop_name;
        public string license_num;
        public string content_id;
        public string content_name;
        public string mem_receive_email;
        public string mem_use_note;
        public string mem_receive_sms;
        public string mem_receive_push;
        public string mem_push_nosound;
        public string mem_open_profile;
        public string mem_denied;
        public string mem_email_cert;
        public string mem_register_datetime;
        public string mem_register_ip;
        public string mem_lastlogin_datetime;
        public string mem_lastlogin_ip;
        public string mem_is_admin;
        public string mem_profile_content;
        public string mem_adminmemo;
        public string mem_following;
        public string mem_followed;
        public string mem_icon;
        public string mem_photo;
        public string mem_license;
        public string mem_photo_url;
        public string mem_character;
        public string mem_badge;
    };
    #endregion


    #region Make Token
    public class JHeader
    {
        public string typ;
        public string alg;

        public JHeader(string typ, string alg)
        {
            this.typ = typ;
            this.alg = alg;
        }
    }

    public class JIssData
    {
        public string userid;
        public string password;

        public JIssData(string userid, string password)
        {
            this.userid = userid;
            this.password = password;
        }
    }

    public class JPayLoad
    {
        public string iss;

        public JPayLoad(string iss)
        {
            this.iss = iss;
        }
    }

    internal string MakeToken2(string sId, string sPw)
    {
        ///////////////////////////////////////////////////////////////////////
        // Header
        JHeader header = new JHeader("JWT", "HS256");
        var headerSerialized = JsonUtility.ToJson(header);

        ///////////////////////////////////////////////////////////////////////
        // Payload
        JIssData issData = new JIssData(sId, sPw);
        string IssDataSerialized = JsonUtility.ToJson(issData);

        JPayLoad payLoad = new JPayLoad(IssDataSerialized);
        string sPayLoadSerialized = JsonUtility.ToJson(payLoad);

        ///////////////////////////////////////////////////////////////////////
        // Packaging
        byte[] headerBytes = Encoding.UTF8.GetBytes(headerSerialized);
        byte[] dataBytes = Encoding.UTF8.GetBytes(sPayLoadSerialized);

        string enc_header = Base64UrlEncode(headerBytes);
        string enc_data = Base64UrlEncode(dataBytes);
        string _token = enc_header + "." + enc_data;

        byte[] sh_h256 = LoginHelper.CreateToken(_token, secret_key);
        string jwt_enc_signature = Base64UrlEncode(sh_h256);

        return _token + "." + jwt_enc_signature;
    }

    internal void MakeToken(string sId, string sPw)
    {
        token = MakeToken2(sId, sPw);
    }

    private static string Base64UrlEncode(byte[] input)
    {
        var output = Convert.ToBase64String(input);
        output = output.Split('=')[0]; // Remove any trailing '='s
        output = output.Replace('+', '-'); // 62nd char of encoding
        output = output.Replace('/', '_'); // 63rd char of encoding
        return output;
    }

    private static byte[] CreateToken(string message, string secret)
    {
        secret = secret ?? "";
        var encoding = new System.Text.UTF8Encoding();
        byte[] keyByte = encoding.GetBytes(secret);
        byte[] messageBytes = encoding.GetBytes(message);
        //string base64Message = Convert.ToBase64String(messageBytes);
        //byte[] base64Bytes = encoding.GetBytes(base64Message);

        //HMACSHA256 aaa = new HMACSHA256(keyByte);

        using (var hmacsha256 = new HMACSHA256(keyByte))
        {
            //byte[] hashmessage = hmacsha256.ComputeHash(base64Bytes);
            byte[] hashmessage = hmacsha256.ComputeHash(messageBytes);
            return hashmessage;
        }
    }
    #endregion

    #region Server Communication

    internal void Login(string sId, string sPw, Action<string> callbackFunc)
    {
        MakeToken(sId, sPw);

        //string sLogin = url_loginForm + token;

        DataTransfer.RequestURL(DataTransfer.DataType.Login, token, null, callbackFunc);
        //WebRequestHandler.Instance.GetJsonFromWebServer(sLogin, callbackFunc);
    }

    /// <summary>
    /// 회원가입 요청
    /// </summary>
    /// <param name="id"></param>
    /// <param name="pw"></param>
    /// <param name="email">email adress</param>
    /// <param name="nickname"></param>
    /// <param name="birthday">yyyy-mm-dd</param>
    /// <param name="sex">1: man, 2: woman</param>
    /// <param name="receive_email">0: deny 1: agree</param>
    /// <param name="receive_sms">0: deny 1: agree</param>
    internal void Register(string id, string pw, string email, string nickname, string birthday, string sex, string receive_email, string receive_sms, Action<string> callbackFunc)
    {
        string _token = MakeToken2(id, pw);

        //string sRegister = url_registerForm + _token;

#if false
        List<IMultipartFormSection> formData = new List<IMultipartFormSection>();
        formData.Add(new MultipartFormDataSection("mem_email", email));
        formData.Add(new MultipartFormDataSection("mem_nickname", nickname));
        formData.Add(new MultipartFormDataSection("mem_birthday", birthday));
        formData.Add(new MultipartFormDataSection("mem_sex", sex));
        formData.Add(new MultipartFormDataSection("mem_receive_email", receive_email));
        formData.Add(new MultipartFormDataSection("mem_receive_sms", receive_sms));
        formData.Add(new MultipartFormDataSection("mem_photo", "null"));
#else
        WWWForm formData = new WWWForm();
        formData.AddField("mem_email", email);
        formData.AddField("mem_nickname", nickname);
        formData.AddField("mem_birthday", birthday);
        formData.AddField("mem_sex", sex);
        formData.AddField("mem_receive_email", receive_email);
        formData.AddField("mem_receive_sms", receive_sms);
        formData.AddField("mem_photo", "null");
        //formData.AddBinaryData("mem_photo", texture2D.EncodeToPNG(), "image_1.png");

#endif
        DataTransfer.RequestURL(DataTransfer.DataType.Register, _token, formData, callbackFunc);
        //WebRequestHandler.Instance.PostJsonToWebServer(sRegister, formData, callbackFunc);
    }

    internal void Register(RegisterForm registerForm, Action<string> callbackFunc)
    {
        string _token = MakeToken2(registerForm.mem_userid, registerForm.mem_pw);
        //string _token = MakeToken2(registerForm.mem_userid, registerForm.mem_password);

        //string sRegister = url_registerForm + _token;

#if false
        List<IMultipartFormSection> formData = new List<IMultipartFormSection>();
        formData.Add(new MultipartFormDataSection("mem_email", email));
        formData.Add(new MultipartFormDataSection("mem_nickname", nickname));
        formData.Add(new MultipartFormDataSection("mem_birthday", birthday));
        formData.Add(new MultipartFormDataSection("mem_sex", sex));
        formData.Add(new MultipartFormDataSection("mem_receive_email", receive_email));
        formData.Add(new MultipartFormDataSection("mem_receive_sms", receive_sms));
        formData.Add(new MultipartFormDataSection("mem_photo", "null"));
#else
        WWWForm formData = new WWWForm();
        formData.AddField("mem_email", registerForm.mem_email);
        formData.AddField("mem_nickname", registerForm.mem_nickname);
        formData.AddField("mem_birthday", registerForm.mem_birthday);
        formData.AddField("mem_sex", registerForm.mem_sex);
        formData.AddField("mem_receive_email", registerForm.mem_receive_email);
        formData.AddField("mem_receive_sms", registerForm.mem_receive_sns);
        formData.AddField("mem_photo", "null");
        formData.AddField("social_id", registerForm.social_id??"null");
        formData.AddField("social_type", registerForm.social_type??"null");
        //formData.AddBinaryData("mem_photo", texture2D.EncodeToPNG(), "image_1.png");

#endif
        DataTransfer.RequestURL(DataTransfer.DataType.Register, _token, formData, callbackFunc);
        //WebRequestHandler.Instance.PostJsonToWebServer(sRegister, formData, callbackFunc);
    }

    internal enum FormType
    {
        ID, PASSWORD, NICKNAME, EMAIL,
    }

    /// <summary>
    /// 중복요청
    /// </summary>
    /// <param name="val"></param>
    /// <param name="type"></param>
    /// <param name="callbackFunc">"true": 중복됨, "false": 중복된 정보 없음.</param>
    internal void RequestDuplicateValue(string val, FormType type, Action<string> callbackFunc)
    {
        //string sCheck = url_existCheckForm;
        string sCheck = "";

        switch (type)
        {
            case FormType.ID:
                sCheck += "mem_userid?data=" + val;
                break;
            case FormType.NICKNAME:
                sCheck += "mem_nickname?data=" + val;
                break;
            case FormType.EMAIL:
                sCheck += "mem_email?data=" + val;
                break;

            default:
                // Invalid Data.
                return;
        }

        DataTransfer.RequestURL(DataTransfer.DataType.DuplicateCheck, sCheck, null, callbackFunc);
    }


    #endregion

    #region Check Function

    /// <summary>
    /// 사용자가 로그인/회원가입에 입력한 데이터를 검증
    /// </summary>
    /// <param name="val">문자열 id</param>
    /// <returns>true: 정상, false: 비정상</returns>
    internal bool ValidateData(string val, FormType type)
    {
        Regex regex;

        switch (type)
        {
            case FormType.ID:
                //시작은 영문, '_'를 제외한 특수문자 불가능, 영문/숫자/'_'로만 이루어진 6~12자리.
                regex = new Regex(@"^[a-zA-Z0-9_]{6,12}$");
                break;

            case FormType.PASSWORD:
                //8~16자리
                regex = new Regex(@"^[a-zA-Z0-9!@.#$%^&*?_~]{8,16}$");
                break;

            case FormType.NICKNAME:
                regex = new Regex(@"^(?=.*[a-zA-Z]|.*[ㄱ-ㅎㅏ-ㅣ가-힣]|.*[0-9]|.*[~!@#$%^&*()_+`';.,]+).{2,8}$");
                break;

            case FormType.EMAIL:
                regex = new Regex(@"^[_a-zA-Z0-9-\.]+@[\.a-zA-Z0-9-]+\.[a-zA-Z]+$");
                break;

            default:
                return false;
        }

        return regex.IsMatch(val);
    }

    /// <summary>
    /// 인자값들 중에 입력되지 않은 부분 검출
    /// </summary>
    /// <param name="id"></param>
    /// <param name="pw"></param>
    /// <param name="email"></param>
    /// <param name="nickname"></param>
    /// <param name="birthDay"></param>
    /// <returns>true: 비어있는 부분 발견, false: 비어있지 않음.</returns>
    internal bool CheckEmptyFields(string id, string pw, string email, string nickname, string birthDay)
    {
        bool retVal = false;

        retVal = retVal || (id.Length > 1);
        retVal = retVal || (pw.Length > 1);
        retVal = retVal || (email.Length > 1);
        retVal = retVal || (nickname.Length > 1);
        retVal = retVal || (birthDay.Length > 1);

        return retVal;
    }

    #endregion

    #region Callback functions
    // 현재 안씀.
    public void CallbackGetRegisterResult(string args)
    {

        //Debug.Log(args);
    }

    public void CallbackGetLoginResult(string args)
    {
        //ReceiveLoginData afk = JsonConvert.DeserializeObject<ReceiveLoginData>(args);
    }

    #endregion
}
