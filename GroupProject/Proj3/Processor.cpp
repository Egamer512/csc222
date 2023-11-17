#include <iostream>
#include <string>
#include <bitset>
#include "Processor.h"

using namespace std;

Processor::Processor() {
    brand = "Intel";
    gen = "i5-5200U";
    mem = bitset<8>("10101010");
}

Processor::Processor(string b, string g, string m){
    brand = b;
    gen = g;
    mem = bitset<8>(m);
    }

string Processor::to_string() {
    return brand + " " + gen + " with " + mem.to_string()  + " bits";
}

void Processor::XOR(bitset<8> b){
    mem = mem ^ b;
}
void Processor::AND(bitset<8> b){
    mem = mem & b;
}

void add(bitset<8> b){
    bitset<8> added_mem;
    bool carry = false;
    for(int i = 0; i < 8; i++){
        added_mem = mem ^ b ^ carry;
        carry = mem[i] & b[i] | mem[i] ^ b[i] & carry;
    }
    // if there is an overflow --> too bad i guess
    if(carry){
        mem = bitset<8>();
    }
}

