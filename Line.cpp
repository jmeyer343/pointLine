#include "Line.h"
#include "cmath"

using namespace std;

Line::Line(Point a, Point b)
{
    aVal = a;
    bVal = b;
    slope = calculateSlope();
    yIntercept = calculateYIntercept();
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
    return slope;
}

bool Line::isPoint(Point z)
{
    double smallX;
    double bigX;

    if (aVal.getX() > bVal.getX())
    {
        bigX = aVal.getX();
        smallX = bVal.getX();
    }
    else if (aVal.getX() < bVal.getX())
    {
        bigX = bVal.getX();
        smallX = aVal.getX();
    }
    else
    {
        throw invalid_argument("Not a valid Line");
    }

    bool reVal = false;
    double newY = slope * z.getX() + yIntercept;
    if (cleanDecimal(newY) == z.getY())
    {
        if (z.getX() >= smallX && z.getX() <= bigX)
        {
            reVal = true;
        }
    }
    return reVal;
}

double Line::calculateSlope()
{
    
    double numerator = 0.0;
    double denominator = 0.0;

    numerator = bVal.getY() - aVal.getY();
    denominator = bVal.getX() - aVal.getX();

    return (numerator/denominator);

}

double Line::calculateYIntercept()
{
    double b = aVal.getY() - (slope*aVal.getX());
    return b;
}

Point Line::getMidpoint()
{
    double midY = (aVal.getY() + bVal.getY())/2;
    double midX = (aVal.getX() + bVal.getX())/2;
    Point midpoint = Point(midX, midY);

    return midpoint;
}