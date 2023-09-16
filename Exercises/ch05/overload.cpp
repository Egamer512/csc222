#include <iostream>

using namespace std;

void over_loaded_function(int a){
    cout << a << endl;
}
void over_loaded_function(double a){
    cout << a << endl;
}
void over_loaded_function(char a){
    cout << a << endl;
}
void over_loaded_function(bool a){
    cout << a << endl;
}
void over_loaded_function(int a, int b){
    cout << (a + b) << endl;
}

int main()
{
    over_loaded_function(5, 2);
    over_loaded_function(5);
    over_loaded_function('a');
    over_loaded_function(5.0);
    over_loaded_function(true);
    

    return 0;
}

