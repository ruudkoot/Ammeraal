// pfun.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

typedef double (*pfuntype)(int);

double somfun(int n, pfuntype f) {
    double s = 0;
    int i;
    for (i = 1; i <= n; i++)
        s += f(i);
    return s;
}

double reciprook(int k) {
    return 1.0 / k;
}

int main() {
    cout << "De som is " << somfun(3, reciprook) << endl;
    return 0;
}