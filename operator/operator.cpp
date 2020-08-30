// operator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class vec {
public:
    vec(float x1 = 0, float y1 = 0) : x(x1), y(y1) {
    }
    void printvec()const {
        cout << x << " " << y << endl;
    }
    vec operator+(const vec& b)const {
        return vec(x + b.x, y + b.y);
    }
private:
    float x, y;
};

class constVec {
public:
    constVec(float x1 = 0, float y1 = 0) : x(x1), y(y1) {
    }
    void printvec()const {
        cout << x << " " << y << endl;
    }
    constVec operator+(const constVec& b)const {
        return constVec(x + b.x, y + b.y);
    }
private:
    const float x, y;
};

int main()
{
    const int aantal1(30);
    const int aantal2 = 30;
    vec u(3, 1), v(1, 2), s;
    s = u + v;
    s.printvec();
    return 0;
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
