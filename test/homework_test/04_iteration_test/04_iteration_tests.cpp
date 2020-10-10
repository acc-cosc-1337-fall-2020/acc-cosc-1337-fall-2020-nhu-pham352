#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"
#include<string>
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test function get_gc_content1")
{
	std::string dna = "AGCTATAG";
	double result = get_gc_content(dna);
	REQUIRE(result == .375);
}
TEST_CASE("TEst function get_gc_content2")
{
	std::string dna = "CGCTATAG";
	double result = get_gc_content(dna);
	REQUIRE(result==.50);
}
TEST_CASE("Test function get reverse string function1")
{
	std::string dna = "AGCTATAG";
	std::string result = get_reverse_string(dna);
	REQUIRE(result=="GATATCGA");
}
TEST_CASE("Test function get reverse string function2")
{
	std::string dna = "CGCTATAG";
	std::string result = get_reverse_string(dna);
	REQUIRE(result=="GATATCGC");
}
TEST_CASE("TEst function get dna complement1")
{
	std::string dna = "AAAACCCGGT";
	std::string result = get_dna_complement(dna);
	REQUIRE(result == "ACCGGGTTTT");
}
TEST_CASE("TEst function get dna complement2")
{
	std::string dna = "CCCGGAAAAT";
	std::string result = get_dna_complement(dna);
	REQUIRE(result == "ATTTTCCGGG");
}