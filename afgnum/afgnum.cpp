// afgnum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct num {
    int i, x;
    num() : i(1), x(2) {}
};

struct num1 : num {
    int k;
    num1() : k(3) {}
};

struct realnum : num {
    int j;
    float x;
    realnum() : j(4), x(5.6f) {}
};

int main() {
    num1 n;
    realnum r;
    cout << "n.i = " << n.i << endl;
    cout << "n.k = " << n.k << endl;
    cout << "n.x = " << n.x << endl;
    cout << "r.i = " << r.i << endl;
    cout << "r.j = " << r.j << endl;
    cout << "r.x = " << r.x << endl;
    cout << "r.num::x = " << r.num::x << endl;
    cout << "sizeof num = " << sizeof num << endl;
    cout << "sizeof num1 = " << sizeof num1 << endl;
    cout << "sizeof realnum = " << sizeof realnum << endl;
    return 0;
}