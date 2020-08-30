#include <iostream>
#include "vec.h"

int main() {
    vec<int> p(1, 2), q(3, 4);
    vec<float> u(1.1f, 2.2f), v(3.3f, 4.4f);
    std::cout << p + q << std::endl;
    std::cout << u + v << std::endl;
    return 0;
}