using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
//using Firebase.Auth;

using Facebook.Unity;

public class AuthCtrl : MonoBehaviour
{
    //ExistCheckEmailToId
    [System.Serializable]
    class ResultForm_ExistCheckEmailToId {
        public string Result;
        public DataForm_ExistCheckEmailToId Data;
    }

    [System.Serializable]
    class DataForm_ExistCheckEmailToId {
        public string mem_userid;
        public string mem_register_datetime;
        public string social_id;
        public string social_type;
    }

    //
    [System.Serializable]
    internal class FacebookLoginResult {
        public string id;
        public string email;
        public string name;
    }

    public GameObject m_goAdditionalRegister;
    AdditionalRegisterSettings m_additionalRegisterSettings;
    private LoginHelper loginHelper = new LoginHelper();

    //Signed
    //public Text txtSignedUsername;
    //public Image Avata;

    //Profile
    //public Sprite defaultSprite;
    //private string imageUrl;
    //private string displayName;
    //private string email;
    //private string id;

    //Google auth variables
    //private string webClientId = "639676282029-2obesb1rgv92ft96psvqatl35ba7ic8o.apps.googleusercontent.com";
    //private string webClientId = "890910497152-7p62e8jdoj3l0to3butl77go4vseog4i.apps.googleusercontent.com";
    private string webClientId = "890910497152-e8m90arg2gtjfd4sie2qeuoedi35sr0h.apps.googleusercontent.com";
    //private string webClientId = "890910497152-unb38m9vsl3f0mi0pr5jd710mve25ve6.apps.googleusercontent.com";
   //private GoogleSignInConfiguration configuration;

    //protected Firebase.Auth.FirebaseAuth auth;
    Firebase.DependencyStatus dependencyStatus = Firebase.DependencyStatus.UnavailableOther;
    //Firebase.Auth.FirebaseAuth m_auth;
    //Firebase.Auth.FirebaseUser m_user;

    //임시 facebook 이메일 저장
    string temp_register_email = "";



    void Awake() {
        //Setup for Google Sign In
        //configuration = new GoogleSignInConfiguration {
        //    WebClientId = webClientId,
        //    RequestIdToken = true
        //};
        //
        
        Screen.orientation = ScreenOrientation.Portrait;

        InitializeFirebase();
    }

    // Use this for initialization
    void Start() {

        m_additionalRegisterSettings = m_goAdditionalRegister.GetComponentInChildren<AdditionalRegisterSettings>();
        m_goAdditionalRegister.SetActive(false);

        m_additionalRegisterSettings.InitSetDefaultValues();
        m_additionalRegisterSettings.SetSocialLoginInfo(new FacebookLoginResult());
#if false
        //

        Firebase.FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task => {
            dependencyStatus = task.Result;

#if UNITY_EDITOR
            InitializeFirebase();
#endif
            if (dependencyStatus == Firebase.DependencyStatus.Available) {
                //WriteLog("Firebase initializing...");
                Debug.Log("Firebase initializing...");
                InitializeFirebase();
            }
            else {
                //WriteLog("Could not resolve all Firebase dependencies: " + dependencyStatus, "ERR");
                Debug.Log("Could not resolve all Firebase dependencies: " + dependencyStatus);
            }
        });
#endif
    }

    void InitializeFirebase() {
        //m_auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
        //m_auth.StateChanged += AuthStateChanged;
        //AuthStateChanged(this, null);


        //Setup for Facebook Sign In
        if (!FB.IsInitialized) {
            // Initialize the Facebook SDK
            FB.Init(InitCallback,  OnHideUnity); 
        }
        else {
            // Already initialized, signal an app activation App Event
            FB.ActivateApp();
        }
    }

    // Track state changes of the auth object.
    //void AuthStateChanged(object sender, System.EventArgs eventArgs) {
    //    //UnityEngine.Debug.Log("Auth State Changed Enter Function");

   
    //}

    //void OnDestroy() {
    //    m_auth.StateChanged -= AuthStateChanged;
    //    m_auth = null;
    //}

#region Firebase Logout
    /// <summary>
    /// Logout Firebase + logout thirt party
    /// </summary>
    //public void Logout_Click() {
    //    m_auth.SignOut();

    //    if (PlayerPrefs.GetInt(Utils.LOGGED) == Utils.FB) {
    //        FB.LogOut();
    //    }

    //    /*
    //    else if (PlayerPrefs.GetInt(Utils.LOGGED) == Utils.GG) {
    //        GoogleSignIn.DefaultInstance.SignOut();
    //    }
    //    else if (PlayerPrefs.GetInt(Utils.LOGGED) == Utils.TW) {
    //        Twitter.LogOut();
    //    }
    //    */

    //    PlayerPrefs.SetInt(Utils.LOGGED, Utils.NONE);
    //    PlayerPrefs.Save();

    //    //txtSignedUsername.text = "User Name";
    //    //Avata.sprite = defaultSprite;
    //}
