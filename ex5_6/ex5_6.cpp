// ex5_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>
using namespace std;

struct artikel {
    artikel(string o = "", double p = 0.0) : omschrijving(o), prijs(p) {}
    string omschrijving;
    double prijs;
};

int main()
{
    int nummer;
    string omschrijving;
    double prijs;
    map<int, artikel> M;
    while (cin >> nummer >> omschrijving >> prijs, !cin.fail())
        M[nummer] = artikel(omschrijving, prijs);
    cout << M[12345678].omschrijving << "\t" << M[12345678].prijs;
}