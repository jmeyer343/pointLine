#pragma once
#include "Point.h"

using namespace std;

class Line {
    public:
        Line(Point a, Point b);

        Point getPointA();
        Point getPointB();

        double length();
        double getSlope();
        bool isPoint(Point z);

    private:
        Point aVal;
        Point bVal;

        double cleanDecimal(double val);
};