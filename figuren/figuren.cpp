#include "figuren.h"

lijn::lijn(punt const& P, punt const& Q, element* ptr) : A(P), B(Q) {
	next = ptr;
}

void lijn::print()const {
	cout << "Lijn: "; pr(A); pr(B, "\n");
}

cirkel::cirkel(const punt& middelp, float straal, element* ptr) : C(middelp), r(straal) {
	next = ptr;
}

void cirkel::print()const {
	cout << "Cirkel: "; pr(C); cout << r << endl;
}

void pr(const punt& P, const char* str) {
	cout << "(" << P.x << ", " << P.y << ")" << str;
}

