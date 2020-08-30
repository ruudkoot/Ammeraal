// new1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a[100];
    for (int i = 0; i < 100; i++)
        a[i] = 10 * i;
    int* p = new(a) int[5];
    for (int j = 0; j < 5; j++)
        cout << p[j] << " "; // intensionally using 'uninitialized' memory
    cout << endl;
    double* pd = new(a + 5) double;
    *pd = 12.34;
    cout << *pd << endl;
    float* pf = new(a + 50) float(5.6f);
    cout << *pf << endl;
    return 0;
}
