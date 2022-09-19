using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleARCore;
using GoogleARCore.Examples.CloudAnchors;


public class AREngineChangeByPlatform : MonoBehaviour
{
    [Header("ARCore")]


    /// <summary>
    /// The root for ARCore-specific GameObjects in the scene.
    /// </summary>
    public GameObject ARCoreRoot;

  
    [Header("ARKit")]

    /// <summary>
    /// The root for ARKit-specific GameObjects in the scene.
    /// </summary>
    public GameObject ARKitRoot;

    /// <summary>
    /// The first-person camera used to render the AR background texture for ARKit.
    /// </summary>
    public Camera ARKitFirstPersonCamera;

    /// <summary>
    /// A helper object to ARKit functionality.
    /// </summary>
    private ARKitHelper m_ARKit = new ARKitHelper();


    private void Awake()
    {
        // A Name is provided to the Game Object so it can be found by other Scripts
        // instantiated as prefabs in the scene.
        _ResetStatus();
    }

    private void _ResetStatus() {
        // Reset internal status.
        _SetPlatformActive();
    }

    private void _SetPlatformActive() {
        // Sets the corresponding platform active.
        if ((Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.WindowsEditor)) {

            //if (Application.platform != RuntimePlatform.IPhonePlayer) {
            ARCoreRoot.SetActive(true);
            ARKitRoot.SetActive(false);
        }
        else {
            ARCoreRoot.SetActive(false);
            ARKitRoot.SetActive(true);
        }
    }

    public void Update() {
        _UpdateApplicationLifecycle();

        // If the player has not touched the screen then the update is complete.
        Touch touch;
        if (Input.touchCount < 1 || (touch = Input.GetTouch(0)).phase != TouchPhase.Began) {
            return;
        }

#region Touch plane
        TrackableHit arcoreHitResult = new TrackableHit();

        // Raycast against the location the player touched to search for planes.
        if (Application.platform != RuntimePlatform.IPhonePlayer) {
            if (Frame.Raycast(touch.position.x, touch.position.y,
                    TrackableHitFlags.PlaneWithinPolygon, out arcoreHitResult)) {
            }
        }
        else {
            Pose hitPose;
            if (m_ARKit.RaycastPlane(
                ARKitFirstPersonCamera, touch.position.x, touch.position.y, out hitPose)) {
            }
        }
#endregion //Touch plane

#region Create Anchor
        //if (Application.platform != RuntimePlatform.IPhonePlayer) {
        //    m_WorldOriginAnchor =
        //        arcoreHitResult.Trackable.CreateAnchor(arcoreHitResult.Pose);
        //}
        //else {
        //    m_WorldOriginAnchor = m_ARKit.CreateAnchor(m_LastHitPose.Value);
        //}
#endregion //Create Anchor

    }

    private void _UpdateApplicationLifecycle() {
        // Check and update the application lifecycle.

        // Exit the app when the 'back' button is pressed.
        //if (Input.GetKey(KeyCode.Escape)) {
        //    Application.Quit();
        //}

        var sleepTimeout = SleepTimeout.NeverSleep;

#if !UNITY_IOS
            // Only allow the screen to sleep when not tracking.
            if (Session.Status != SessionStatus.Tracking)
            {
                const int lostTrackingSleepTimeout = 15;
                sleepTimeout = lostTrackingSleepTimeout;
            }
#endif

        Screen.sleepTimeout = sleepTimeout;

    }

}
