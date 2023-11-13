#include <iostream>
#include <string>
#include "Processor.h"

using namespace std;

Processor::Processor() {
    brand = "intel";
    gen = "5th gen";
}

string Processor::to_string() {
    return brand + " " + gen;
}

