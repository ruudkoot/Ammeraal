// reffun.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int& kleinste(int& x, int& y) {
    return x < y ? x : y;
}

int main() {
    int a = 23, b = 15;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "De kleinste hiervan is " << kleinste(a, b) << "." << endl;
    kleinste(a, b) = 0;
    cout << "Van a en b is de kleinste 0 gemaakt." << endl;
    cout << "Er geldt nu dus a = " << a << " en b = " << b << "." << endl;
    return 0;
}
