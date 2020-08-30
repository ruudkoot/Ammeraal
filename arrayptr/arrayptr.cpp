// arrayptr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double a[4] = { 0.1, 0.5, 0.3, 0.7 }, * p;
    for (p = a; p != a + 4; p++)
        std::cout << *p << std::endl;
    return 0;
}