// update.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void display(fstream& f) {
    long x;
    cout << "Hier volgt de file-inhoud:" << endl;
    f.seekg(0);
    for (;;) {
        f.read((char*)(&x), sizeof(x));
        if (f.eof()) break;
        cout << x << endl;
    }
    f.clear();
}

int main() {
    long n, i, x, incr;
    fstream f("data", ios::in | ios::out | ios::binary | ios::trunc);
    cout << "Demonstratie van het bijwerken van een binaire file." << endl;
    cout << "Aantal in de file te schrijven getallen: ";
    cin >> n;
    for (i = 0; i < n; i++) {
        x = 10 * i;
        f.write((char*)(&x), sizeof(x));
    }
    display(f);
    do {
        cout << "Typ een niet-negatief geheel getal kleiner dan " << n << ": ";
        cin >> i;
    } while (i < 0 || i >= n);
    f.seekg(i * sizeof(i), ios::beg);
    f.read((char*)(&x), sizeof(x));
    cout << "Op die positie staat getal " << x << endl;
    cout << "Dit getal verhogen met: ";
    cin >> incr;
    x += incr;
    f.seekp(i * sizeof(i), ios::beg);
    f.write((char*)(&x), sizeof(x));
    display(f);
    return 0;
}
