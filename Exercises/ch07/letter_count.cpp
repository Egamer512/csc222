#include <iostream>
#include <string>

using namespace std;
void count_letters(string str, char letter){
    int count = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == letter){
            count++;
        }
    }
    cout << count << endl;
}
int main(){
    count_letters("hello", 'l');
    return 0;
}

