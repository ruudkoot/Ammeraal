#include <algorithm>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
	double x;
	string s = "1.2e-3";
	istringstream istr(s);
	ostringstream ostr;
	istr >> x;
	ostr << x;
	cout << ostr.str() << endl;
	return 0;
}
