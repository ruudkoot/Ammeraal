#include <iostream>
#include "vec.h"

template<typename T>
std::ostream& operator<<(std::ostream& os, const vec<T>& v) {
    return os << "<" << v.x << "," << v.y << ">";
}

template std::ostream& operator<<(std::ostream& os, const vec<int>& v);
template std::ostream& operator<<(std::ostream& os, const vec<float>& v);
