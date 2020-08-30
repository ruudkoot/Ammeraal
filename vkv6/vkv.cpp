// vkv6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cmath>
#include "vkv.h"

void vkv::coeff(double aa, double bb, double cc) {
	a = aa; b = bb; c = cc;
}

bool vkv::losOp() {
	double D = b * b - 4 * a * c;
	if (a == 0 || D < 0) return false;
	double wD = sqrt(D);
	x1 = (-b + wD) / (2 * a);
	x2 = (-b - wD) / (2 * a);
	return true;
}
