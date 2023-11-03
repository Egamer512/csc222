#include <iostream>
#include <string>

using namespace std;

struct Processor{

    int core_count;
    int thread_count;
    double clock_speed;
    int process;
    string brand;
    string gen;

    Processor();
    Processor(int cc, int tc, double cs, int p, string b, string g);  
    
    string to_string();
    bool equals();  

}

