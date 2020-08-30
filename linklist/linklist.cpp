// linklist.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct element {
    int num;
    element* volg;
};

class linkedlist {
public:
    linkedlist() : start(NULL) {}
    ~linkedlist();
    void voegtoe(int);
    void toon();
private:
    element* start;

};

linkedlist::~linkedlist() {
    cout << "~linkedlist ";
    toon();
    cout << endl;
    element* p;
    while (start != NULL) {
        p = start;
        start = start->volg;
        delete p;
    }
}

void linkedlist::voegtoe(int x) {
    element* p = start;
    start = new element;
    start->volg = p;
    start->num = x;
}

void linkedlist::toon() {
    for (element* p = start; p != NULL; p = p->volg)
        cout << p->num << " ";
    cout << endl;
}

void f() {
    linkedlist a, b;
    a.voegtoe(1000); a.voegtoe(100);
    b.voegtoe(50); b.voegtoe(25);
    a.toon(); b.toon();
}

int main()
{
    linkedlist lst;
    lst.voegtoe(15);
    lst.voegtoe(28);
    lst.voegtoe(12);
    lst.toon();
    f();
    return 0;
}
