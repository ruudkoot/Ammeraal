// kopieer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;


int main() {
    char ch;
    int n = 0;
    ifstream ff("aa.txt");
    if (!ff) {
        cout << "Kan file 'aa.txt' niet openen voor invoer." << endl;
        return 1;
    }
    ofstream gg("bb.txt");
    if (!gg) {
        cout << "Kan file 'bb.txt' niet openen voor uitboer." << endl;
        return 1;
    }
    while (ff.get(ch)) {
        gg.put(ch);
        n++;
    }
    cout << n << " karakters gekopieerd." << endl;
    return 0;
}