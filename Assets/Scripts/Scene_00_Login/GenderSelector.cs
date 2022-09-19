using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;



public class GenderSelector : MonoBehaviour
{
    public enum SelectType {
        Man = 0, Woman, Number
    }
    
    public SelectType CurrentGender;

    class GenderSelectorObj {
        internal Button btn;
        internal bool isSelect;

        internal GenderSelectorObj(Button btn) {
            this.btn = btn;
            this.btn.transition = Selectable.Transition.None;
        }
    }

    public Sprite m_spriteSelect;
    public Sprite m_spriteNonSelect;

    List<GenderSelectorObj> m_btnlist = new List<GenderSelectorObj>(2);


    //void Awake()
    //{
    //    var arrbtn = transform.GetComponentsInChildren<Button>();

    //    var btnObjMan = new GenderSelectorObj(arrbtn[(int)SelectType.Man]);
    //    btnObjMan.btn.onClick.AddListener(Callback_ManClick);

    //    m_btnlist.Add(btnObjMan);

    //    var btnObjWoman = new GenderSelectorObj(arrbtn[(int)SelectType.Woman]);
    //    btnObjWoman.btn.onClick.AddListener(Callback_WomanClick);

    //    m_btnlist.Add(btnObjWoman);
    //    CurrentGender = SelectType.Number;
    //}

    public void InitSetDefaultValue()
    {
        var arrbtn = transform.GetComponentsInChildren<Button>();

        var btnObjMan = new GenderSelectorObj(arrbtn[(int)SelectType.Man]);
        btnObjMan.btn.onClick.AddListener(Callback_ManClick);

        m_btnlist.Add(btnObjMan);

        var btnObjWoman = new GenderSelectorObj(arrbtn[(int)SelectType.Woman]);
        btnObjWoman.btn.onClick.AddListener(Callback_WomanClick);

        m_btnlist.Add(btnObjWoman);
        CurrentGender = SelectType.Number;

        m_btnlist[0].btn.image.color = new Color(1, 1, 1);
        m_btnlist[1].btn.image.color = new Color(1, 1, 1);
    }

    void Callback_ManClick()
    {
        SetObjectActivition(SelectType.Man);
    }

    void Callback_WomanClick() {
        SetObjectActivition(SelectType.Woman);
    }

    void SetObjectActivition(SelectType selectType) {
        int idx = (int)selectType;
        CurrentGender = selectType;
        if (true == m_btnlist[idx].isSelect) { return; }

        //켜짐 스프라이트 
        //m_btnlist[idx].btn.image.sprite = m_spriteSelect;
        m_btnlist[idx].btn.image.color = new Color(1.0f, (148.0f / 255.0f), 0);
        m_btnlist[idx].isSelect = true;

        //꺼짐 스프라이트
        idx++;
        idx %= (int)SelectType.Number;
        m_btnlist[idx].btn.image.color = new Color(1, 1, 1);
        m_btnlist[idx].isSelect = false;
    }

}
