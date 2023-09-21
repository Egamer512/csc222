#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    int largest = 0;
    int count = 0;

    for(int i = 0; i < 20; i++){
        int x;
        cin >> x;
        if(x > largest){
               largest = x;
               count = 0;
               count++;
        }else if(x == largest){
            count++;
        }
    }
    cout << "largest number: " << largest << " count:" << count << endl;        
    return 0;
}

