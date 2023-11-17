#include <iostream>
#include <string>
#include <bitset>

using namespace std;

struct Processor {
    string brand;
    string gen;
    bitset<8> mem;


    Processor();
    Processor(string b, string g, string m);
    
         
    string to_string();
    void XOR(bitset<8> b);
    void AND(bitset<8> b);

    void add(bitset<8> b);
};

