#pragma once
#include <iostream>

template <typename T>
class vect;

template <typename T>
std::ostream& operator<<(std::ostream& os, const vect<T>& u);

template <typename T>
class vect {
public:
	vect() : lengte(0), gereserveerd(0), start(NULL) {}
	vect(const vect& u);
	~vect() { delete[] start; }
	vect& operator=(const vect& u);
	void push_back(T x);
	T& operator[](size_t i) { return start[i]; }
	size_t size()const { return lengte; }
	friend std::ostream& operator<<<T>(std::ostream&, const vect&);
	operator size_t() { return lengte; }
private:
	T* start;
	size_t lengte, gereserveerd;
	void kopieer(const T* p);
};

template <typename T>
vect<T>::vect(const vect<T>& u) {
	lengte = u.lengte;
	gereserveerd = u.gereserveerd;
	kopieer(u.start);
}

template <typename T>
vect<T>& vect<T>::operator=(const vect<T>& u) {
	if (this != &u) {
		delete[] start;
		gereserveerd = u.gereserveerd;
		lengte = u.lengte;
		kopieer(u.start);
	}
	return *this;
}

template <typename T>
void vect<T>::push_back(T x) {
	if (gereserveerd == 0) {
		gereserveerd = 1;
		lengte = 0;
		start = new T[gereserveerd];
	}
	else if (lengte == gereserveerd) {
		gereserveerd *= 2;
		T* p = start;
		kopieer(p);
		delete[] p;
	}
	start[lengte++] = x;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const vect<T>& u) {
	for (size_t i = 0; i < u.lengte; i++)
		os << u.start[i] << " ";
	return os;
}

template <typename T>
void vect<T>::kopieer(const T* p) {
	start = new T[gereserveerd];
	for (size_t i = 0; i < lengte; i++)
		start[i] = p[i];
}
