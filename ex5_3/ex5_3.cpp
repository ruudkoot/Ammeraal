// ex5_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class punt {
public:
    punt(int xx, int yy) : x(xx), y(yy) {}
    friend bool operator==(const punt& p, const punt& q) {
        return p.x == q.x && p.y == q.y;
    }
    friend bool operator<(const punt& p, const punt& q) {
        return p.x < q.x || (p.x == q.x && p.y < q.y);
    }
    friend ostream& operator<<(ostream& os, const punt& p) {
        return os << "(" << p.x << "," << p.y << ")";
    }
private:
    int x, y;
};

int main()
{
    int x, y;
    vector<punt> v;
    while (cin >> x >> y, !cin.fail())
        v.push_back(punt(x, y));
    sort(v.begin(), v.end());
    vector<punt>::iterator i;
    for (i = v.begin(); i != v.end(); i++)
        cout << *i << endl;
}