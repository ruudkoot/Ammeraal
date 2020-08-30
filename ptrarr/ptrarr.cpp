#include <algorithm>
#include <climits>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <string>
#include <vector>
using namespace std;


int main() {
	int i;
	float* a[5];
	float b[5] = { 1.f,2.f,3.f,4.f,5.f };
	float(*p)[5];
	p = &b;
	for (i = 0; i < 5; i++)
		cout << "---" << "\t" << b[i] << "\t" << (*p)[i] << endl;
	for (i = 0; i < 5; i++) {
		a[i] = b + i;
		(*p)[i] = 1.1f * i;
	}
	for (i = 0; i < 5; i++)
		cout << *a[i] << "\t" << b[i] << "\t" << (*p)[i] << endl;
	return 0;
}
