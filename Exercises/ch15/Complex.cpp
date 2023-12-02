#include <iostream>
#include <cmath>
#include <assert.h>

using namespace std;

enum Flag{POLAR};

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
    Complex(double m, double t, Flag){
        mag = m;
        theta = t;
        polar = true;
        calc_cart();
    }
    void calc_cart(){
        assert(polar == true);
        real = mag * cos(theta);
        imag = mag * sin(theta);
    }
    Complex operator * (Complex& c){
        if (polar == false) calc_polar();
        if (c.polar == false) c.calc_polar();
        return Complex(this->mag * c.mag, this->theta + c.theta, POLAR);
    }
    Complex operator / (Complex&c){
        if (polar == false) calc_polar();
        if (c.polar == false) clac_polar();
        return Complex(this->mag * (1/c.mag), this->theta-c.theta, POLAR);
    }
    
};


int main(){
    Complex c2(1,.9);
    cout << c2.get_theta() << endl;
    return 0;

}
