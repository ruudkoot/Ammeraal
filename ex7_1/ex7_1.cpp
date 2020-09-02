// ex7_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    linkedlist(linkedlist const&);
    ~linkedlist();
    linkedlist& operator=(linkedlist const&);
    void voegtoe(int);
    void toon();
private:
    element* start;
    void copy(element*);
    void kill(element*);
};

linkedlist::linkedlist(linkedlist const& l) : start(NULL) {
    copy(l.start);
}

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


linkedlist& linkedlist::operator=(linkedlist const& l) {
    element* orig_start;
    if (this != NULL) {
        orig_start = start;
        copy(l.start);
        kill(orig_start);
    }
    return *this;
}

void linkedlist::copy(element* s) {
    element** curr = &start;
    for (element* p = s; p != NULL; p = p->volg) {
        element* e = new element;
        e->num = p->num;
        e->volg = NULL;
        *curr = e;
        curr = &e->volg;
    }
}

void linkedlist::kill(element* s) {
    if (s->volg != NULL)
        kill(s->volg);
    delete s;
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

int main() {
    linkedlist lst;
    lst.voegtoe(15);
    lst.voegtoe(28);
    lst.voegtoe(12);
    lst.toon();
    f();
    linkedlist lst2 = lst;
    cout << "lst2" << endl;
    lst2.toon();
    lst = lst2;
    lst.toon();
    lst2 = lst2;
    lst.toon();
    return 0;
}
