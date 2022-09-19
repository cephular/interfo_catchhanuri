using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class LoginFormSettings : MonoBehaviour
{

    public InputField m_inputField_id;
    public InputField m_inputField_pw;
    public Text m_resultMessage;

    private LoginHelper loginHelper = new LoginHelper();

    Button m_btnConfirm;

    string m_id, m_pw;

    void Awake()
    {
        // 스크린을 강제로 세로로 만듬.
        // 이후 Scene에서 재정립해야 함.
        Screen.orientation = ScreenOrientation.Portrait;

        Screen.sleepTimeout = SleepTimeout.NeverSleep;

        if (PlayerPrefs.HasKey("kfLoginToken"))
        {
            string m_tmpToken = PlayerPrefs.GetString("kfLoginToken");
            if (m_tmpToken.Length > 0)
            {
                UnityCommunicator.Instance.m_userData.token = m_tmpToken;
                SceneManager.LoadScene("Scene_01_AR");
            }
        }
    }


    void Start()
    {
        if (m_btnConfirm == null)
        {
            m_btnConfirm = GetComponentInChildren<Button>();
        }
        m_btnConfirm.onClick.RemoveAllListeners();
        m_btnConfirm.onClick.AddListener(Callback_Confirm);

        m_inputField_id.onEndEdit.AddListener(Callback_InputField_ID_EndEdit);
        m_inputField_pw.onEndEdit.AddListener(Callback_InputField_PW_EndEdit);

        m_resultMessage.text = "";
#if false
        try
        {
            SceneManager.UnloadSceneAsync("Scene_01_AR", UnloadSceneOptions.UnloadAllEmbeddedSceneObjects);
        }
        catch(System.Exception e)
        {
        }
#endif
    }


    void Callback_InputField_ID_EndEdit(string id)
    {

        m_id = id;

        m_inputField_pw.ActivateInputField();
    }

    void Callback_InputField_PW_EndEdit(string pw)
    {

        m_pw = pw;

        //Callback_Confirm();
    }

    void Callback_Confirm()
    {
        //string msg = "";

        loginHelper.Login(m_id, m_pw, CallbackGetLoginResult);
    }

    public void CallbackGetLoginResult(string args)
    {
        print(args);
        LoginHelper.ReceiveLoginData afk = JsonUtility.FromJson<LoginHelper.ReceiveLoginData>(args);

        if (afk.Result != null && afk.Result.ToLower().Equals("true"))
        {
            // 로그인 성공
            m_resultMessage.text = afk.Result;
            UnityCommunicator.Instance.m_userData.token = loginHelper.token;

            PlayerPrefs.DeleteAll();
            PlayerPrefs.SetString("kfLoginToken", UnityCommunicator.Instance.m_userData.token);
            SceneManager.LoadScene("Scene_01_AR");
        }
        else
        {
            // 로그인 실패
            // Remark에 실패에 대한 메세지가 들어있음.
            m_resultMessage.text = afk.Remark;
            UnityCommunicator.Instance.m_userData.token = "";
            AlertPopup.Instance.DisplayMessage("로그인 실패", "계정정보를 확인해주세요.");
        }
    }
}
