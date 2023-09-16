#include <iostream>
using namespace std;

void check_age(int age){
    if (age >= 16 && age <= 65){
        cout << "They can work" << endl;
    }else{
        cout << "They are too young or old to work" << endl;
    }
}

int main(){
    check_age(742);
    check_age(32);
    check_age(1);
    return 0;
}

