#pragma once
#include <iostream>
using namespace std;

struct punt {
    float x, y;
    punt(float xx = 0, float yy = 0) : x(xx), y(yy) {}
};

struct element {
    element* next;
    virtual void print()const = 0;
};

class lijn : public element {
public:
    lijn(punt const&, punt const&, element*);
    void print()const;
private:
    punt A, B;
};

class cirkel : public element {
public:
    cirkel(const punt& middelp, float straal, element* ptr);
    void print()const;
private:
    punt C;
    float r;
};

void pr(const punt& P, const char* str = ", ");