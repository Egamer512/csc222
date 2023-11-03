#include <iostream>
#include <string>
#include "Processor.h"

using namespace std;

Processor::Processor(){
    core_count = 2;
    thread_count = 4;
    clock_speed = 2.6;
    brand = "intel";
    process = 22;
    gen = "4th gen";
}

Processor::Processor(int cc, int tc, double cs, int p, string b, string g){
    core_count = cc;
    thread_count = tc;
    clock_speed = cs;
    process = p;
    brand = b;
    gen = g;
}

string Processor::to_string(){
    return brand + " " + gen;
}

bool Processor::equals(Processor other_processor) const {
    // this will return true if and only if the core count, process, thread speed, and clock speed are the same.
    return core_count==other_processor.core_count && thread_count==other_processor.thread_count && clock_speed==other_processor.clock_speed && process==other_processor.process;
}



