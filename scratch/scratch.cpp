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

#define AANTAL 1000
#define MAX 1200

int main() {
#if !defined(__cplusplus)
#error This is not C++
#endif
#if 0
	i = 123;	/* 123 is een willekeurig gekozen getal */
	j = i + 1;
#endif
	string s;
#if AANTAL < 100
	s = "A";
#elif AANTAL < 1000
	s = "B";
#else
	s = "C";
#endif
	cout << s << endl;
#if !defined(PI)
#define PI 3.14159265358979
#endif
//#undef PI
#ifndef PI
#define PI 1.1415
#endif
	cout << PI << endl;
	cout << __LINE__ << endl;
	cout << __FILE__ << endl;
	cout << __DATE__ << endl;
	cout << __TIME__ << endl;
	cout << _MSC_VER << endl;
	return 0;
}
