// typeid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class dier {
public:
	virtual void print() = 0;
};

class vogel : public dier {
public:
	void print() { cout << "Vogel" << endl; }
};

class vis : public dier {
public:
	void print() { cout << "Vis" << endl; }
};

void zoekuit(dier const& d) {
	const type_info& ti = typeid(d);
	cout << "Type: " << ti.name() << endl;
}

int main() {
	vogel vg;
	vis vs;
	zoekuit(vg);
	zoekuit(vs);

	typedef int* pointer;
	type_info const& ti = typeid(pointer);
	cout << "Type: " << ti.name() << endl;

	return 0;
}