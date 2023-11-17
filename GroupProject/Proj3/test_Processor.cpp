#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <doctest.h>
#include "Processor.h"
using namespace std;

TEST_CASE("Test the to_string of the struct") {
    Processor intel5;
    CHECK(intel5.to_string() == "Intel i5-5200U with 10101010 bits");
}

TEST_CASE("Test the to_string of the struct with constructor ") {
    Processor amd4("AMD", "Ryzen 4600X", "11001100");
    CHECK(amd4.to_string() == "AMD Ryzen 4600X with 11001100 bits");
}

TEST_CASE("Test the XOR function"){
    Processor intel5;
    intel5.XOR(bitset<8>("11101001"));
    CHECK(intel5.to_string() == "Intel i5-5200U with 01000101 bits");
}
