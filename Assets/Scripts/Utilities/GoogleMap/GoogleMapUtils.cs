using System;

public class GoogleMapUtils
{
    static double GOOGLE_OFFSET = 268435456d;
    static double GOOGLE_OFFSET_RADIUS = 85445659.44705395d;  //GOOGLEOFFSET / Mathf.PI;
    static double MATHPI_180 = Math.PI / 180d;

    static private double preLonToX1 = GOOGLE_OFFSET_RADIUS * (Math.PI / 180d);

    public static int LonToX(double lon)
    {
        return (int)Math.Round(GOOGLE_OFFSET + preLonToX1 * lon);
    }

    public static int LatToY(double lat)
    {
        return (int)Math.Round(GOOGLE_OFFSET - GOOGLE_OFFSET_RADIUS * Math.Log((1d + Math.Sin(lat * MATHPI_180)) / (1d - Math.Sin(lat * MATHPI_180))) / 2f);
    }

    public static double XToLon(double x)
    {
        return ((Math.Round(x) - GOOGLE_OFFSET) / GOOGLE_OFFSET_RADIUS) * 180d / Math.PI;
    }

    public static double YToLat(double y)
    {
        return (Math.PI / 2d - 2d * Math.Atan(Math.Exp((Math.Round(y) - GOOGLE_OFFSET) / GOOGLE_OFFSET_RADIUS))) * 180d / Math.PI;
    }

    public static double adjustLonByPixels(double lon, int delta, int zoom)
    {
        return XToLon(LonToX(lon) + (delta << (21 - zoom)));
    }

    public static double adjustLatByPixels(double lat, int delta, int zoom)
    {
        return YToLat(LatToY(lat) + (delta << (21 - zoom)));
    }

    public static float CalculateScaleX(double lat, int tileSizePixels, int tileSizeUnits, int zoom)
    {
        double offset = adjustLatByPixels(lat, tileSizePixels, zoom);
        int y0 = LatToY(lat); int y1 = LatToY(offset);
        int rng = y1 - y0;
        return (float)tileSizeUnits / (float)rng;
    }

    public static float CalculateScaleY(double lon, int tileSizePixels, int tileSizeUnits, int zoom)
    {
        double offset = adjustLonByPixels(lon, tileSizePixels, zoom);
        int x0 = LonToX(lon); int x1 = LonToX(offset);
        int rng = x1 - x0;
        return (float)tileSizeUnits / (float)rng;
    }
}
