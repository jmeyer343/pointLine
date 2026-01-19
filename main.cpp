#include <iostream>
#define CATCH_CONFIG_NO_POSIX_SIGNALS
#define CATCH_CONFIG_MAIN   
#include "catch.hpp"
#include "Point.cpp"
using namespace std;

//--
TEST_CASE("Constructor Test")  
{ 
	Point point1 = Point(1,1);
	REQUIRE(point1.getX() == 1); 
	REQUIRE(point1.getY() == 1);
}