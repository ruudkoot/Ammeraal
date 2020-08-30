// c_string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char a[8] = "ABCDE", b[5] = "PQRS";
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "String die begint bij a[2]: " << a + 2 << endl;
    cout << "strlen(a) = " << strlen(a) << endl;
    cout << "strlen(\"ABC\") = " << strlen("ABC") << endl;
    if (strcmp(a, b) < 0)
        cout << "strcmp(a, b) is negatief" << endl;
    strcpy_s(a, b);
    cout << "a na strcpy_s(a, b): " << a << endl;
    cout << "Nu is strcmp(a, b) = " << strcmp(a, b) << endl;
    strcpy_s(b, "XYZ");
    cout << "b na strcpy_s(b, \"XYZ\"): " << b << endl;
    cout << "strcmp(b, \"XYZ\") = " << strcmp(b, "XYZ") << endl;
    cout << "strcmp(b + 1, \"YZ\") = " << strcmp(b + 1, "YZ") << endl;
    string s = "Hallo";
    cout << "Standaardstring s = " << s << endl;
    cout << "strlen(s.c_str()) = " << strlen(s.c_str()) << endl;
    cout << "s.length() = " << s.length() << endl;
    return 0;
}