// dyncast.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class dier {
public:
    dier(int n) : poten(n) {}
    virtual void praat() = 0;
private:
    int poten;
};

class vis : public dier {
public:
    vis(int n) : dier(n) {}
    void praat() {
        cout << "Blub!" << endl;
    }
};

class vogel : public dier {
public:
    vogel(int n) : dier(n) {}
    void praat() {
        cout << "Tjirp!" << endl;
    }
};

void uitvoer2(const dier* p) {
    const vis* pVis = dynamic_cast<const vis*>(p);
    if (pVis != NULL)
        cout << "Eet meer vis" << endl;
    const vogel* pVogel = dynamic_cast<const vogel*>(p);
    if (pVogel != NULL)
        cout << "Beter 1 vogel in de hand ..." << endl;
}

int main() {
    vogel vg(2);
    uitvoer2(&vg);
}
