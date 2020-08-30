// vecvec.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    size_t n, ni, i, j;
    typedef vector<float> rij;
    cout << "Geet het aantal regesl dat volgt: ";
    cin >> n;
    vector<rij> v(n);
    for (i = 0; i < n; i++) {
        cout << "Geef ni, de lengte van de eerstvolgende regel: ";
        cin >> ni;
        cout << "Tik " << ni << " getallen in:" << endl;
        for (j = 0; j < ni; j++) {
            float x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    cout << "De volgende rijen zijn ingelezen:" << endl
        << fixed << setprecision(1);
    for (i = 0; i < n; i++) {
        ni = v[i].size();
        for (j = 0; j < ni; j++) 
            cout << setw(6) << v[i][j] << " ";
        cout << endl;
    }
    return 0;
}