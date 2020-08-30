// math.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    cout << "cos(" << x << ")=" << cos(x) << endl;
    cout << "sin(" << x << ")=" << sin(x) << endl;
    cout << "tan(" << x << ")=" << tan(x) << endl;
    cout << "exp(" << x << ")=" << exp(x) << endl;
    cout << "log(" << x << ")=" << log(x) << endl;
    cout << "log10(" << x << ")=" << log10(x) << endl;
    cout << "pow(" << x << "," << y << ")=" << pow(x, y) << endl;
    cout << "sqrt(" << x << ")=" << sqrt(x) << endl;
    cout << "floor(" << x << ")=" << floor(x) << endl;
    cout << "ceil(" << x << ")=" << ceil(x) << endl;
    cout << "fabs(" << x << ")=" << fabs(x) << endl;
    cout << "acos(" << x << ")=" << acos(x) << endl;
    cout << "asin(" << x << ")=" << asin(x) << endl;
    cout << "atan(" << x << ")=" << atan(x) << endl;
    cout << "atan2(" << x << ","<<y<<")=" << atan2(x,y) << endl;
    cout << "cosh(" << x << ")=" << cosh(x) << endl;
    cout << "sinh(" << x << ")=" << sinh(x) << endl;
    cout << "tanh(" << x << ")=" << tanh(x) << endl;
    return 0;
}