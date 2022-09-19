using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;


public class WebRequestHandler : MonoBehaviour
{

    static WebRequestHandler s_instance;
    static bool m_initOnce;

    public static WebRequestHandler Instance
    {
        get
        {
            if (s_instance == null)
            {
                s_instance = FindObjectOfType<WebRequestHandler>();
                if (s_instance == null)
                {
                    // Create gameObject and add component
                    s_instance = (new GameObject("WebRequestHandler")).AddComponent<WebRequestHandler>();
                }
            }
            return s_instance;
        }
    }
    //

    const int TimeOut = 120;

    void Initialize()
    {
        if (m_initOnce) { return; }
        m_initOnce = true;

#if TEST_LOG
        Debug.Log("WebRequestHandler initialize()");
#endif

        DontDestroyOnLoad(this);
    }
    private void Awake()
    {
        Instance.Initialize();
    }

    void TestPost() {
        //string url = "https://koreafestar.com/api/putDanoCollect/eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.IntcInVzZXJpZFwiOlwiYWRtaW5cIixcInBhc3N3b3JkXCI6XCI2NzE4XCJ9Ig.UAQ_4yCEvAakF-lrjWY_v1JS_M67AfXZlZMZnkK7eLU";
        string url = "https://koreafestar.com/api/register/eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.IntcInVzZXJpZFwiOlwiYWRtaW5cIixcInBhc3N3b3JkXCI6XCI2NzE4XCJ9Ig.UAQ_4yCEvAakF-lrjWY_v1JS_M67AfXZlZMZnkK7eLU";

        List<IMultipartFormSection> formData = new List<IMultipartFormSection>();
        formData.Add(new MultipartFormDataSection("name", "Hak"));
        formData.Add(new MultipartFormDataSection("collect", "1010"));
        /*
        png 파일(byte array) 업로드할 때는 MultipartFormFileSection 안됨 -> WWWForm 사용할것.
        WWWForm formData = new WWWForm();
        formData.AddBinaryData("post_file[]", texture2D.EncodeToPNG(), "image_1.png");
        formData.AddBinaryData("post_file[]", texture2D.EncodeToPNG(), "image_2.png");
        formData.AddBinaryData("post_file[]", texture2D.EncodeToPNG(), "image_3.png");
        formData.AddField("content", "AR벚꽃 리뷰 테스트 입니다..");
        formData.AddField("score", "4.7");
        */

        PostJsonToWebServer(url, formData, PrintDataComplete_text);
        //
        //{
        //    "Result": true,
        //    "Data": [
        //        {
        //            "YangBan": "0010"
        //        }
        //    ]
        //}
    }

#region 축제 관련 텍스쳐 다운로드
    void GettingDataFromWebServe()
    {
        string url = "https://koreafestar.com/api/putDanoCollect/eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.IntcInVzZXJpZFwiOlwiYWRtaW5cIixcInBhc3N3b3JkXCI6XCI2NzE4XCJ9Ig.UAQ_4yCEvAakF-lrjWY_v1JS_M67AfXZlZMZnkK7eLU";

        List<IMultipartFormSection> formData = new List<IMultipartFormSection>();
        formData.Add(new MultipartFormDataSection("name", "Hak"));
        formData.Add(new MultipartFormDataSection("collect", "1010"));
        /*
        png 파일(byte array) 업로드할 때는 MultipartFormFileSection 안됨 -> WWWForm 사용할것.
        WWWForm formData = new WWWForm();
        formData.AddBinaryData("post_file[]", texture2D.EncodeToPNG(), "image_1.png");
        formData.AddBinaryData("post_file[]", texture2D.EncodeToPNG(), "image_2.png");
        formData.AddBinaryData("post_file[]", texture2D.EncodeToPNG(), "image_3.png");
        formData.AddField("content", "AR벚꽃 리뷰 테스트 입니다..");
        formData.AddField("score", "4.7");
        */

        PostJsonToWebServer(url, formData, PrintDataComplete_text);
        //
        //{
        //    "Result": true,
        //    "Data": [
        //        {
        //            "YangBan": "0010"
        //        }
        //    ]
        //}
    }
    void PrintDataComplete_text(string text)
    {
#if TEST_LOG
        print("complete\n" + text);
#endif
    }
    void PrintGetDataComplete_text(string text)
    {
#if TEST_LOG
        print("get complete\n" + text);
#endif
    }
    //void PrintDataComplete_Texture(Texture texture) {
    //    print("Texture download complete");
    //    GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
    //    cube.GetComponent<MeshRenderer>().material.SetTexture("_MainTex", texture);
    //}
    internal void PostJsonToWebServer(string url, List<IMultipartFormSection> formData, System.Action<string> completeCallback)
    {
        StartCoroutine(PostTextToWeb(url, formData, completeCallback));
    }
    internal void PostJsonToWebServer(string url, WWWForm formData, System.Action<string> completeCallback)
    {
        StartCoroutine(PostTextToWeb(url, formData, completeCallback));
    }
    internal void GetJsonFromWebServer(string url, System.Action<string> completeCallback)
    {
        StartCoroutine(GetTextFromWeb(url, completeCallback));
    }
    internal void GetJsonFromWebServer(string url, System.Action<string, System.Action> processingResults, System.Action completeCallback)
    {
        StartCoroutine(GetTextFromWeb(url, processingResults, completeCallback));
    }
    //texture
    internal void GetTextureFromWebServer(string url, System.Action<Texture2D> completeCallback)
    {
        StartCoroutine(RequestTextureFromWeb(url, completeCallback, 0));
    }

