#include <iostream>
#include <math.h>
using namespace std;

void power_of_two(){
    int exp = 0;
    while(exp < 17){
        cout << "2^" << exp << "\t"<< pow(2, exp) << endl;
        exp++;
        }
}

int main(){
    power_of_two();
    return 0;

};
