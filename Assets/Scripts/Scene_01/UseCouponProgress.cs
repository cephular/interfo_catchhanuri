using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ReceiveUseCoupon
{
    public string Result;
    public string Desc;
}

public class UseCouponProgress : MonoBehaviour
{
    public ScrollMgr m_CouponListScrollMgr;
    public int m_Idx;

    public Canvas m_Canvas;
    public TMP_InputField inputField;

    public AppConfig m_AppConfig;

    // Start is called before the first frame update
    void Start()
    {
        gameObject.SetActive(false);
    }

    public void OnActiveSerialNumber()
    {
        gameObject.SetActive(true);
    }

    public void OnDeactiveSerialNumber()
    {
        gameObject.SetActive(false);
    }

    public void OnPushConfirm()
    {
        if (inputField.text.Equals(UnityCommunicator.CouponPassword) == false)
        {
            AlertPopup.Instance.DisplayMessage("Serial Number :", "확인번호가 틀렸습니다.");
            inputField.text = "";
        }
        else
        {
            string sendMessage = UnityCommunicator.Instance.m_userData.token + "?";
            sendMessage += "idx=" + m_Idx + "&" + "cp_contentid=" + UnityCommunicator.FestivalContentId;
            DataTransfer.RequestURL(DataTransfer.DataType.ARTreasure_GetCouponUse, sendMessage, null, Callback_UseCoupon);
        }
    }

    void Callback_UseCoupon(string fullJson)
    {        
        ReceiveUseCoupon afk = JsonUtility.FromJson<ReceiveUseCoupon>(fullJson);
        if(afk != null && afk.Result.ToLower().Equals("true"))
        {
            m_AppConfig.PlaySFXCompleteCouponUse();

            for (int i = 0; i < m_CouponListScrollMgr.transform.childCount; i++)
            {
                ScrollCouponItem sItem = m_CouponListScrollMgr.transform.GetChild(i).GetComponent<ScrollCouponItem>();
                if(sItem != null && sItem.cidx == m_Idx)
                {
                    sItem.SetBlind(true);
                    break;
                }
            }
        }
        else
        {
            AlertPopup.Instance.DisplayMessage("사용 불가", "사용할 수 없는 쿠폰입니다.");
        }

        gameObject.SetActive(false);
        inputField.text = "";
    }
}
