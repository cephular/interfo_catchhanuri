using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(RectTransform))]
//[RequireComponent(typeof(Image))]
public class ButtonEx : MonoBehaviour, ICanvasRaycastFilter
{
    private float m_Radius;
    //private Sprite m_Sprite;
    private RectTransform m_RectTransform;

    // Start is called before the first frame update
    void Start()
    {
        m_RectTransform = GetComponent<RectTransform>();
        //m_Sprite = GetComponent<Image>().sprite;
        m_Radius = Screen.width * 0.25f * (1.0f - (23.0f / 256.0f));
    }

    public bool IsRaycastLocationValid(Vector2 screenPoint, Camera eventCamera)
    {
        Vector2 pivotToCursorVector;
        RectTransformUtility.ScreenPointToLocalPointInRectangle(
            m_RectTransform, screenPoint, eventCamera, out pivotToCursorVector);

        Vector2 pivotOffsetRatio = m_RectTransform.pivot - new Vector2(0.5f, 0.5f);
        Vector2 pivotOffset = Vector2.Scale(m_RectTransform.rect.size, pivotOffsetRatio);
        Vector2 centerToCursorVector = pivotToCursorVector + pivotOffset;

        return (centerToCursorVector.magnitude < m_Radius);

        //Vector2 local;
        //RectTransformUtility.ScreenPointToLocalPointInRectangle(m_RectTransform, screenPoint, eventCamera, out local);
        //// normalize local coordinates
        //var normalized = new Vector2(
        //    (local.x + m_RectTransform.pivot.x * m_RectTransform.rect.width) / m_RectTransform.rect.width,
        //    (local.y + m_RectTransform.pivot.y * m_RectTransform.rect.height) / m_RectTransform.rect.height);
        //// convert to texture space
        //var rect = m_Sprite.textureRect;
        //var x = Mathf.FloorToInt(rect.x + rect.width * normalized.x);
        //var y = Mathf.FloorToInt(rect.y + rect.height * normalized.y);
        //// destroy component if texture import settings are wrong
        //try
        //{
        //    print(m_Sprite.texture.GetPixel(x, y));
        //    return m_Sprite.texture.GetPixel(x, y).a > 0.5f;
        //}
        //catch (UnityException e)
        //{
        //    Debug.LogError("Mask texture not readable, set your sprite to Texture Type 'Advanced' and check 'Read/Write Enabled'");
        //    Destroy(this);
        //    return false;
        //}
    }
}
