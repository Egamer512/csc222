#include <iostream>
#include <cmath>

using namespace std;

class Complex{
    double real, imag;
    double mag, theta;
    bool polar;

    public:
    Complex(){
        real = 0; 
        imag = 0;
        polar = false;
    }
    Complex(double r, double i){
        real = r; 
        imag = i;
        polar = false;
    }
    double get_real(){
        return real;
    }
    double get_imag(){
        return imag;
    }
    void calc_polar(){
        mag = sqrt((real*real) + (imag*imag));
        theta = atan(imag/real);
        polar = true;
    }

    double get_mag(){
        if(polar == false) calc_polar();
        return mag;
    }
    double get_theta(){
        if(polar == false) calc_polar();
        return theta;
    }
    string get_cartesian(){
        return to_string(get_real()) + ", " + to_string(get_imag()) + " i";
    }
    string get_polar(){
        string theta = to_string(get_theta());
        string mag = to_string(get_mag());
        return mag + "e^" + theta + "i";
    }
    Complex operator + (const Complex& c){
        return Complex(real + c.real, imag + c.imag);
    }
    Complex operator - (const Complex& c){
        return Complex(real - c.real, imag - c.imag);
    }
};


int main(){
    Complex c2(1,2);
    Complex c1(3,4);
    Complex dif = c1 - c2;
    cout << dif.get_cartesian()  << endl;
    return 0;

}
