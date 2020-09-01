// except2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	int i;
	char ch;
	cout << "Type een geheel getal (eventueel 0),\n"
		"gevolgd door een niet-numeriek\n"
		"karakter (eventueel een vraagteken): ";
	try {
		cin >> i >> ch;
		if (i == 0) throw 0;
		if (ch == '?') throw '?';
	}
	catch (int) { cout << "Nul getypt.\n"; }
	catch (char) { cout << "Vraagteken getypt.\n"; }
	cout << "Einde.\n";
	return 0;
}