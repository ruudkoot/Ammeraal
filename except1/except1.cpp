// except1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void detail(int k) {
    cout << "Start van functie 'detail'." << endl;
    if (k == 0) throw 123;
    cout << "Eind van functie 'detail'." << endl;
}

void reken(int i) {
    cout << "Start van functie 'reken'." << endl;
    detail(i);
    cout << "Eind van functie 'reken'." << endl;
}

int main() {
    int x;
    cout << "Geef x: ";
    cin >> x;
    try { reken(x); }
    catch (std::exception const&) { cout << "catch (std::exception const&) " << endl; }
    catch (int const& i) { cout << "catch (int const& i) " << i << endl; }
    cout << "Einde." << endl;
    return 0;
}