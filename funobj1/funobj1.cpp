// funobj1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct sq {
    int operator()(int x)const { return x * x; }
};

int main()
{
    sq my_sq = sq();
    cout << "5 * 5 = " << sq().operator()(5) << endl;
    cout << "5 * 5 = " << sq()(5) << endl;
    cout << "5 * 5 = " << my_sq.operator()(5) << endl;
    cout << "5 * 5 = " << my_sq(5) << endl;
    return 0;
}