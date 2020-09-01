// newtest1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <climits>
#include <new>

int main() {
    char* p;
    try {
        for (;;) {
            p = NULL; // new char[LLONG_MAX];
            throw std::bad_alloc();
            if (p == NULL) {
                std::cout << "De operator new levert NULL af." << std::endl;
                std::cout << "Is niet volgens standaard C++." << std::endl;
                exit(1);
            }
        }
    }
    catch (std::bad_alloc) {
        std::cout << "Terecht is throw bad_alloc uitgevoerd." << std::endl;
    }
}