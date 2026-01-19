#include "Point.h"

using namespace std;

Point::Point(double x, double y) //initializes private members, sets double to a max of one decimal space
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

double Point::cleanDecimal(double pointDbl) //sets double to a max of one decimal space
{
   double temp = (pointDbl+.05) *10;
    int tempAsInt = temp;
    temp = tempAsInt / 10.0;
    return temp;
}

string Point::getPointStr() //returns string of point location
{
    string retVal = "X: " + to_string(xVal);
    retVal = retVal.substr(0, retVal.size()-5);
    retVal += ", Y: " + to_string(yVal);
    retVal = retVal.substr(0, retVal.size()-5);
    return retVal;
}