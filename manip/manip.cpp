// manip.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << endl;
    cout << "Links            Rechts        Hexa-" << endl;
    cout << "uitgelijnd   uitgelijnd      decimaal" << endl;
    for (int i = 5; i <= 10; i++) {
        cout << left << dec
            << setw(5) << i << setw(8) << i * i * i
            << right
            << setw(2) << i << setw(8) << i * i * i
            << hex << showbase
            << setw(8) << i << setw(8) << i * i * i
            << endl;
    }
    return 0;
}
