#include "figuren.h"
#include "driehoek.h"
#include "dikkelijn.h"

int main() {
	element* start = NULL, * p;
	start = new lijn(punt(3, 2), punt(5, 5), start);
	start = new cirkel(punt(4, 4), 2, start);
	start = new driehoek(punt(1, 1), punt(6, 1), punt(3, 6), start);
	start = new dikkelijn(punt(2, 2), punt(3, 3), 0.2f, start);
	for (p = start; p != NULL; p = p->next)
		p->print();
	return 0;
}