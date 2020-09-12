#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "types.h"
#include "types.cpp"
#include<string>

TEST_CASE("Verify Test Configuration", "verification") {
{
	REQUIRE(true == true);
}

TESR_CASE("Test multiply_numbers function")
{
	REQUIRE(mutiply_numbers(5*10)==50)
	REQUIRE(mutiply_numbers(5*2)==10)
}