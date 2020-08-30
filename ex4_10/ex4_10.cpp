// ex4_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class breuk {
public:
    breuk(int n, int d) : noemer(n), deler(d) {
        vereenvoudig();
    }
    static int ggd(int x, int y) {
        if (y == 0)
            return x;
        else
            return ggd(y, x % y);
    }
    void vereenvoudig() {
        int c = ggd(noemer, deler);
        noemer /= c;
        deler /= c;
    }
    friend breuk operator*(const breuk& p, const breuk& q) {
        return breuk(p.noemer * q.noemer, p.deler * q.deler);
    }
    friend breuk operator/(const breuk& p, const breuk& q) {
        return breuk(p.noemer * q.deler, p.deler * q.noemer);
    }
    friend breuk operator+(const breuk& p, const breuk& q) {
        return breuk(p.noemer * q.deler + q.noemer * p.deler, p.deler * q.deler);
    }
    friend breuk operator-(const breuk& p, const breuk& q) {
        return breuk(p.noemer * q.deler - q.noemer * p.deler, p.deler * q.deler);
    }
    friend breuk operator-(const breuk& p) {
        return breuk(p.noemer, -p.deler);
    }
    friend ostream& operator<<(ostream& os, const breuk& p) {
        os << p.noemer << "/" << p.deler;
        return os;
    }
private:
    int noemer, deler;
};

int main()
{
    breuk a(3, 8), b(4, 5), c = a * b;
    cout << a << " " << b << " " << c << endl;
    cout << breuk(1, 3) << endl;
    cout << breuk(2, 6) << endl;
    cout << breuk(-1, 3) << endl;
    cout << breuk(1, -3) << endl;
    cout << breuk(-1, -3) << endl;
    cout << -breuk(1, 3) << endl;
    cout << breuk(5, 6) + breuk(7, 10) << endl;
    cout << breuk(5, 6) - breuk(7, 10) << endl;
    cout << breuk(5, 6) * breuk(7, 10) << endl;
    cout << breuk(5, 6) / breuk(7, 10) << endl;
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
