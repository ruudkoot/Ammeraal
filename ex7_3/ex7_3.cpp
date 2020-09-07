// ex7_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class noSolution : public std::exception {};

class linsys {
public:
    linsys(double aa1, double aa2, double bb1, double bb2, double cc1, double cc2) : a1(aa1), a2(aa2), b1(bb1), b2(bb2), c1(cc1), c2(cc2) {}
    void solve() {
        double d = a1 * b2 - a2 * b1;
        if (d == 0.0) throw noSolution();
        x = (b2 * c1 - b1 * c2) / d;
        y = (a1 * c2 - a2 * c1) / d;
    }
    double getX()const { return x; }
    double getY()const { return y; }
private:
    double a1, a2, b1, b2, c1, c2, x, y;
};

int main() {
    //linsys ls(1, 2, 0, 1, 2, 3);
    linsys ls(0, 0, 0, 0, 2, 3);
    try { ls.solve(); }
    catch (noSolution) {
        std::cout << "Geen oplossingen!";
        exit(1);
    }
    std::cout << ls.getX() << " " << ls.getY() << std::endl;
}
