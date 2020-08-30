// namspac1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

namespace A {
    int i = 100, x = 200;
}

int main()
{
    std::string s = "ABC";
    char string[100] = "PQR";
    std::cout << s << std::endl << string << std::endl;

    std::cout << A::i << std::endl << A::x << std::endl;
    using namespace std;
    using A::i;
    using A::x;
    cout << i << endl << x << endl;

    return 0;
}