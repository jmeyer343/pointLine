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
        Point getMidpoint();
        void extendLine(double newlength);

    private:
        Point aVal;
        Point bVal;
        double slope;
        double yIntercept;
        double cleanDecimal(double val);
        double calculateSlope();
        double calculateYIntercept();

};