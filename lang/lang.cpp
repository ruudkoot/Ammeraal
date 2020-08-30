// lang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <climits>
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

class lang {
public:
    lang(unsigned long u = 0) : hoog(0), laag(u) {}
    inline friend lang operator+ (const lang & x, const lang & y);
    friend ostream& operator<<(ostream& os, const lang& u);
private:
    unsigned long hoog, laag;
};

inline lang operator+(const lang& x, const lang& y) {
    lang s;
    s.laag = x.laag + y.laag;
    s.hoog = x.hoog + y.hoog + (s.laag < x.laag);
    return s;
}

ostream& operator<<(ostream& os, const lang& u) {
    int aantHexPos = 2 * sizeof(unsigned long);
    os << setfill('0') << setw(aantHexPos)
        << hex << u.hoog << " "
        << setw(aantHexPos) << u.laag;
    return os;
}

int main()
{
    lang u = ULONG_MAX, v, w;
    ofstream uitvoer("voorbeeld.txt");
    uitvoer << "De volgende uitvoer is hexadecimaal:\n";
    uitvoer << "u =         " << u << endl;
    v = u + u;
    uitvoer << "v = u + u = " << v << endl;
    w = 1 + v;
    uitvoer << "w = 1 + v = " << w << endl;
    uitvoer << "w + 1 =     " << w + 1 << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
