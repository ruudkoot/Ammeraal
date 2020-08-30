// dynarr2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n, * ni;
    float** pp;
    cout << "Geef het aantal regels dat volgt: ";
    cin >> n;
    pp = new float* [n];
    ni = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Geef ni, de lengte van de eerstvolgende regel: ";
        cin >> ni[i];
        pp[i] = new float[ni[i]];
        cout << "Tik " << ni[i] << " getallen in:\n";
        for (int j = 0; j < ni[i]; j++)
            cin >> pp[i][j];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < ni[i]; j++)
            cout << pp[i][j] << "\t";
        cout << endl;
    }
    for (int i = 0; i < n; i++)
        delete[] pp[i];
    delete[] pp;
    return 0;
}