    //
    IEnumerator PostTextToWeb(string url, List<IMultipartFormSection> formData, System.Action<string> completeCallback)
    {
        UnityWebRequest www = UnityWebRequest.Post(url, formData);
        www.timeout = TimeOut;
        yield return www.SendWebRequest();

        if (www.isNetworkError || www.isHttpError) { Debug.Log(www.error); }
        else
        {
            if (completeCallback != null)
                completeCallback(www.downloadHandler.text);
        }
    }
    IEnumerator PostTextToWeb(string url, WWWForm formData, System.Action<string> completeCallback)
    {
        UnityWebRequest www = UnityWebRequest.Post(url, formData);
        www.timeout = TimeOut;
        yield return www.SendWebRequest();

        if (www.isNetworkError || www.isHttpError) {
            Debug.Log(www.error);
        }
        else
        {
            if (completeCallback != null)
                completeCallback(www.downloadHandler.text);
        }
    }
    IEnumerator GetTextFromWeb(string url, System.Action<string> completeCallback)
    {
        //
        UnityWebRequest www = UnityWebRequest.Get(url);
        www.timeout = TimeOut;

        yield return www.SendWebRequest();

        StartCoroutine(CoDownloadProgress(www));

        if (www.isNetworkError || www.isHttpError) {
            Debug.Log("www error : " + www.error);
        }
        else
        {
            if (completeCallback != null)
                completeCallback(www.downloadHandler.text);
        }
    }
    IEnumerator GetTextFromWeb(string url, System.Action<string, System.Action> processingResults, System.Action completeCallback)
    {
        UnityWebRequest www = UnityWebRequest.Get(url);
        www.timeout = TimeOut;
        yield return www.SendWebRequest();

        if (www.isNetworkError || www.isHttpError) { Debug.Log(www.error); }
        else
        {
            if (processingResults != null)
                processingResults(www.downloadHandler.text, completeCallback);
        }
    }

    //텍스쳐 다운로드
    IEnumerator RequestTextureFromWeb(string url, System.Action<Texture2D> completeCallback, int iRetryCount)
    {
        if (iRetryCount > 3) yield break;

        UnityWebRequest www = UnityWebRequestTexture.GetTexture(url);
        www.timeout = TimeOut;
        yield return www.SendWebRequest();

        StartCoroutine(CoDownloadProgress(www));

        if (www.isNetworkError || www.isHttpError)
        {
            Debug.LogError(www.error);
            StartCoroutine(RequestTextureFromWeb(url, completeCallback, iRetryCount + 1));
        }
        else
        {
            if (completeCallback != null)
                completeCallback(DownloadHandlerTexture.GetContent(www));
        }
    }


    #endregion //텍스쳐 다운로드


    IEnumerator CoDownloadProgress(UnityWebRequest www)
    {
        while (!www.isDone)
        {
            //print("Loading progress: " + (www.downloadProgress * 100) + "%");

            yield return null;
        }
    }

}