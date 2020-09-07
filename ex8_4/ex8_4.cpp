// ex8_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fa("a.txt");
    ifstream fb("b.txt");
    ofstream fc("c.txt");
    int a, b;
    fa >> a; cout << "A: " << a << endl;
    fb >> b; cout << "B: " << b << endl;
    if (b < a) {
        cout << "pre-swap" << endl;
        swap(a, b);
        swap(fa, fb);
    }
    do {
        while (a <= b && !fa.eof()) {
            fc << a << endl; cout << "<a: " << a << endl;
            fa >> a; cout << "A: " << a << endl;
        }
        cout << "swap" << endl;
        swap(fa, fb);
        swap(a, b);
    } while (!fa.eof());
    cout << "tail" << endl;
    do {
        fc << b << endl; cout << "<b: " << b << endl;
        fb >> b; cout << "B: " << b << endl;
    } while (!fb.eof());
    return 0;
}
