#pragma once

#include "figuren.h"

class dikkelijn : public lijn {
private:
	float w;
public:
	dikkelijn(punt const& P, punt const& Q, float dikte, element* ptr);
	void print()const;
};
