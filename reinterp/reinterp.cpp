// reinterp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    long n = 123, * pLong = &n, * pLresult;
    float* pFloat;
    pFloat = reinterpret_cast<float*>(pLong);
    cout << *pFloat << endl;
    pLresult = reinterpret_cast<long*>(pFloat);
    cout << *pLresult << endl;

    int i = 100;
    const int* p = &i;
    int* q;
    // q = (int*)(p);
    q = const_cast<int*>(p);
    *q = 200;
    cout << i << endl;

    return 0;
}