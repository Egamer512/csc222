#include <iostream>
#include <string>
#include "Processor.h"

using namespace std;

Processor::Processor() {
    brand = "intel";
    gen = "5th gen";
}

Processor::Processor(string b, string g){
    brand = b;
    gen = g;
    }

string Processor::to_string() {
    return brand + " " + gen;
}

int Processor::ALU()
