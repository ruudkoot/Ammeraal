#include <iostream>
#include "vkv.h"
using namespace std;

int main() {
	double a, b, c;
	cout << "Typ a, b en c: ";
	cin >> a >> b >> c;
	vkv v;
	v.coeff(a, b, c);
	if (v.losOp())
		cout << "Wortels: " << v.wortel1() << " " << v.wortel2() << endl;
	else
		cout << "Geen reele wortels." << endl;
	return 0;
}