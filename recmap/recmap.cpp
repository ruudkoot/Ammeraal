// recmap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>
using namespace std;

typedef struct {
    string naam; int gjaar;
} persgeg;

int main() {
    map<int, persgeg> M;
    int stamnr = 1937003;
    persgeg x;
    x.naam = "J. Jansen";
    x.gjaar = 1937;
    M[stamnr] = x;
    pair<int, persgeg>P = *M.begin();
    cout << "Stamnummer:   " << P.first << endl;
    cout << "Naam:         " << P.second.naam << endl;
    cout << "Geboortejaar: " << P.second.gjaar << endl;
    return 0;
}
