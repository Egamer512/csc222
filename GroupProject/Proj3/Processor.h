#include <iostream>
#include <string>
#include <bitset>

using namespace std;

struct Processor {
    string brand;
    string gen;

    Processor();
    Processor(string b, string g);
    
    bitset<8> XOR(bitset<8> byte1, bitset<8> byte2);
    string to_string();
};

