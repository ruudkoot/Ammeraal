// ex4_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class tijd {
public:
    tijd(int h0 = 0, int m0 = 0) : h(h0), m(m0) {}
    friend tijd operator+(const tijd& t, int m) {
        tijd r;
        r.m = (t.m + m) % 60;
        r.h = (t.h + (m / 60) + (t.m + m % 60 >= 60)) % 24;
        return r;
    }
    void print() {
        cout << h << "." << m << endl;
    }
private:
    int h, m;
};

int main()
{
    tijd t0(3, 30), t1;
    t1 = t0 + 30;
    t0.print();
    t1.print();
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
