// progparm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    cout << "argc    = " << argc << endl;
    for (int i = 0; i < argc; i++)
        cout << "argv[" << i << "] = " << argv[i] << endl;
}
