// modules.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

extern int n;
void f(int i), g();

int main()
{
    cout << "Vooraf: n = " << n << " (module 1)" << endl;
    f(8); g();
    cout << n << endl;
    return 0;
}