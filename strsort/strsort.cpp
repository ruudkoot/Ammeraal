// strsort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "PQACDREB";
    cout << "Ongesorteerd: " << s << endl;
    sort(s.begin(), s.end());
    cout << "Gesorteerd:   " << s << endl;
    return 0;
}