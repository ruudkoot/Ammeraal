// vkvcompl.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <complex>
using namespace std;

typedef complex<double> cmplex;

class noemerNul {};

class vkvcomplex {
public:
    vkvcomplex(cmplex aa, cmplex bb, cmplex cc) {
        a = aa; b = bb; c = cc;
        cmplex D = b * b - 4.0 * a * c;
        cmplex wD = sqrt(D);
        if (a == 0.0) throw noemerNul();
        x1 = (-b + wD) / (2.0 * a);
        x2 = (-b - wD) / (2.0 * a);
    }
    cmplex wortel1()const {
        return x1;
    }
    cmplex wortel2()const {
        return x2;
    }
private:
    cmplex a, b, c, x1, x2;
};

int main() {
    cmplex a, b, c;
    cout << "Typ a, b en c: ";
    cin >> a >> b >> c;
    try {
        vkvcomplex v(a, b, c);
        cout << "Wortels: " << v.wortel1() << " " << v.wortel2() << endl;
    }
    catch (noemerNul) {
        cout << "Coefficient van x * x is nul." << endl;
    }
    return 0;
}