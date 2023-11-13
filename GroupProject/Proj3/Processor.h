#include <iostream>
#include <string>

using namespace std;

struct Processor {
    string brand;
    string gen;

    Processor();
    Processor(string b, string g);

    string to_string();
};

