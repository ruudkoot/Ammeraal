// ex5_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int ggd(int x, int y) {
    if (y == 0)
        return x;
    else
        return ggd(y, x % y);
}

int main()
{
    vector<int> v;
    int n;
    while (cin >> n, n)
        v.push_back(n);
    vector<int>::iterator i, j;
    for (i = v.begin(); i != v.end(); i++)
        for (j = v.begin(); j != v.end(); j++)
            if (*i < *j && ggd(*i, *j) == 1)
                cout << *i << "\t" << *j << endl;
}