// ex5_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<typename T>
void volgorde3(T x, T y, T z) {
    T a[3] = { x, y, z };
    sort(a, a + 3);
    for (T* i = a; i < a + 3; i++)
        cout << *i << endl;
}

int main()
{
    double x = 3.56, y = 7.21, z = 1.41;
    string s = "Jan", t = "Piet", u = "Klaas";
    volgorde3(x, y, z);
    volgorde3(s, t, u);
}