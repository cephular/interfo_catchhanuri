using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadingHelper : MonoBehaviour
{
    public float MaxLoadingTime = 2.0f;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(LoadScene());
    }

    IEnumerator LoadScene()
    {
        yield return null;

        AsyncOperation op = null;

        if (PlayerPrefs.HasKey("kfLoginToken"))
        {
            string m_tmpToken = PlayerPrefs.GetString("kfLoginToken");
            if (m_tmpToken.Length > 0)
            {
                UnityCommunicator.Instance.m_userData.token = m_tmpToken;
                op = SceneManager.LoadSceneAsync("Scene_01_AR");
            }
        }
        else
        {
            op = SceneManager.LoadSceneAsync("Scene_00_Login");
        }
        op.allowSceneActivation = false;

        float timer = 0.0f;
        //while(!op.isDone)
        while(true)
        {
            yield return null;

            timer += Time.deltaTime;

            if (timer >= MaxLoadingTime)
            {
                if (op.isDone || op.progress >= 0.9f)
                {
                    op.allowSceneActivation = true;
                    break;
                }
            }
        }
    }
}
