// afg.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class gebouw {
protected:
    int k;
public:
    gebouw() { k = 6; }
    void print()const {
        cout << "Gebouw met " << k << " kamers" << endl;
    }
};

class huis : public gebouw {};

class school : public gebouw {
public:
    void print()const {
        cout << "School" << endl;
    }
};

int main() {
    huis h;
    school s;
    h.print();
    s.print();
    return 0;
}