#endregion

#region Facebook SignIn
    private void InitCallback() {
        if (FB.IsInitialized)
        {
            FB.ActivateApp();
            UnityEngine.Debug.Log("****************FB Init done.");
        }
        else
        {
            UnityEngine.Debug.Log("****************FB Failed to Init.");
        }
    }

    private void OnHideUnity(bool isGameShown) {
        if (!isGameShown) {
            Time.timeScale = 0;
        }
        else {
            Time.timeScale = 1;
        }
    }

    public void FacebookSignIn_Click() {
        OnFacebookSignIn();
    }

    void OnFacebookSignIn() {

        //이메일 중복 체크
        //
        FB.LogInWithReadPermissions(new List<string>() { "public_profile", "email" }, OnFacebookAuthenticationFinished);
    }

    void OnFacebookAuthenticationFinished(IResult result) {
        if(result.Error != null)
        {
            Debug.Log("===========FB Auth Error : " + result.Error);
            Debug.Log("=========== " + result.RawResult);
        }
        else
        {
            if (FB.IsLoggedIn) {

                Debug.Log("===========FB Login Complete.");
                var aToken = Facebook.Unity.AccessToken.CurrentAccessToken;

                Debug.Log("===========FB aToken string: " + aToken.TokenString);
                Debug.Log("===========FB UserID : " + aToken.UserId);

                Debug.Log("===========FB Permission : ");
                foreach (string perm in aToken.Permissions)
                {
                    Debug.Log("===========\t" + perm);
                }

                FB.API("/me?fields=id,email,name", HttpMethod.GET, (response) => {
                    UnityEngine.Debug.Log(response.RawResult);

                    var user = JsonUtility.FromJson<FacebookLoginResult>(response.RawResult);
                    Callback_Confirm(user);

                });


                /*지금 필요없음
                UnityEngine.Debug.Log("FB Logged In.");

                PlayerPrefs.SetInt(Utils.LOGGED, Utils.FB);
                PlayerPrefs.Save();

                //PanelSignIn.SetActive(false);
                //PanelSigned.SetActive(true);

                UnityEngine.Debug.Log("Start Firebase Auth");
                UnityEngine.Debug.Log("IdToken: " + AccessToken.CurrentAccessToken.TokenString);
                UnityEngine.Debug.Log("ImageUrl: " + String.Format("https://graph.facebook.com/{0}/picture?type=large&width=100&height=100", AccessToken.CurrentAccessToken.UserId));

                //Set imageUrl
                imageUrl = String.Format("https://graph.facebook.com/{0}/picture?type=large&width=100&height=100", AccessToken.CurrentAccessToken.UserId);

                //Firebase Auth
                FacebookAuth(AccessToken.CurrentAccessToken.TokenString);
                */
            }
            else {
                //User cancelled login
                Debug.Log("===========User cancelled login");
            }

        }
    }

    void Callback_Confirm(FacebookLoginResult facebook_loginInfo) {
        //string msg = "";
        UnityEngine.Debug.Log("facebook login start");
        //먼저 넘겨주고나서 로그인 테스트~
        m_additionalRegisterSettings.SetSocialLoginInfo(facebook_loginInfo);
        temp_register_email = facebook_loginInfo.email;


        //email 없다면 
        if (string.IsNullOrEmpty(temp_register_email)) {
            AlertPopup.Instance.DisplayMessage(
                            "Facebook에\n" +
                            "이메일을 추가해주세요",
                            "(Facebook 설정 -> 연락 탭\n" +
                            "-> 이메일 주소 추가)" +
                        "");

            return;
        }

        //로그인 시도
        var fb_id = facebook_loginInfo.id;
        var fb_pw = facebook_loginInfo.email;
        loginHelper.Login(fb_id, fb_pw, CallbackGetLoginResult);
    }

    public void CallbackGetLoginResult(string args) {
        LoginHelper.ReceiveLoginData afk = JsonUtility.FromJson<LoginHelper.ReceiveLoginData>(args);

        if (afk.Result != null && afk.Result.ToLower().Equals("true")) {
            // 로그인 성공
            //m_resultMessage.text = afk.Result;
            UnityEngine.Debug.Log("facebook login success");

            UnityCommunicator.Instance.m_userData.token = loginHelper.token;

            PlayerPrefs.DeleteAll();
            PlayerPrefs.SetString("kfLoginToken", UnityCommunicator.Instance.m_userData.token);
            SceneManager.LoadScene("Scene_01_AR");
        }
        else {
            // 로그인 실패
            DataTransfer.RequestURL( 
                type: DataTransfer.DataType.Exist_Check_Email_To_Id,
                data: temp_register_email, 
                formData: null, 
                callbackFunc:
                         (json) => {
                             var result = JsonUtility.FromJson<ResultForm_ExistCheckEmailToId>(json);

                             //print("request callback: " + result.Result);
                             //print("request callback data. date: " + result.Data.mem_register_datetime);

                             temp_register_email = ""; //temp 초기화

                             //이메일 중복하면 true, 중복 안되면 false 
                             if (-1 == result.Result.IndexOf("true", StringComparison.OrdinalIgnoreCase)) {
                                 // result.Result == false
                                 // 이메일 중복 안됨
                                 // 추가 회원가입창 출력
                                 m_goAdditionalRegister.SetActive(true);
                                
                             }
                             else { 
                             //var social_type = result.Data.social_type;
                             //if(social_type.IndexOf("Naver") == -1 && social_type.IndexOf("Kakao") == -1){ 
                             //   // 네이버도 없고 카카오도  없다면 기존 회원 로그인 창 팝업 처리
                             //}
                             //else {
                             //   //소셜 아이디와 이메일로 토큰생성하여 로그인 시도

                             //}

                             //이메일 중복 안됨
                             //이메일 중복이 안되었으므로 KFestAR 계정이 없다고 판단
                             AlertPopup.Instance.DisplayMessage(
                                 "가입하셨던 이력이 있습니다\n",
                                 "기존의 KFestAR ID로 로그인하거나\n" +
                                 "이메일을 변경하여 회원가입 바랍니다\n" +
                                 "가입 ID : " + result.Data.mem_userid + "\n" +
                                 "가입일자 : " + result.Data.mem_register_datetime
                             );

                             //
                             }
                         }
            );

            //loginHelper.RequestDuplicateValue(
            //   temp_register_email,
            //   LoginHelper.FormType.EMAIL,
            //   (str) => {
            //       temp_register_email = ""; //temp 초기화

            //       //이메일 중복하면 true, 중복 안되면 false 
            //       if (-1 == str.IndexOf("true")) {
            //           //이메일 중복 안됨
            //           //이메일 중복이 안되었으므로 KFestAR 계정이 없다고 판단
            //           AlertPopup.Instance.DisplayMessage(
            //               "가입하셨던 이력이 있습니다",
            //               "KFestAR ID로 로그인해주세요\n" +
            //               "가입 ID : " +
            //               "가입일자 : "
            //           );
            //           return;
            //       }
            //       //
            //       m_goAdditionalRegister.SetActive(true);
            //   }
            //);

        //
           
            // Remark에 실패에 대한 메세지가 들어있음.
            //m_resultMessage.text = afk.Remark;
            //UnityCommunicator.Instance.m_userData.token = "";
            //AlertPopup.Instance.DisplayMessage("로그인 실패", "계정정보를 확인해주세요.");

            
        }
    }

    /*
    private void FacebookAuth(string accessToken) {
        Firebase.Auth.Credential credential =
            Firebase.Auth.FacebookAuthProvider.GetCredential(accessToken);

        m_auth.SignInWithCredentialAsync(credential).ContinueWith(task => {
            if (task.IsCanceled) {
                UnityEngine.Debug.Log("SignInWithCredentialAsync was canceled.");
                return;
            }
            if (task.IsFaulted) {
                UnityEngine.Debug.Log("SignInWithCredentialAsync encountered an error: " + task.Exception);
                return;
            }

            m_user = m_auth.CurrentUser;

            UnityEngine.Debug.Log(
               "<< facebook - current user auth >>\n" +
               "ProviderId: " + m_user.ProviderId + " \n" +
               "UserId: " + m_user.UserId + " \n" +
               "IsAnonymous: " + m_user.IsAnonymous + " \n" +
               "IsEmailVerified: " + m_user.IsEmailVerified + " \n" +
               "DisplayName: " + m_user.DisplayName + " \n" +
               "Email: " + m_user.Email + " \n" +
               "PhoneNumber: " + m_user.PhoneNumber + " \n" +
               "PhotoUrl: " + m_user.PhotoUrl + " \n" +
               ""
               );

            string str_perm = "";
            foreach (string perm in AccessToken.CurrentAccessToken.Permissions) {
                // log each granted permission
                str_perm += "\t" + perm + "\n";
            }
            UnityEngine.Debug.Log(
                "<< check permission >>\n" +
                str_perm + "\n" +
                "...");

            txtSignedUsername.text = m_user.DisplayName;

          //  WriteLog("PhotoUrl:" + m_user.PhotoUrl.AbsoluteUrlOrEmptyString());

            ////It might an error, but with url get from firebase, now we can't get a profile image. So we succgess a solution,
            ////we will use profile url from facebook that we get after login.
            //StartCoroutine(LoadImage(CheckImageUrl(user.PhotoUrl.AbsoluteUrlOrEmptyString())));
            StartCoroutine(LoadImage(imageUrl));

            //

        
        });
    }
    */

