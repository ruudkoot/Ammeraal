#ifndef VKV_H
#define VKV_H

class vkv {
public:
	void coeff(double aa, double bb, double cc);
	bool losOp();
	double wortel1()const { return x1; }
	double wortel2()const { return x2; }
private:
	double a, b, c, x1, x2;
};

#endif // ALGEMEEN_H