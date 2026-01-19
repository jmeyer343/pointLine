#include "Point.h"

using namespace std;

Point::Point(double x, double y)
{
    xVal = cleanDecimal(x);
    yVal = cleanDecimal(y);
}

double Point::getX()
{
    return xVal;
}
double Point::getY()
{
    return yVal;
}
double Point::cleanDecimal(double pointDbl)
{
    /* string temp = to_string(pointDbl);
    for (int i = 0; i < temp.length(); i++)
    {
        if (temp[i] == '.')
        {
            if (temp[i+2] - '0' >= 5)
            {
                temp[i+1] += 1;
            }
        }
    }*/
   double temp = (pointDbl+.05) *10;
    int tempAsInt = temp;
    temp = tempAsInt / 10.0;
    return temp;
}