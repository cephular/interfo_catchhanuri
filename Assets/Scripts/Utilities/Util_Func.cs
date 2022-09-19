using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;


[System.Serializable]
public class VectorD3
{
    public double x, y, z;

    public VectorD3() { x = 0; y = 0; z = 0; }
    public VectorD3(double x, double y, double z) { this.x = x; this.y = y; this.z = z; }

    public static VectorD3 zero
    {
        get { return new VectorD3(); }
    }
}

[System.Serializable]
public class VectorD2
{
    public double x, y;

    public VectorD2() { x = 0; y = 0; }
    public VectorD2(double x, double y) { this.x = x; this.y = y; }

    public static VectorD2 zero
    {
        get { return new VectorD2(); }
    }
}

public class Util_Func : MonoBehaviour
{
    public static void DatetimeParse(ref System.DateTime refvalue, string str, System.DateTime def)
    {
        System.DateTime ret;
        if (!System.DateTime.TryParse(str, out ret))
        {
            ret = def;
        }
        refvalue = ret;
    }

    public static void TimespanParse(ref System.TimeSpan refvalue, string str, System.TimeSpan def)
    {
        System.TimeSpan ret;
        if (!System.TimeSpan.TryParse(str, out ret))
        {
            ret = def;
        }
        refvalue = ret;
    }

    public static void IntParse(ref int refvalue, string str, int def = 0)
    {
        int ret;
        if (!int.TryParse(str, out ret))
        {
            ret = def;
        }
        refvalue = ret;
    }

    public static int IntParse(string str, int def = 0)
    {
        int ret;
        if (!int.TryParse(str, out ret))
        {
            ret = def;
        }

        return ret;
    }

    public static void _ShowAndroidToastMessage(string message)
    {
        AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        AndroidJavaObject unityActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");

        if (unityActivity != null)
        {
            AndroidJavaClass toastClass = new AndroidJavaClass("android.widget.Toast");
            unityActivity.Call("runOnUiThread", new AndroidJavaRunnable(() => {
                AndroidJavaObject toastObject = toastClass.CallStatic<AndroidJavaObject>("makeText", unityActivity,
                    message, 0);
                toastObject.Call("show");
            }));
        }
    }
}
