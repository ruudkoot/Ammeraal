// vensters1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class venster {
public:
    venster(int links = 0, int boven = 0, int rechts = 0, int onder = 0)
    {
        xLinks = links; yBoven = boven; xRechts = rechts; yOnder = onder;
    }
    bool omvatStdVenster()
    {
        return xLinks <= xLinksStd && yBoven <= yBovenStd && xRechts >= xRechtsStd && yOnder >= yOnderStd;
    }
    static void zetStdVenster(int links,int boven,int rechts,int onder)
    {
        xLinksStd = links; yBovenStd = boven; xRechtsStd = rechts; yOnderStd = onder;
    }
private:
    int xLinks, yBoven, xRechts, yOnder;
    // 'type definition' -  in the header file
    static int xLinksStd, yBovenStd, xRechtsStd, yOnderStd;
};

// allocates the memory for the fields - should be in one module only
int venster::xLinksStd, venster::yBovenStd, venster::xRechtsStd, venster::yOnderStd;

int main()
{
    venster u(15, 10, 300, 200);
    venster::zetStdVenster(15, 15, 200, 200);
    if (u.omvatStdVenster())
        cout << "u omvat het standaardvenster.\n";
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
