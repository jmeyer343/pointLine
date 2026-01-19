#include <iostream>
#define CATCH_CONFIG_NO_POSIX_SIGNALS
#define CATCH_CONFIG_MAIN   
#include "catch.hpp"
#include "Point.h"
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