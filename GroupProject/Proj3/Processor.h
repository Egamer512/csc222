#include <iostream>
#include <string>
#include <bitset>

using namespace std;

struct Processor {
    string brand;
    string gen;

    Processor();
    Processor(string b, string g);
    
    bitset<19> ALU(bitset<8>& bit1, bitset<8>& bit2);
    bool fullAdder(bool bit1, bool bit2, bool& carry);
    string to_string();
};

