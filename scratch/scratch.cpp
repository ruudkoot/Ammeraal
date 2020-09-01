#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <string>
#include <vector>
using namespace std;

struct voorbeeld {
	voorbeeld() : x(0.0f), y(0.0f) {}
	float x, y;
	void print()const {
		cout << x << " " << y << endl;
	}
};

int main() {
	voorbeeld u, v;
	u.print();
	float* pfloat = &u.x;
	*pfloat = 0.123f;
	u.print();
	void (voorbeeld:: * pf)()const;
	pf = &voorbeeld::print;
	(u.*pf)();
	return 0;
}
