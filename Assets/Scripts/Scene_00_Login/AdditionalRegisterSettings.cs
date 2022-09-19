using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;



public class AdditionalRegisterSettings : MonoBehaviour
{
    AuthCtrl.FacebookLoginResult m_facebook_loginInfo;

    // Default: false
    private string m_tmpToken;
    private bool bAllChecked;
    private bool bIndivChecked;

    private bool bGoodNickname;
    private bool bGoodEmail;
    private bool bGoodBirthDay;

    public Text[] m_CheckText;

    // View에서 보이는 순서대로 해야함
    enum InputBoxName {
        Nickname,
        Email,
        BirthDay,  //생년월일 제거, iOS 검수 통과후 선택사항으로 변경

    }
    public GenderSelector m_genderSelector;
    public InputField[] m_inputFieldList;
    public Toggle[] m_toggleAgree;
    public string m_resultMessage;

    private LoginHelper loginHelper = new LoginHelper();
    public Button m_btnConfirm;
    private string m_id, m_pw;

    void Awake() {
        // 스크린을 강제로 세로로 만듬.
        // 이후 Scene에서 재정립해야 함.
        //Screen.orientation = ScreenOrientation.Portrait;

        if (PlayerPrefs.HasKey("kfLoginToken")) {
            m_tmpToken = PlayerPrefs.GetString("kfLoginToken");
            if (m_tmpToken.Length > 0) {
                UnityCommunicator.Instance.m_userData.token = m_tmpToken;
                SceneManager.LoadScene(1);
            }
        }

        //m_inputFieldList = gameObject.GetComponentsInChildren<InputField>();
        //print("&&&&&&&&&&&&&&&&&&&&&&& InputField length :  " + m_inputFieldList.Length);

    }

    void Start() {

        //if (m_btnConfirm == null) {
        //    m_btnConfirm = GetComponentInChildren<Button>();
        //}
        //m_btnConfirm.onClick.AddListener(Callback_Confirm);

        //m_inputField_id.onEndEdit.AddListener(Callback_InputField_ID_EndEdit);
        //m_inputField_pw.onEndEdit.AddListener(Callback_InputField_PW_EndEdit);

        //회원가입 폼 뷰 끄기
        //transform.parent.gameObject.SetActive(false);

        //GenderSelector의 초기화를 Awake()함수에서 하므로 InitSetDefaultValues() 함수를 Start()에서 실행

        //


        //InitSetDefaultValues();

    }

   public void InitSetDefaultValues() {
        m_inputFieldList = gameObject.GetComponentsInChildren<InputField>();
//        print("&&&&&&&&&&&&&&&&&&&&&&& InputField length :  " + m_inputFieldList.Length);

        // Token
        m_tmpToken = "";
//        print("0");

        // Agree Documents
        bAllChecked = false;
        bIndivChecked = false;
        m_toggleAgree[0].isOn = false;

        int length = m_inputFieldList.Length;
        for (int i = 0; i < length; ++i) {
            m_inputFieldList[i].text = "";
        }

        bGoodNickname = false;
        bGoodEmail = false;
        //생년월일 제거, iOS 검수 통과후 선택사항으로 변경
        //생년월일을 입력한것으로 하고 기본값을 넣어준다. bGoodBirthDay 를 false에서 true로 변경
        bGoodBirthDay = true;  

        /*
        // Nickname
        bGoodNickname = false;
        m_inputFieldList[(int)InputBoxName.Nickname].text = "";
        //print("2");

        // E-Mail
        bGoodEmail = false;
        m_inputFieldList[(int)InputBoxName.Email].text = "";
        //print("3");



        // BirthDay
        bGoodBirthDay = false;
        m_inputFieldList[(int)InputBoxName.BirthDay].text = "";
       // print("4");

        */
        // Gender
        m_genderSelector.CurrentGender = GenderSelector.SelectType.Number;
        m_genderSelector.InitSetDefaultValue();


       // print("5");
    }

    internal void SetSocialLoginInfo(AuthCtrl.FacebookLoginResult loginInfo) {
        if(loginInfo == null) { return; }

        m_facebook_loginInfo = loginInfo;

      //  UnityEngine.Debug.Log("SetSocialLoginInfo : \n" + loginInfo.id + "\n" + loginInfo.email + "\n" + loginInfo.name);
     
        if (string.IsNullOrEmpty(m_facebook_loginInfo.email)) { return; }



        //Email
        bGoodEmail = true;
       // print("input field length: " + m_inputFieldList.Length);

        m_inputFieldList[(int)InputBoxName.Email].text = m_facebook_loginInfo.email;

        var parent = m_inputFieldList[(int)InputBoxName.Email].transform.parent;
        int length = parent.childCount;

       // print("input go length: " + length);

        for (int i = 0; i < length; ++i) {
            print(parent.GetChild(i).name);
            parent.GetChild(i).gameObject.SetActive(false);
        }
    }

