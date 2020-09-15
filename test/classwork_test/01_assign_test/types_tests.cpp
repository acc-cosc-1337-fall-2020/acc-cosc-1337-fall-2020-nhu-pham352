#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "types.h"

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("Test multiply_numbers function")
{
	REQUIRE(mutiply_numbers(10)==50);
	REQUIRE(mutiply_numbers(2)==10);
}