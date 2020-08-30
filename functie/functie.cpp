// functie.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

float fun(float, float, int, int);

int main()
{
    float xx, yy;
    int ii, jj;
    cout << "Geef twee float en twee int waarden: ";
    cin >> xx >> yy >> ii >> jj;
    cout << "Berekende functiewaarde: "
        << fun(xx, yy, ii, jj) << endl;
    return 0;
}

float fun(float x, float y, int i, int j)
{
    int noemer;
    noemer = i - j;
    return noemer == 0 ? 1e20 : (x - y) / noemer;
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
