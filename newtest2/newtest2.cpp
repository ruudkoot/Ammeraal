// newtest2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <climits>
#include <new>

void mislukt() {
    std::cout << "set_new_handlet werkt!" << std::endl;
    exit(1);
}

int main() {
    char* p;
    std::set_new_handler(mislukt);
    for (;;) {
        p = NULL;
        throw std::bad_alloc();
        if (p == NULL) {
            std::cout << "Dit is niet volgens standaard C++." << std::endl;
            exit(1);
        }
    }
    return 0;
}