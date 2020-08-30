#include <iostream>

using namespace std;

int main()
{
    double s = 0, x;
    cout << "Type getallen in, gescheiden door spaties.\n";
    cout << "Zolang ze positief zijn worden ze gesommeerd.\n\n";
    for (; ; )
    {
        cin >> x;
        if (x <= 0) break;
        s += x;
    }
    cout << "Som van de gelezen positieve getallen: "
        << s << endl;
}
