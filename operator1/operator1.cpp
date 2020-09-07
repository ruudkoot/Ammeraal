// operator1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class vec {
public:
    vec(float x1 = 0, float y1 = 0) : x(x1), y(y1) {}
    vec operator+(vec const& b)const {
        return vec(x + b.x, y + b.y);
    }
    friend ostream& operator<<(ostream& os, vec const& v);
private:
    float x, y;
};

ostream& operator<<(ostream& os, vec const& v) {
    return os << v.x << "   " << v.y << endl;
}

istream& operator>>(istream& is, vec& v) {
    float x, y;
    is >> x >> y;
    v = vec(x, y);
    return is;
}

int main() {
    vec u, v, s;
    cout << "Typ twee getallenparen:" << endl;
    cin >> u >> v;
    s = u + v;
    cout << "De som bij vectoroptelling is:" << endl << s;
    return 0;
}