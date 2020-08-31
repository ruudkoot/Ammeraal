#include "figuren.h"
#include "driehoek.h"

driehoek::driehoek(punt const& P1, punt const& P2, punt const& P3, element* ptr) {
	A = P1; B = P2; C = P3; next = ptr;
}

void driehoek::print()const {
	cout << "Driehoek: "; pr(A); pr(B); pr(C, "\n");
}