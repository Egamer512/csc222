#include <iostream>
#include <string>
#include <bitset>
#include "Processor.h"

using namespace std;

Processor::Processor() {
    brand = "Intel";
    gen = "i5-5200U";
}

Processor::Processor(string b, string g){
    brand = b;
    gen = g;
    }

string Processor::to_string() {
    return brand + " " + gen;
}

bitset<8> Processor::XOR(bitset<8> byte1, bitset<8> byte2){
    return byte1 ^ byte2;
}  
