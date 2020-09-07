// ex8_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fi("a.txt");
    ofstream fo("b.txt");
    char c;
    bool s = false;
    fi >> noskipws;
    while (!fi.eof()) {
        fi >> c;
        if (c == ' ' && s) {
            s = false;
            continue;
        }
        else if (c == ',') {
            fo << c << ' ';
            s = true;
        }
        else {
            fo << c;
            s = false;
        }
    }
    return 0;
}