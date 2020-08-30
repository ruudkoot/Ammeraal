// vkv.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

class vkv
{
public:
    vkv(double aa=1, double bb=0, double cc=0)
    {
        a = aa; b = bb; c = cc;
    }
    bool losOp();
    double wortel1()const { return x1; }
    double wortel2()const { return x2; }
private:
    double a, b, c, x1, x2;
};

bool vkv::losOp()
{
    double D = b * b - 4 * a * c;
    if (a == 0 || D < 0) return false;
    double wD = sqrt(D);
    x1 = (-b + wD) / (2 * a);
    x2 = (-b - wD) / (2 * a);
    return true;
}

int main()
{
    {
        vkv v(3, 8, 6);
        vkv w(2, 5);
        vkv u(9);
        vkv t;
    }
    double a, b, c;
    cout << "Typ a, b en c: ";
    cin >> a >> b >> c;
    vkv v(a, b, c);
    if (v.losOp())
        cout << "Wortels: " << v.wortel1()
        << " " << v.wortel2() << endl;
    else
        cout << "Geen reele wortels.\n";
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