    #region 중복체크
    //public void OnCheckDup_ID() {
    //    bGoodId = false;
    //    m_CheckText[0].text = "중복체크";
    //    if (loginHelper.ValidateData(m_inputFieldList[(int)InputBoxName.ID].text, LoginHelper.FormType.ID) == false) {
    //        //TODO: 닉네임 양식이 잘못 됨.
    //        AlertPopup.Instance.DisplayMessage("아이디 양식", "영문, 숫자 6~12자리\n입력하세요.");
    //        bGoodId = false;
    //        return;
    //    }

    //    loginHelper.RequestDuplicateValue(m_inputFieldList[(int)InputBoxName.ID].text, LoginHelper.FormType.ID, Callback_DupID);
    //}

    //void Callback_DupID(string fullJson) {
    //    if (fullJson.ToLower().Equals("false")) {
    //        bGoodId = true;
    //        m_CheckText[0].text = "확인완료";
    //    }
    //    else {
    //        bGoodId = false;
    //        m_CheckText[0].text = "중복체크";
    //        AlertPopup.Instance.DisplayMessage("아이디 중복", "아이디가 중복되었습니다.");
    //    }
    //}

    //public void OnCheck_Password() {
        //m_CheckText[3].text = "확인하기";
        //if (!(m_inputFieldList[(int)InputBoxName.Passward].text.Equals(m_inputFieldList[(int)InputBoxName.PasswardConfirm].text))) {
        //    //TODO: 비밀번호가 일치하지 않음.
        //    bMatchedAndGoodPassword = false;
        //    AlertPopup.Instance.DisplayMessage("비밀번호 불일치", "두 비밀번호가 일치하지 않습니다.");
        //    return;
        //}

        //if (loginHelper.ValidateData(m_inputFieldList[(int)InputBoxName.Passward].text, LoginHelper.FormType.PASSWORD) == false) {
        //    //TODO: 비밀번호 양식이 잘못 됨.
        //    bMatchedAndGoodPassword = false;
        //    AlertPopup.Instance.DisplayMessage("비밀번호 양식", "비밀번호의 길이는 8~16으로 입력해주세요.");
        //    return;
        //}

        //bMatchedAndGoodPassword = true;
        //m_CheckText[3].text = "확인완료";
    //}

    public void OnCheckDup_Email() {
        bGoodEmail = false;
        m_CheckText[1].text = "중복체크";
        if (loginHelper.ValidateData(m_inputFieldList[(int)InputBoxName.Email].text, LoginHelper.FormType.EMAIL) == false) {
            //TODO: 이메일 양식이 잘못 됨.
            AlertPopup.Instance.DisplayMessage("이메일 양식", "이메일 주소를 확인해주세요.");
            bGoodEmail = false;
            return;
        }

        loginHelper.RequestDuplicateValue(m_inputFieldList[(int)InputBoxName.Email].text, LoginHelper.FormType.EMAIL, Callback_DupEmail);
    }

    void Callback_DupEmail(string fullJson) {
        if (fullJson.ToLower().Equals("false")) {
            bGoodEmail = true;
            m_CheckText[1].text = "확인완료";
        }
        else {
            bGoodEmail = false;
            m_CheckText[1].text = "중복체크";
            AlertPopup.Instance.DisplayMessage("이메일 중복", "이메일 주소가 중복되었습니다.");
        }
    }

    public void OnCheckDup_Nickname() {
        bGoodNickname = false;
        m_CheckText[0].text = "중복체크";
        if (loginHelper.ValidateData(m_inputFieldList[(int)InputBoxName.Nickname].text, LoginHelper.FormType.NICKNAME) == false) {
            //TODO: 닉네임 양식이 잘못 됨.
            AlertPopup.Instance.DisplayMessage("닉네임 양식", "닉네임은 공백없이 영문, 숫자, 한글 최소 2자 이상 입력하세요.");
            bGoodNickname = false;
            return;
        }

        loginHelper.RequestDuplicateValue(m_inputFieldList[(int)InputBoxName.Nickname].text, LoginHelper.FormType.NICKNAME, Callback_DupNickname);
    }

