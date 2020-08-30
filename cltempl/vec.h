#pragma once
#include <iostream>

template<typename T>
class vec;

template<typename T>
vec<T> operator+(const vec<T>& a, const vec<T>& b);

template<typename T>
std::ostream& operator<<(std::ostream& os, const vec<T>& v);

template<typename T>
class vec {
public:
    vec(T xx = 0, T yy = 0) : x(xx), y(yy) {}
    friend vec operator+(const vec& a, const vec& b) {
        return vec(a.x + b.x, a.y + b.y);
    }
    friend std::ostream& operator<<<T>(std::ostream& os, const vec& v);
private:
    T x, y;
};