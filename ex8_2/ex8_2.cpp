// ex8_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    long w = 0;
    string s, t;
    ifstream f("a.txt");
    do {
        f >> s;
        if (s.length() > t.length())
            t = s;
        w++;
    } while (f.good());
    cout << "Aantal woorden: " << w << endl;
    cout << "Langste woord: " << t << endl;
}