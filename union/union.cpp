// union.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main() {
    union intflo { int i; float x; } u;
    u.i = 123;
    cout << u.i << " " << u.x << endl;
    u.x = 98.7;
    cout << u.i << " " << u.x << endl;
    return 0;
}