#include <iostream>
#include <string>

using namespace std;

int main(){
    string suffix = "ack";
    char u = 'u';
    char letter = 'J';
    while (letter < 'Q') {
        if(letter != 'O' || letter != 'Q'){
            cout << letter + suffix << endl;
        }else{
            cout << letter << u << suffix << endl;
        }
        
        letter++;
    }
 return 0;
}

