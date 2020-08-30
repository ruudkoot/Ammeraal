// convdemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iomanip>
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    istringstream istr("1.2e-3");
    double x;
    istr >> x;
    cout << x << endl;

    double y = 10.3456789;
    ostringstream ostr;
    ostr << fixed << setw(8) << setprecision(3) << y;
    string t = ostr.str();
    cout << "\"" << t << "\"" << endl;
    return 0;
}
