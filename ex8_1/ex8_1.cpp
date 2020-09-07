// ex8_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string s, t;
    ifstream f("a.txt");
    do {
        getline(f, t);
        if (t.length() > s.length())
            s = t;
    } while (!f.fail());
    cout << s << endl;
    return 0;
}
