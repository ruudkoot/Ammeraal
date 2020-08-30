// globnaam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int x = 45;

int main()
{
    double x = 1.2;
    cout << x << endl;
    cout << ::x << endl;
    return 0;
}
