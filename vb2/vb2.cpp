// vb2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    cout << "Geef twee regels tekst: " << endl;
    string s, t;
    getline(cin, s);
    getline(cin, t);
    cout << "Uitvoer in alfabetische volgorde:\n";
    if (s <= t)
        cout << s << endl << t << endl;
    else
        cout << t << endl << s << endl;
    return 0;
}