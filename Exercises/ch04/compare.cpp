#include <iostream>
using namespace std;

void compare(int a, int b){
    if(a > b){
        cout << a << " is greater than " << b << "." << endl;
    }else if (b > a){
        cout << b << " is greater than " << a << "." << endl;
    }else{
        cout << a << " and " << b << " are equal to each other " << endl;
    }
}

int main(){
    int k = 2;
    int j = 4;
    int c = 2;

    compare(k, j);
    compare(k, c);
    return 0;
}


