// afsluit0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    double s = 0, x;
    cout << "Tik getallen in, gescheiden door spaties,\n"
        << "met een regel tekst na het laatste getal:\n";
    while (cin >> x)
        s += x;
    cin.clear();
    //  char ch;
    //  do cin.get(ch); while (ch != '\n');
    cin.ignore(100, '\n');
    cout << "De eerste som is " << s << endl;
    s = 0;
    cout << "Nog een keer alstublieft:\n";
    while (cin >> x)
        s += x;
    cout << "De tweede som is " << s << endl;
    return 0;
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
