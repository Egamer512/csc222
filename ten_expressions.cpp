#include <iostream>
using namespace std;

int main() {
    int x = 2; int y=6;
    cout << "The sum of " << x << " and " << y << " is " << x+y << ".";
    cout << endl;
    cout << "The difference of " << x << " and " << y << " is ";
    cout  << x-y << "." << endl;
    cout << "The division of " << y << " and " << x << " is " << y/x << ".";
    cout << endl;
    cout << "The multiplication of " << x << " and " << y << " is " << x*y << "." << endl;

    int j = 53; int k = 13;

    cout << "The sum of " << j << " and " << k << " is " << j+k << "." << endl;
    cout << "The difference of " << j << " and " << k << " is " << j-k << "." << endl;
    cout << "The division of " << j << " and " << k << " is " << j/k << "." << endl;
    cout << "The multiplication of " << j << " and " << k << " is " << j*k << "." << endl;

    cout << "The sum of " << j << ", " << k << ", " << x << ", and " << y << " is " << j+k+x+y << "." << endl;
    cout << "The difference of " << j << ", " << k << ", " << x << ", and " << y << " is " << j-k-x-y << "." << endl;

    return 0;
}
