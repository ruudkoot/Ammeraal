#include <iostream>
using namespace std;

extern int n = 100;
static int m = 7;

void f(int i) {
	n += i + m;
}

void g(void) {
	cout << "Na verhoging met 8 + 7 (in module 2):" << endl;
	cout << "n = " << n << endl;
}