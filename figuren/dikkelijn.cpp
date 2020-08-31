#include "figuren.h"
#include "dikkelijn.h"

dikkelijn::dikkelijn(punt const& P, punt const& Q, float dikte, element* ptr) : lijn(P, Q, ptr) {
	w = dikte;
}

void dikkelijn::print()const {
	lijn::print();
	cout << "    Dikte: " << w << endl;
}