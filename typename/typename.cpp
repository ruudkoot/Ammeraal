// typename.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class A {
public:
    typedef string mytype;
};

class U {
public:
    double u, v;
};

class B {
public:
    typedef U mytype;
};

template<class T>
class X {
public:
    typename T::Y;
    Y y;
};

int main()
{
    A a;
    B b;
    X<A> xa;
    X<B> xb;
}