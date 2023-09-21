#include <iostream>
#include <string>

using namespace std;

void find_letter_index(string word, char letter){
    int count = 0;
    int prev_index = 0;
    for(int i = 0; i < word.length(); i++){
       int index =  word.find(letter, i);
       if(index > 0 && prev_index != index){
           count++;
           prev_index = index;
       }
    }
    cout << count << endl;
}

int main(){
    find_letter_index("Hello", 'l');
    return 0;
}

