// fobjsort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
using namespace std;

class fobjGroter {
public:
    bool operator()(int x, int y) {
        return x > y;
    }
};

int fGroter(int x, int y) {
    return x > y;
}

int main()
{
    int a[4] = { 23,15,80,10 };
    int b[4] = { 23,15,80,10 };
    sort(a, a + 4, fobjGroter());
    sort(b, b + 4, fGroter);
    for (int i = 0; i < 4; i++)
        cout << a[i] << " ";
    cout << endl;
    for (int i = 0; i < 4; i++)
        cout << b[i] << " ";
    cout << endl;
    return 0;
}