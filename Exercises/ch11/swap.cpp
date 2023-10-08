#include <iostream>

using namespace std;

void wont_swap(char a, char b)
{
    cout << "a: " << a << "  b: " << b << endl;
    cout << "address of a: " << long(&a) << endl;
    cout << "address of b: " << long(&b) << endl;
    char temp = a;
    a = b;
    b = temp;
    cout << "a: " << a << "  b: " << b << endl;
}

void will_swap(char& a, char& b)
{
    cout << "a: " << a << "  b: " << b << endl;
    cout << "address of a: " << long(&a) << endl;
    cout << "address of b: " << long(&b) << endl;
    char temp = a;
    a = b;
    b = temp;
    cout << "a: " << a << "  b: " << b << endl;
}


void will_swap_with_pointers(char* a, char* b)
{
    cout << "a: " << *a << "  b: " << *b << endl;
    cout << "address of a: " << long(a) << endl;
    cout << "address of b: " << long(b) << endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "a: " << *a << "  b: " << *b << endl;
}


int main(){
    
    char x = 'x';
    char y = 'y';

    cout << "x: " << x << "  y: " << y << endl;
    cout << "address x: " << long(&x) << endl;
    cout << "address y: " << long(&y) << endl;
    cout << "wont_swap" << endl;
    wont_swap(x, y);
    cout << "x: " << x << "  y: " << y << endl;
    cout << "will_swap" << endl;
    will_swap(x, y);
    cout << "x: " << x << "  y: " << y << endl;
     
    char w = 'w';
    char z = 'z';

    cout << " will_swap_with_pointer" << endl;
    will_swap_with_pointers(&w, &z);
    
    return 0;   

}
