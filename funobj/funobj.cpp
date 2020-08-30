// funobj.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class K {
public:
    double operator()(int x) {
        return 1.0 / x;
    }
};

template <class T>
double somfun(int n, T f) {
    double s = 0;
    int i;
    for (i = 1; i <= n; i++)
        s += f(i);
    return s;
}

int main()
{
    cout << "De som is " << somfun(1000000, K()) << endl;
    return 0;
}
