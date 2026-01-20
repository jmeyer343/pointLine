#include <iostream>
#define CATCH_CONFIG_NO_POSIX_SIGNALS
#define CATCH_CONFIG_MAIN   
#include "catch.hpp"
#include "Point.h"
#include "Line.h"
using namespace std;

//--
TEST_CASE("Constructor Test")  
{ 
	Point point1 = Point(1,1);
	REQUIRE(point1.getX() == 1); 
	REQUIRE(point1.getY() == 1);
}
TEST_CASE("CleanDecimal Test")
{
	Point point1 = Point(1.11, 1.11);
	REQUIRE(point1.getX() == 1.1);
	REQUIRE(point1.getY() == 1.1);

	Point point2 = Point(1.567, 17.890);
	REQUIRE(point2.getX() == 1.6);
	REQUIRE(point2.getY() == 17.9);
}
TEST_CASE("GetPointStr Test")
{
	Point point1 = Point(1.23, 4.563);
	REQUIRE(point1.getPointStr() == "X: 1.2, Y: 4.6");
}
TEST_CASE("Line Constructor")
{
	Point a = Point(1.11, 2.22);
	Point b = Point(3.33, 4.44);
	Line line1 = Line(a, b);
	REQUIRE(line1.getPointA().getX() == a.getX());
	REQUIRE(line1.getPointB().getY() == b.getY());
}
TEST_CASE("Line Length")
{
	Point a = Point(2, 2);
	Point b = Point(4, 4);
	Line line1 = Line(a, b);
	REQUIRE(line1.length() == 2.8);
}
TEST_CASE("Slope")
{
	Point a = Point(2, 4);
	Point b = Point(4, 3);
	Line line1 = Line(a, b);
	REQUIRE(line1.getSlope() == -0.5);
}
TEST_CASE("Is Point On Line")
{
	Point a = Point(2, 2);
	Point b = Point(4, 4);
	Point z = Point(3, 3);
	Line line1 = Line(a, b);
	REQUIRE(line1.isPoint(z));

	Point a2 = Point(2, 2);
	Point b2 = Point(4, 4);
	Point z2 = Point(8, 17.3);
	Line line2 = Line(a2, b2);
	REQUIRE(!line2.isPoint(z2));

	Point a3 = Point(2, 2);
	Point b3 = Point(4, 4);
	Point z3 = Point(6, 6);
	Line line3 = Line(a3, b3);
	REQUIRE(!line3.isPoint(z3));
}
TEST_CASE("Midpoint Test")
{
	Point a = Point(2, 2);
	Point b = Point(4, 4);
	Point z = Point(3, 3);
	Line line1 = Line(a, b);
	REQUIRE(line1.getMidpoint().getX() == z.getX());
	REQUIRE(line1.getMidpoint().getY() == z.getY());
}
TEST_CASE("Extend Line")
{
	Point a = Point(2, 2);
	Point b = Point(4, 4);
	Line line1 = Line(a, b);
	line1.extendLine(2.0);
	REQUIRE(line1.length() == 6.8);
}