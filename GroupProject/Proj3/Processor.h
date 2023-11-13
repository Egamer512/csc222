#include <iostream>
#include <string>

using namespace std;

struct Processor {
    string brand;
    string gen;

    Processor();
    
    string to_string();
};

