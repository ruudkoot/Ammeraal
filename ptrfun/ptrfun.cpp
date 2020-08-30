// reffun.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int* kleinste(int* x, int* y) {
    return *x < *y ? x : y;
}

int main() {
    int c = 23, d = 15;
    cout << "c = " << c << ", d = " << d << endl;
    cout << "De kleinste hiervan is " << *kleinste(&c, &d) << "." << endl;
    *kleinste(&c, &d) = 0;
    cout << "Van a en b is de kleinste 0 gemaakt." << endl;
    cout << "Er geldt nu dus c = " << c << " en d = " << d << "." << endl;
    return 0;
}
