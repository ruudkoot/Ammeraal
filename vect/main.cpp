#include "vect.h"

int main() {
	vect<int> u, v;
	u.push_back(123);
	u.push_back(456);
	v = u;
	vect<int> w(u);
	v[1] = 999;
	int i;
	for (i = 2; i < 10; i++)
		u.push_back(10 * i);
	std::cout << "u: " << u << std::endl;
	std::cout << "v: " << v << std::endl;
	std::cout << "w: " << w << std::endl;
	std::cout << "De lengte van rij u is " << static_cast<size_t>(u) << std::endl;
	std::cout << "De lengte van rij v is " << static_cast<size_t>(v) << std::endl;
	std::cout << "De lengte van rij w is " << static_cast<size_t>(w) << std::endl;
	std::cout << "u + v + w: " << u + v + w << std::endl;
	return 0;
}
