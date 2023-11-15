#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <doctest.h>
#include "Processor.h"
using namespace std;

TEST_CASE("Test the to_string of the struct") {
    Processor intel5;
    CHECK(intel5.to_string() == "Intel i5-5200U");
}

TEST_CASE("Test the to_string of the struct with constructor ") {
    Processor amd4("AMD", "Ryzen 4600X");
    CHECK(amd4.to_string() == "AMD Ryzen 4600X");
}

TEST_CASE("Test the memeber AND function"){
    Processor intel5;
    bitset<8> b1("10101010");
    bitset<8> b2("01100101");
    bitset<8> b3 = intel5.XOR(b1, b2);
    bitset<8> b4("11001111");
    CHECK(b3 == b4);

}
