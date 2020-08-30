// lifo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int aantal = 20, reglen = 5;
    int i, a[aantal];
    cout << "Geef " << aantal << " gehele getallen:\n";
    for (i = 0; i < aantal; i++) cin >> a[i];
    cout << "\nDezelfde getallenrij in omgekeerde volgorde:\n";
    for (i = 0; i < aantal; i++)
        cout << setw(10) << a[aantal - i - 1]
        << (i % reglen == reglen - 1 ? '\n' : ' ');
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
