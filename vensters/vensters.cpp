// vensters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

//inline int minim(int a, int b) { return a < b ? a : b; }
//inline int maxim(int a, int b) { return a > b ? a : b; }

class venster {
public:
    inline venster(const string& s);
    venster(int links=0,int boven=0,int rechts=0,int onder=0)
    {
        xLinks = links; yBoven = boven; xRechts = rechts; yOnder = onder;
    }
    venster operator+(const venster& v)const
    {
        int links = minim(xLinks, v.xLinks),
            boven = minim(yBoven, v.yBoven),
            rechts = maxim(xRechts, v.xRechts),
            onder = maxim(yOnder, v.yOnder);
        return venster(links, boven, rechts, onder);
    }
    static int minim(int a, int b) { return a < b ? a : b; }
    static int maxim(int a, int b) { return a > b ? a : b; }
    friend venster omvattend(const venster& v, const venster& w);
    void omvattend1(const venster& v, venster& result)
    {
        result.xLinks = minim(xLinks, v.xLinks);
        result.yBoven = minim(yBoven, v.yBoven);
        result.xRechts = maxim(xRechts, v.xRechts);
        result.yOnder = maxim(yOnder, v.yOnder);
    }
    void toon()const
    {
        cout << "xLinks = " << xLinks << " "
            << "yBoven = " << yBoven << "\n"
            << "xRechts = " << xRechts << " "
            << "yOnder = " << yOnder << "\n";
    }
private:
    int xLinks, yBoven, xRechts, yOnder;
};

inline venster::venster(const string& s)
{
    cout << s << endl;
    cout << "Geef xLinks, yBoven, xRechts, yOnder:\n";
    cin >> xLinks >> yBoven >> xRechts >> yOnder;
}

venster omvattend(const venster& v, const venster& w)
{
    int links = venster::minim(v.xLinks, w.xLinks),
        boven = venster::minim(v.yBoven, w.yBoven),
        rechts = venster::maxim(v.xRechts, w.xRechts),
        onder = venster::maxim(v.yOnder, w.yOnder);
    return venster(links, boven, rechts, onder);
}

int main()
{
    venster u("Eerste venster.");
    venster v("Tweede venster.");
    cout << "Venster waarin beide net passen:\n";
    venster omv1;
    omv1 = u + v;
    omv1.toon();
    venster omv2;
    omv2 = omvattend(u, v);
    omv2.toon();
    venster omv3;
    u.omvattend1(v, omv3);
    omv3.toon();
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
