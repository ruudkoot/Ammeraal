// volgorde.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	char* t;
	if (strcmp(argv[3], argv[2])) { t = argv[2]; argv[2] = argv[3]; argv[3] = t; }
	if (strcmp(argv[2], argv[1])) { t = argv[1]; argv[1] = argv[2]; argv[2] = t; }
	if (strcmp(argv[3], argv[2])) { t = argv[2]; argv[2] = argv[3]; argv[3] = t; }
	cout << argv[1] << endl;
	cout << argv[2] << endl;
	cout << argv[3] << endl;
	return 0;
}