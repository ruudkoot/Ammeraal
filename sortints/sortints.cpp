// sortints.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    int x;
    std::cout << "Typ gehele getallen, de laatste gevolgd door een letter:" << std::endl;
    while (std::cin >> x, !std::cin.fail())
        v.push_back(x);
    std::sort(v.begin(), v.end());
    std::cout << "Dezelfde getallen, gesorteerd:" << std::endl;
    /*
    size_t n = v.size();
    for (int i = 0; i < n; i++)
        std::cout << v[i] << std::endl;
    */
    for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++)
        std::cout << *i << std::endl;
    return 0;
}
