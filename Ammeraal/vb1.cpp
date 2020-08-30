/* vb1.cpp: De som en het vership van twee ingelzen
			detallen worden beide gekwadrateerd.
*/
#include <iostream>
using namespace std;

int main()
{
	cout << "Geef twee gehele getallen: ";
	int a, b;
	cin >> a >> b;		// a en b worden gelezen
	int som = a + b, verschil = a - b,
		u = som * som, v = verschil * verschil;
	cout << "Kwadraat van som     : " << u << endl;
	cout << "Kwadraat van verschil: " << v << endl;
	return 0;
}