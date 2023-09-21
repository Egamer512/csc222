#include <iostream>
#include <string>

using namespace std;

void reverse(string str){
    string new_str;
    for(int i = str.length()-1; i > -1; i--){
        new_str += str[i];
    }
    cout << new_str << endl;
}


int main(){
    reverse("Hello");
    return 0;
}

