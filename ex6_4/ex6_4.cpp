// ex6_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool elkaars_omgekeerde(char* s, char* t) {
    size_t n = strlen(s);
    if (n != strlen(t)) return false;
    for (int i = 0; i < n; i++)
        if (s[i] != t[n - i - 1]) return false;
    return true;
}

int main()
{
    char s[100], t[100];
    std::cin >> s >> t;
    std::cout << elkaars_omgekeerde(s, t);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
