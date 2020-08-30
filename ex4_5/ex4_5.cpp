// ex4_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

unsigned int datumcode(int jaar, int maand, int dag) {
    return (jaar << 9) | (maand << 5) | dag;
}

int main()
{
    int d = datumcode(86, 1, 6);
    cout << d << endl;
    cout << (d >> 9) << endl;
    cout << ((d >> 5) & 0xF) << endl;
    cout << (d & 0x1F) << endl;
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
