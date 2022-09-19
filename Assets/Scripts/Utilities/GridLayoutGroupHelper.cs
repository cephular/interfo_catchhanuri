using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GridLayoutGroupHelper : MonoBehaviour
{
    GridLayoutGroup m_grid;

    private void Awake()
    {
        m_grid = GetComponent<GridLayoutGroup>();
    }

    private void Start()
    {
        m_grid.padding = new RectOffset(
            (int)(Screen.width * (35.0f / 1440.0f)),
            (int)(Screen.width * (35.0f / 1440.0f)),
            0, 0
        );
        m_grid.cellSize = new Vector2(Screen.width * (200.0f / 1440.0f), Screen.height * (200.0f / 2560.0f));
        m_grid.spacing = new Vector2(Screen.width * (170.0f / 1440.0f), Screen.height * (40.0f / 2560.0f));
    }
}
