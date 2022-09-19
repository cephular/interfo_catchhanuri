using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Capture : MonoBehaviour
{
    public Camera m_camera;
    Texture2D m_tex2D_screenShot;


    public void OnScreenCapture_()
    {
        RenderTexture rt = new RenderTexture(Screen.width, Screen.height, 24);
        m_camera.targetTexture = rt;
        m_camera.Render();
        RenderTexture.active = rt;

        m_tex2D_screenShot = new Texture2D(Screen.width, Screen.height, TextureFormat.RGBAFloat, false);
        m_tex2D_screenShot.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0);
        m_tex2D_screenShot.Apply();

        m_camera.targetTexture = null;
        RenderTexture.active = null; // added to avoid errors

        Destroy(rt);


        CaptureToDisk();

    }
    void CaptureToDisk()
    {

#if UNITY_EDITOR
        Debug.Log("CaptureTodisk() enter");
        return;
#endif

#if UNITY_ANDROID
        Util_Func._ShowAndroidToastMessage("저장 되었습니다.");
#endif

        AndroidJavaClass jcUnityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        Debug.Log("jcUnityPlayer: " + jcUnityPlayer);
        AndroidJavaObject joActivity = jcUnityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
        Debug.Log("joActivity: " + joActivity);
        AndroidJavaObject joContext = joActivity.Call<AndroidJavaObject>("getApplicationContext");
        Debug.Log("joContext: " + joContext);
        AndroidJavaClass jcMediaScannerConnection = new AndroidJavaClass("android.media.MediaScannerConnection");
        Debug.Log("jcMediaScannerConnection: " + jcMediaScannerConnection);
        AndroidJavaClass jcEnvironment = new AndroidJavaClass("android.os.Environment");
        Debug.Log("jcEnvironment: " + jcEnvironment);
        AndroidJavaObject joExDir = jcEnvironment.CallStatic<AndroidJavaObject>("getExternalStorageDirectory");
        Debug.Log("joExDir: " + joExDir);
        //string path = joExDir.Call<string>("toString") + "/DCIM/Camera/";
        string path = joExDir.Call<string>("toString") + "/DCIM/ARShinju";

        if (!System.IO.Directory.Exists(path)) { System.IO.Directory.CreateDirectory(path); }

        string filePath = ScreenShotName(path, Screen.width, Screen.height);
        byte[] bytes = m_tex2D_screenShot.EncodeToJPG();
        System.IO.File.WriteAllBytes(filePath, bytes);

        jcMediaScannerConnection.CallStatic("scanFile", joContext, new string[] { filePath }, new string[] { "image/png" }, null);


        UnityCommunicator.Instance.CallAndroid_ReviewActivity(filePath);
    }
    public static string ScreenShotName(string dir, int width, int height)
    {
        return string.Format("{0}/screen_{1}x{2}_{3}.jpg",
                             //Application.dataPath,
                             dir,
                             width,
                             height,
                             System.DateTime.Now.ToString("yyyy-MM-dd_HH-mm-ss"));
    }
}
