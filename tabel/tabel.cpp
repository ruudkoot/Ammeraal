#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << " x         f(x)\n\n";
    cout << fixed;
    for (int i = 20; i <= 40; i += 2)
    {
        double x = i / 10.0;
        cout << setw(3) << setprecision(1)
            << x << " "
            << setw(15) << setprecision(10)
            << x * x + x + 1 / x << endl;
    }
    cout << endl << endl;
    for (double x = 2.0; x <= 4.0; x += 0.2)
    {
        cout << setw(3) << setprecision(1)
            << x << " "
            << setw(15) << setprecision(10)
            << x * x + x + 1 / x << endl;
    }
}