#endregion

    /*구글 로그인 
#region Google SignIn
    /// <summary>
    /// Google Sign-In Click
    /// </summary>
    public void GoogleSignIn_Click() {
        //Sign-In with Google as first to get token for Firebase Auth
        OnGoogleSignIn();
    }

    void OnGoogleSignIn() {
        GoogleSignIn.Configuration = configuration;
        GoogleSignIn.Configuration.UseGameSignIn = false;
        GoogleSignIn.Configuration.RequestProfile = true;
        GoogleSignIn.Configuration.RequestIdToken = true;

        GoogleSignIn.DefaultInstance.SignIn().ContinueWith(
          OnGoogleAuthenticationFinished);
    }

    //Handle when Google Sign In successfully
    void OnGoogleAuthenticationFinished(Task<GoogleSignInUser> task) {
        if (task.IsFaulted) {
            using (IEnumerator<System.Exception> enumerator =
                task.Exception.InnerExceptions.GetEnumerator()) {
                    if (enumerator.MoveNext()) {
                        GoogleSignIn.SignInException error =
                                (GoogleSignIn.SignInException)enumerator.Current;
                        UnityEngine.Debug.Log("Got Error: " + error.Status + " " + error.Message);
                    }
                    else {
                        UnityEngine.Debug.Log("Got Unexpected Exception?!?" + task.Exception);
                    }
                }
        }
        else if (task.IsCanceled) {
            UnityEngine.Debug.Log("GoogleAuth Canceled");
        }
        else {
            //Google Sign-In successed
            UnityEngine.Debug.Log("IdToken: " + task.Result.IdToken);

            //Set imageUrl

            imageUrl = task.Result.ImageUrl.AbsoluteUrlOrEmptyString();

            //Start Firebase Auth
            Firebase.Auth.Credential credential = Firebase.Auth.GoogleAuthProvider.GetCredential(task.Result.IdToken, null);
            m_auth.SignInWithCredentialAsync(credential).ContinueWith(t => {
                if (t.IsCanceled) {
                    UnityEngine.Debug.Log("SignInWithCredentialAsync was canceled.");

                    return;
                }
                if (t.IsFaulted) {
                    UnityEngine.Debug.Log("SignInWithCredentialAsync encountered an error: " + t.Exception);
                    return;
                }

                PlayerPrefs.SetInt(Utils.LOGGED, Utils.GG);
                PlayerPrefs.Save();

                m_user = m_auth.CurrentUser;
                txtSignedUsername.text = String.Format("Welcome {0}!", m_user.DisplayName);

                string str =(
                    "<< google - credential >>\n" +
                    "ProviderId: " + m_user.ProviderId + " \n" +
                    "UserId: " + m_user.UserId + " \n" +
                    "IsAnonymous: " + m_user.IsAnonymous + " \n" +
                    "IsEmailVerified: " + m_user.IsEmailVerified + " \n" +
                    "DisplayName: " + m_user.DisplayName + " \n" +
                    "Email: " + m_user.Email + " \n" +
                    "PhoneNumber: " + m_user.PhoneNumber + " \n" +
                    "PhotoUrl: " + m_user.PhotoUrl + " \n" +
                ""
                );
                txtSignedUsername.text += "\n\n" + str;


                UnityEngine.Debug.Log("PhotoUrl:" + m_user.PhotoUrl.AbsoluteUrlOrEmptyString());

                StartCoroutine(LoadImage(CheckImageUrl(m_user.PhotoUrl.AbsoluteUrlOrEmptyString())));
            });


            UnityEngine.Debug.Log(
                "<< google - task.Result >>\n" +
                "AuthCode: " + task.Result.AuthCode + " \n" +
                "UserId: " + task.Result.UserId + " \n" +
                "FamilyName: " + task.Result.FamilyName + " \n" +
                "GivenName: " + task.Result.GivenName + " \n" +
                "DisplayName: " + task.Result.DisplayName + " \n" +
                "Email: " + task.Result.Email + " \n" +
                "ImageUrl: " + task.Result.ImageUrl + " \n" +
                ""
                );
        }
    }
#endregion
    */

    /* 트위터 로그인 
#region Twitter SignIn
    public void TwitterSignIn_Click() {
      //  WriteLog("Start Twitter Sign In");

        Twitter.Init();

        Twitter.LogIn(TwitterLoginComplete, (ApiError error) => {
          UnityEngine.Debug.Log(error.message);
        });
    }

    public void TwitterLoginComplete(TwitterSession session) {
        if (session == null || session.ToString().Length == 0) {
          UnityEngine.Debug.Log("Session null or blank.");
            return;
        }

      //  WriteLog("Twitter loggin successed.");

        PlayerPrefs.SetInt(Utils.LOGGED, Utils.TW);
        PlayerPrefs.Save();

        //PanelSignIn.SetActive(false);
        //PanelSigned.SetActive(true);

      //  WriteLog("Start Firebase Auth");
      //  WriteLog("Token: " + session.authToken.token);
      //  WriteLog("Secret: " + session.authToken.secret);

        //------------------Twitter ImageUrl format------------------------
        //https://twitter.com/[screen_name]/profile_image?size=mini
        //https://twitter.com/[screen_name]/profile_image?size=normal
        //https://twitter.com/[screen_name]/profile_image?size=bigger
        //https://twitter.com/[screen_name]/profile_image?size=original
        //-----------------------------------------------------------------
      //  WriteLog("ImageUrl: " + String.Format("https://twitter.com/{0}/profile_image?size=normal", session.userName));

        //Set imageUrl
        imageUrl = String.Format("https://twitter.com/{0}/profile_image?size=normal", session.userName);

        Firebase.Auth.Credential credential =
        Firebase.Auth.TwitterAuthProvider.GetCredential(session.authToken.token, session.authToken.secret);
        m_auth.SignInWithCredentialAsync(credential).ContinueWith(task => {
            if (task.IsCanceled) {
                UnityEngine.Debug.Log("SignInWithCredentialAsync was canceled.");
                return;
            }
            if (task.IsFaulted) {
                UnityEngine.Debug.Log("SignInWithCredentialAsync encountered an error: " + task.Exception);
                return;
            }
            Firebase.Auth.FirebaseUser newUser = task.Result;
            m_user = newUser;

            UnityEngine.Debug.Log(
               "<< twitter - current user auth >>\n" +
               "ProviderId: " + m_user.ProviderId + " \n" +
               "UserId: " + m_user.UserId + " \n" +
               "IsAnonymous: " + m_user.IsAnonymous + " \n" +
               "IsEmailVerified: " + m_user.IsEmailVerified + " \n" +
               "DisplayName: " + m_user.DisplayName + " \n" +
               "Email: " + m_user.Email + " \n" +
               "PhoneNumber: " + m_user.PhoneNumber + " \n" +
               "PhotoUrl: " + m_user.PhotoUrl + " \n" +
               ""
               );
            txtSignedUsername.text = newUser.DisplayName;

            //WriteLog("PhotoUrl:" + newUser.PhotoUrl.AbsoluteUrlOrEmptyString());

            StartCoroutine(LoadImage(CheckImageUrl(newUser.PhotoUrl.AbsoluteUrlOrEmptyString())));
        });
    }
#endregion

    */


    /// <summary>
    /// Return imageUrl from Firebase, if it null, return imageUrl from thirt party(google, facebook,...)
    /// </summary>
    /// <param name="url">imageUrl from Firebase</param>
    /// <returns>imageUrl</returns>
    //private string CheckImageUrl(string url) {
    //    if (!string.IsNullOrEmpty(url)) {
    //        return url;
    //    }

    //    //WriteLog("Use imageUrl not from Firebase");
    //    return imageUrl;
    //}

    //IEnumerator LoadImage(string imageUri) {
    //   //WriteLog("Loading Image");

    //    WWW www = new WWW(imageUri);
    //    yield return www;

    //    //WriteLog("Get Image success, width = " + www.texture.width + ", height = " + www.texture.height);
    //    Avata.sprite = Sprite.Create(www.texture, new Rect(0, 0, www.texture.width, www.texture.height), new Vector2(0, 0));
    //}
}