    void Callback_DupNickname(string fullJson) {
        if (fullJson.ToLower().Equals("false")) {
            bGoodNickname = true;
            m_CheckText[0].text = "확인완료";
        }
        else {
            bGoodNickname = false;
            m_CheckText[0].text = "중복체크";
            AlertPopup.Instance.DisplayMessage("닉네임 중복", "닉네임이 중복되었습니다.");
        }
    }
    #endregion //중복체크

    #region InputField EndEdit

    public void Callback_InputField_Nickname_EndEdit(string pw) {
        bGoodNickname = false;
        m_CheckText[0].text = "중복체크";
    }

    public void Callback_InputField_Email_EndEdit(string pw) {
        bGoodEmail = false;
        m_CheckText[1].text = "중복체크";
    }

    public void Callback_InputField_BirthDay_EndEdit(string birthDay) {
        bGoodBirthDay = false;

        if (birthDay.Length != 6) {
            bGoodBirthDay = false;
            return;
        }

        bool _bSucc = true;
        int _parseMonth = 0;
        int _parseDay = 0;

        int.TryParse(birthDay.Substring(2, 2), out _parseMonth);
        _bSucc = !(_parseMonth > 12);

        int.TryParse(birthDay.Substring(4, 2), out _parseDay);
        switch (_parseMonth) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                _bSucc = _bSucc && !(_parseDay > 31);
                break;
            case 2:
                _bSucc = _bSucc && !(_parseDay > 29);
                break;
            default:
                _bSucc = _bSucc && !(_parseDay > 30);
                break;
        }

