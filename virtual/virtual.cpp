// virtual.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class dier {
public:
    dier(int n) : aantalpoten(n) {
        cout << "dier(" << n << ")" << endl;
    }
    virtual ~dier() {
        cout << "~dier" << endl;
    }
    virtual void print()const = 0 {
        cout << "Onbekend. Aantal poten: " << aantalpoten << endl;
    }
protected:
    int aantalpoten;
};

class vis : public dier {
public:
    vis(int n) : dier(n) {
        cout << "vis(" << n << ")" << endl;
    }
    ~vis() {
        cout << "~vis" << endl;
    }
    void print()const {
        //cout << "Vis.      Aantal poten: " << aantalpoten << endl;
        dier::print();
    }
};

class vogel : public dier {
public:
    vogel(int n) : dier(n) {
        cout << "vogel(" << n << ")" << endl;
    }
    ~vogel() {
        cout << "~vogel" << endl;
    }
    void print()const {
        cout << "Vogel.    Aantal poten: " << aantalpoten << endl;
    }
};

class zoogdier : public dier {
public:
    zoogdier(int n) : dier(n) {
        cout << "zoogdier(" << n << ")" << endl;
    }
    ~zoogdier() {
        cout << "~zoogdier" << endl;
    }
    void print()const {
        cout << "Zoogdier. Aantal poten: " << aantalpoten << endl;
    }
};

/*
void uitvoer(dier d) {
    d.print();
}
*/

void uitvoer_ref(const dier& d) {
    d.print();
}

void uitvoer_ptr(const dier* d) {
    d->print();
}

int main() {
    const int n = 3;
    dier* p[n];
    p[0] = new vis(1);
    p[1] = new vogel(2);
    p[2] = new zoogdier(4);
    //p[3] = new dier;
    for (int i = 0; i < n; i++) {
        p[i]->print();
        //uitvoer(*p[i]);
        uitvoer_ref(*p[i]);
        uitvoer_ptr(p[i]);
    }
    cout << sizeof dier << endl;
    cout << sizeof vis << endl;
    cout << sizeof vogel << endl;
    cout << sizeof zoogdier << endl;
    for (int i = 0; i < n; i++)
        delete p[i];
    return 0;
}