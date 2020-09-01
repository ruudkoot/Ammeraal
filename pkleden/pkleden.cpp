// pkleden.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct voorbeeld {
    float x, y;
    void print()const {
        cout << x << " " << y << endl;
    }
};

int main() {
    voorbeeld u, v;
    voorbeeld* pvb;
    pvb = &u;

    float voorbeeld::* p;
    p = &voorbeeld::x;
    cout << "p=" << p << endl;
    u.*p = 1.5f;
    v.*p = 1.6f;
    p = &voorbeeld::y;
    cout << "p=" << p << endl;
    u.*p = 2.5f;
    v.*p = 2.6f;

    pvb = &u;
    cout << pvb->*p << endl;

    void (voorbeeld:: * pf)()const;
    pf = &voorbeeld::print;
    cout << "pf=" << pf << endl;
    (u.*pf)();
    (v.*pf)();
    (pvb->*pf)();
    return 0;

}