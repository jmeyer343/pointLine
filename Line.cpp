#include "Line.h"

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
