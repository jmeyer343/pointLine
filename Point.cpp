#include "Point.h"

using namespace std;

Point::Point(double x, double y)
{
    xVal = x;
    yVal = y;
}

double Point::getX()
{
    return xVal;
}
double Point::getY()
{
    return yVal;
}