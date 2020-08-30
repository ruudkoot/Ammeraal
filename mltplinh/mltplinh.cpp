// mltplinh.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class p1 {
public:
    p1(int n = 1) : n1(n) {
        cout << "p1(" << n << ")" << endl;
    }
    ~p1() {
        cout << "~p1()" << endl;
    }
private:
    int n1;
};

class p2 {
public:
    p2(float x = 2.0f) : x2(x) {
        cout << "p2(" << x << ")" << endl;
    }
    ~p2() {
        cout << "~p2()" << endl;
    }
private:
    float x2;
};

class c : public p1, public p2 {
public:
    c(bool b = true, int n = 3, float x = 4.0f) : p1(n), p2(x), bb(b) {
        cout << "c(" << b << "," << n << "," << x << ")" << endl;
    }
    ~c() {
        cout << "~c()" << endl;
    }
private:
    bool bb;
};

int main() {
    c cc(false);
    cout << sizeof p1 << endl;
    cout << sizeof p2 << endl;
    cout << sizeof c << endl;
    return 0;
}

