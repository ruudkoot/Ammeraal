// ex6_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void sorteer4r(int& a, int& b, int& c, int& d) {
    int n;
    if (b < a) { n = a; a = b; b = n; }
    if (d < c) { n = c; c = d; d = n; }
    if (c < a) { n = a; a = c; c = n; }
    if (d < b) { n = b; b = d; d = n; }
    if (c < b) { n = b; b = c; c = n; }
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    sorteer4r(a, b, c, d);
    cout << a << " " << b << " " << c << " " << d << endl;
    return 0;
}
