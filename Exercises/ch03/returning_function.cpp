#include <iostream>
#include <math.h>
using namespace std;

int raise_power(double x, double y){
    int z = int(pow(x, y));

    return z;
}

int main(){
    int e = raise_power(15.0, 2.0);
    cout << e << endl;
    return 0;
}
