#include "Line.h"
#include "cmath"

using namespace std;

Line::Line(Point a, Point b)
{
    aVal = a;
    bVal = b;
}

Point Line:: getPointA()
{
    return aVal;
}

Point Line:: getPointB()
{
    return bVal;
}

double Line:: length()
{
    double retVal = sqrt(pow(aVal.getX() - bVal.getX(), 2.0) + pow(aVal.getY() - bVal.getY(), 2.0));
    retVal = cleanDecimal(retVal);
    return retVal;
}

double Line::cleanDecimal(double val) //sets double to a max of one decimal space
{
   double temp = (val+.05) *10;
    int tempAsInt = temp;
    temp = tempAsInt / 10.0;
    return temp;
}

double Line::getSlope()
{
    double numerator = 0.0;
    double denominator = 0.0;

    numerator = bVal.getY() - aVal.getY();
    denominator = bVal.getX() - aVal.getX();

    return (numerator/denominator);
}

bool Line::isPoint(Point z)
{
    
}