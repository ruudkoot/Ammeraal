// rijtpl.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

template <typename T, int n, typename S = T>
class rij {
public:
    rij(T start, T incr);
    S som();
private:
    T r[n];
};

template <typename T, int n, typename S>
rij<T, n, S>::rij(T start, T incr) {
    for (int i = 0; i < n; i++)
        r[i] = start + i * incr;
}

template <typename T, int n, typename S>
S rij<T, n, S>::som() {
    S s = 0;
    for (int i = 0; i < n; i++)
        s += r[i];
    return s;
}

int main() {
    rij<int, 4, long> a_int(1, 2);
    rij<float, 3> a_float(0.3F, 0.1F);
    cout << a_int.som() << " " << a_float.som() << endl;
    return 0;
}