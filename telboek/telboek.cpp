// telboek.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	map<string, int> M;
	M["Pietersen"] = 4567;
	M["Jansen"] = 1233;
	M["Karelsen"] = 9988;
	M["Jansen"] = 1234;
	M["Gerritsen"] = 6677;
	cout << "Jansen heeft telefoonnummer " << M["Jansen"] << endl;
	M.erase("Karelsen");
	cout << "Het voledige telefoonboek nadat Karelsen is verwijderd:" << endl;
	map<string, int>::iterator i;
	for (i = M.begin(); i != M.end(); ++i) {
		pair<string, int>P = *i;
		cout << P.second << " " << P.first << endl;
		cout << (*i).second << " " << (*i).first << endl;
		cout << i->second << " " << i->first << endl;
	}
	cout << "Karelsen heeft telefoonnummer '" << M["Karelsen"] << "'." << endl;
	return 0;
}
