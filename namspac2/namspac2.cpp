// namspac2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

namespace A {
    int i = 100, x = 200;
}

namespace B {
    int i = 5;
    float x;
}

int main() {
    {
        using namespace A;
        std::cout << "A: i + x = " << i + x << std::endl;
    }
    {
        using namespace B;
        x = 2.0f * i + 1;
        std::cout << "B: i = " << i << std::endl
            << "   x = " << x << std::endl;
    }
    {
        using namespace A;
        std::cout << "A: i + x = " << i + x << std::endl;
    }
    std::cout << "A & B: " << A::i + B::x << std::endl;
    return 0;
}
