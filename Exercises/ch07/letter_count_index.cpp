#include <iostream>
#include <string>

using namespace std;

void find_length(string word, char letter){
    int count = 0;
    int prev_index;
    for(int i = 0; i < word.length(); i++){
        int index = word.find(letter, i);
        if(index > -1 && index != prev_index){
            count++;
            prev_index = index;
        }
    }
    cout << count << endl;
}

int main(){
    find_length("Malcom Epstein", 'M');
    return 0;
}

