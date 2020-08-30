// lnklist0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct element {
    int num;
    element* volg;
};

int main()
{
    element* start, * p;
    start = NULL;
    p = start; start = new element; start->volg = p; start->num = 15;
    p = start; start = new element; start->volg = p; start->num = 28;
    p = start; start = new element; start->volg = p; start->num = 12;
    for (p = start; p != NULL; p = p->volg)
        cout << p->num << " ";
    cout << endl;
    while (start != NULL) {
        p = start;
        start = start->volg;
        delete p;
    }
    return 0;
}