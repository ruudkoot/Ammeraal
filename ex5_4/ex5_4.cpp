// ex5_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> M;
    string s;
    while (cin >> s, s != "$")
        M[s]++;
    map<string, int>::iterator i;
    for (i = M.begin(); i != M.end(); i++)
        cout << i->first << "\t" << i->second << endl;
}
