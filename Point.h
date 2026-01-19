#pragma once
#include <iostream>

using namespace std;

class Point{

public:
    Point(double x, double y);
    string printPointStr();
    double getX();
    double getY();

private:
    double xVal;
    double yVal;

    double cleanDecimal(double pointDbl);
};

