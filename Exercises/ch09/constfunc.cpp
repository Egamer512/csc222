#include <iostream>
using namespace std;

struct Rectangle {

    double height, width;
}

void do_something(const Rectangle& e){
    e.height += 50;
}

int main(){

    Rectangle rect = {50.0, 100.0};
    do_something(rect);
    return 0;
}
