// openclos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream ff;
    string s;
    ff.open("aa", ios::in);
    ff >> s;
    cout << ff.fail() << endl;
    cout << s << endl;
    s = "xx";
    ff.close();
    ff.open("aaa", ios::in | ios::ate);
    ff >> s;
    cout << ff.fail() << endl;
    cout << s << endl;
    return 0;
}