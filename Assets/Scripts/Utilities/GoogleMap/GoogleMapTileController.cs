using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoogleMapTileController : MonoBehaviour
{
    GoogleMapTile[] tiles;

    private void Awake()
    {
        int cCount = 0;
        for (int i = 0; i < gameObject.transform.childCount; i++)
        {
            GoogleMapTile c = gameObject.transform.GetChild(i).GetComponent<GoogleMapTile>();
            if (c != null) cCount += 1;
        }

        tiles = new GoogleMapTile[cCount];
        for (int i = 0; i < gameObject.transform.childCount; i++)
        {
            GoogleMapTile c = gameObject.transform.GetChild(i).GetComponent<GoogleMapTile>();
            if (c == null) continue;

            tiles[i] = gameObject.transform.GetChild(i).GetComponent<GoogleMapTile>();
        }
    }

    public void RefreshMapTile(double _Lat, double _Lon)
    {
        for (int i = 0; i < tiles.Length; i++)
        {
            if (tiles[i].gameObject.activeSelf == false) continue;
            tiles[i].RefreshMapTile(_Lat, _Lon);
        }
    }

    public void SetLoadedValue(bool val)
    {
        for (int i = 0; i < tiles.Length; i++)
            tiles[i].bLoaded = val;
    }

    public bool IsAllLoaded()
    {
        for (int i = 0; i < tiles.Length; i++)
        {
            if (tiles[i].gameObject.activeSelf == false) continue;
            if (tiles[i].bLoaded == false || tiles[i].bLoading == true)
                return false;
        }

        return true;
    }

    public bool IsOneLoaded(int idx = -1)
    {
        if (idx == -1)
        {
            for (int i = 0; i < tiles.Length; i++)
            {
                if (tiles[i].gameObject.activeSelf == false) continue;
                if (tiles[i].bLoaded == true)
                {
                    return true;
                }
            }

            return false;
        }
        else
        {
            if (idx >= tiles.Length) { return false; }

            return tiles[idx].bLoaded;
        }
    }
}
