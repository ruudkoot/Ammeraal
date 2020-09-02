#include <algorithm>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <string>
#include <vector>
using namespace std;

#define PI 3.1415

int main() {
	double x = 3.0;
	complex<double> z(1, 2), z1 = polar(0.5 * PI, 0.5 * PI);
	int n = 2;
	cout << pow(z, n) << endl;
	cout << pow(z, x) << endl;
	cout << pow(z, z1) << endl;
	cout << pow(x, z) << endl;
	return 0;
}
