// bitfield.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    struct bv {
        unsigned bhalf : 4, b : 1, c : 1;
        char ch;
    } s;
    s.bhalf = 7;
    cout << s.bhalf << endl;
    cout << &s << endl;
}