#include <algorithm>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <list>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
	char s[100];
	ifstream f("test.txt");
	f.read(s, 5);
	s[f.gcount()] = '\0';
	cout << f.gcount() << endl;
	cout << s << endl;
	f.read(s, 100);
	s[f.gcount()] = '\0';
	cout << f.gcount() << endl;
	cout << s << endl;
	return 0;
}
