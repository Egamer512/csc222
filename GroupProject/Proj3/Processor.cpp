#include <iostream>
#include <string>
#include "Processor.h"

using namespace std;

Processor::Processor(int cc, int tc, int cs, string b){
    core_count = cc;
    thread_count = tc;
    clock_speed = cs;
    brand = b;
}


