using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]

public class MapLocation
{
    public double Latitude;
    public double Longitude;

    public MapLocation(double longitude, double latitude)
    {
        Longitude = longitude;
        Latitude = latitude;
    }
}

public class MapEnvelope
{
    private double lon1;
    private double lon2;
    private double lat1;
    private double lat2;

    public MapEnvelope(double lon1, double lat1, double lon2, double lat2)
    {
        this.lon1 = lon1;
        this.lon2 = lon2;
        this.lat1 = lat1;
        this.lat2 = lat2;
    }

    public bool Contains(MapLocation loc)
    {
        double xMin = System.Math.Min(lon1, lon2);
        double xMax = System.Math.Max(lon1, lon2);
        double yMin = System.Math.Min(lat1, lat2);
        double yMax = System.Math.Max(lat1, lat2);

        if ((loc.Longitude >= xMin) &&
            (loc.Longitude <= xMax) &&
            (loc.Latitude >= yMin) &&
            (loc.Latitude <= yMax)) return true;
        else return false;
    }
}