using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Test_AccessScrollitem : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.I)) {
            int randIdx = Random.Range(0, ScrollMgr.Instance.GetScrollItemCount());
            WebRequestHandler.Instance.GetTextureFromWebServer(
                "https://d32gkk464bsqbe.cloudfront.net/ipQ0G9u3QgJX1BqzKLVFzd5xZz4=/1000x600/contents/o/85a2b29424be079f7b5805bd79cfb0fc06a2566e.jpeg", 
                (texture) => {
                    var item = ScrollMgr.Instance[randIdx];
                    if (item == null) { return; }
                    item.m_rawimg_thumnail.texture = texture;
                    item.m_textui_period.text = randIdx + " ~ " + randIdx;
            });

        }
    }
}
