#pragma once
#include <iostream>

using namespace std;

class Point{

public:
    Point();
    Point(double x, double y);
    string getPointStr();
    double getX();
    double getY();

private:
    double xVal;
    double yVal;

    double cleanDecimal(double pointDbl);

};

