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
   double temp = (pointDbl+.05) *10;
    int tempAsInt = temp;
    temp = tempAsInt / 10.0;
    return temp;
}
string Point::getPointStr()
{
    string retVal = "X: " + to_string(xVal);
    retVal += retVal.substr(0, retVal.size()-5);
    retVal += ", Y: " + to_string(yVal);
    retVal += retVal.substr(0, retVal.size()-5);
    
    //string retVal = "X: " + to_string(xVal) + ", Y: " + to_string(yVal);

    return retVal;
}