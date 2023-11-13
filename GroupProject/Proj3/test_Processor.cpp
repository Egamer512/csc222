#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <doctest.h>
#include "Processor.h"
using namespace std;

TEST_CASE("Test the to_string of the struct") {
    Processor intel5;
    CHECK(intel5.to_string() == "intel 5th gen");
}

TEST_CASE("Test the to_string of the struct with constructor ") {
    Processor amd4("AMD", "4th Gen");
    CHECK(amd4.to_string() == "AMD 4th Gen");
}
