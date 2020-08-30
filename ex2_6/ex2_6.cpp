// ex2_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int d;
    cin >> d;
    for (int x = 1; x < 100; x++)
    {
        int y = x;
        int yy = x * x;
        bool p = false, pp = false;
        for (int j = 0; j < 2; j++)
        {   
            if (y % 10 == d) p = true;
            y /= 10;
        }
        for (int j = 0; j < 4; j++)
        {
            if (yy % 10 == d) pp = true;
            yy /= 10;
        }
        if (p && pp) cout << x << "\t" << x * x << endl;
    }
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