        bGoodBirthDay = _bSucc;
    }
    #endregion

    public void Callback_Confirm() {

        if (bGoodNickname == false) {
            AlertPopup.Instance.DisplayMessage("닉네임 중복체크", "중복체크를 해주세요");
            return;
        }

        if (bGoodEmail == false) {
            AlertPopup.Instance.DisplayMessage("이메일 중복체크", "중복체크를 해주세요");
            return;
        }

        /*
         * 생년월일, 성별 제거, iOS 검수 통과후 선택사항으로 변경      
        if (m_genderSelector.CurrentGender == GenderSelector.SelectType.Number)
        {
            AlertPopup.Instance.DisplayMessage("성별 입력 필요", "성별을 선택해주세요.");
            return;
        }

        if(bGoodBirthDay == false)
        {
            AlertPopup.Instance.DisplayMessage("생년월일", "정확한 생년월일을 입력해주세요.\n(예)980502");
            return;
        }
        */

        if (m_toggleAgree[0].isOn != true) {
            AlertPopup.Instance.DisplayMessage("동의 필요", "서비스 이용약관과\n개인정보 정책에 동의가 필요합니다.");
            return;
        }

        //if(!(m_inputFieldList[(int)InputBoxName.Passward].text.Equals(m_inputFieldList[(int)InputBoxName.PasswardConfirm].text)))

        var new_member = new RegisterForm();
        //new_member.mem_userid = m_inputFieldList[(int)InputBoxName.ID].text;
        //new_member.mem_nickname = m_inputFieldList[(int)InputBoxName.Nickname].text;
        //new_member.mem_email = m_inputFieldList[(int)InputBoxName.Email].text;
        //new_member.mem_pw = m_inputFieldList[(int)InputBoxName.Passward].text;
        //new_member.mem_sex = m_genderSelector.CurrentGender == GenderSelector.SelectType.Man ? "1" : "2";
        //new_member.mem_receive_email = "0";
        //new_member.mem_receive_sns = "0";

        new_member.mem_userid = m_facebook_loginInfo.id;
        new_member.mem_nickname = m_inputFieldList[(int)InputBoxName.Nickname].text;
        new_member.mem_email = m_inputFieldList[(int)InputBoxName.Email].text;
        new_member.mem_pw = new_member.mem_email;
        //new_member.mem_pw = m_facebook_loginInfo.email;

        /*
         * 성별 제거, iOS 검수 통과후 선택사항으로 변경
        new_member.mem_sex = m_genderSelector.CurrentGender == GenderSelector.SelectType.Man ? "1" : "2";
        */
        const string DefaultGender = "0";
        new_member.mem_sex = DefaultGender;
        //
        new_member.mem_receive_email = "0";
        new_member.mem_receive_sns = "0";
        new_member.social_id = m_facebook_loginInfo.id;
        new_member.social_type = "Facebook";


        //Make birthday string.
        //AdditionalRegisterSettings.cs 에서 m_inputFieldList.Length 길이가 2 이므로
        //(int)InputBoxName.BirthDay 값보다 크다면 생년월일 입력상자가 열린 것
        /*
        {
            string _txtBD = m_inputFieldList[(int)InputBoxName.BirthDay].text;
            int _parseInt = 0;

            int.TryParse(_txtBD, out _parseInt);
            if (_parseInt > 190000) _txtBD = "19" + _txtBD;
            else _txtBD = "20" + _txtBD;

            _txtBD = _txtBD.Substring(0, 4) + "-" + _txtBD.Substring(4, 2) + "-" + _txtBD.Substring(6);
            new_member.mem_birthday = _txtBD;
        }
        */
        const string Default_Birthday = "1900-01-01";
        new_member.mem_birthday = Default_Birthday;

        m_tmpToken = loginHelper.MakeToken2(new_member.mem_userid, new_member.mem_pw);
        //print(
            //">>>>>>>>>>\n"+
            //"mem_userid: " + new_member.mem_userid + "\n" +
            //"mem_nickname: " + new_member.mem_nickname + "\n" +
            //"mem_email: " + new_member.mem_email + "\n" +
            //"mem_pw: " + new_member.mem_pw + "\n" +
            //"mem_sex: " + new_member.mem_sex + "\n" +
            //"mem_receive_email: " + new_member.mem_receive_email + "\n" +
            //"mem_receive_sns: " + new_member.mem_receive_sns + "\n" +
            //"social_id: " + new_member.social_id + "\n" +
            //"social_type: " + new_member.social_type + "\n" +
            //"m_tmpToken: " + m_tmpToken + "\n" +
            //""  );

        loginHelper.Register(new_member, CallbackGetRegisterResult);
    }

    public void CallbackGetRegisterResult(string args) {
        var result = JsonUtility.FromJson<LoginHelper.ReceiveLoginData>(args);
        //print(">>>> CallbackGetRegisterResult : enter");
        if (result == null) { Debug.LogError("Register form error"); return; }

        m_resultMessage = result.Result;

        //print("\tm_resultMessage : " + m_resultMessage + "\n" +
        	//"\tm_tmpToken: " +m_tmpToken + "\n" +
        	//"");

        if (result.Result.ToLower().Equals("true")) {
            // 로그인 성공
            //transform.parent.gameObject.SetActive(false);
            UnityCommunicator.Instance.m_userData.token = m_tmpToken;
            PlayerPrefs.SetString("kfLoginToken", m_tmpToken);
            SceneManager.LoadScene("Scene_01_AR");
        }
        else {
            // 로그인 실패
            // Remark에 실패에 대한 메세지가 들어있음.
            //m_resultMessage.text = afk.Remark;
            m_tmpToken = "";
            UnityCommunicator.Instance.m_userData.token = "";
            AlertPopup.Instance.DisplayMessage("회원가입 실패", result.Remark);
            Debug.LogError(result.Remark);
        }
    }

    #region Toggle Document
    public void OnTotalChanged(bool bChecked) {
        bAllChecked = true;
        if (bIndivChecked == true) {
            bAllChecked = false;
            bIndivChecked = false;
            return;
        }

        for (int i = 1; i < m_toggleAgree.Length; i++) {
            m_toggleAgree[i].isOn = bChecked;
        }
    }

    public void OnUseDocumentChanged(bool bChecked) {
        if (bAllChecked == true) {
            bAllChecked = false;
            return;
        }

        bIndivChecked = true;
        bool befTValue = m_toggleAgree[0].isOn;
        m_toggleAgree[0].isOn = (m_toggleAgree[1].isOn & m_toggleAgree[2].isOn);
        if (befTValue == m_toggleAgree[0].isOn) {
            bAllChecked = false;
            bIndivChecked = false;
        }
    }

    public void OnPrivateInfoDocumnetChanged(bool bChecked) {
        if (bAllChecked == true) {
            bAllChecked = false;
            return;
        }

        bIndivChecked = true;
        bool befTValue = m_toggleAgree[0].isOn;
        m_toggleAgree[0].isOn = (m_toggleAgree[1].isOn & m_toggleAgree[2].isOn);
        if (befTValue == m_toggleAgree[0].isOn) {
            bAllChecked = false;
            bIndivChecked = false;
        }
    }
    #endregion
}
