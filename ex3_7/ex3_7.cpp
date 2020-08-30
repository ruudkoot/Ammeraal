// ex3_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int f[16] = { 0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15 };
    int n;
    cin >> hex >> n;
    n = (n & ~0xFF) | (f[n & 0xF] << 4) | (f[(n >> 4) & 0xF]);
    cout << hex << n;
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
