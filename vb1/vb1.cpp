#include <iostream>
#include <string>
#include <climits>
#include <iomanip>

using namespace std;

int main()
{
	char ch = 'A';
	double ff = 5.0 / 3;
	float f = ff;
	bool b = (f > 1);
	int i, j;
	j = 2 * (i = 5.0 / 3); // i = 1, j = 2
	cout << "ch = " << ch
		<< "    ASCII-waarde: " << int(ch) << endl;
	cout << fixed << setprecision(10);
	cout << "f = " << f << "    ff = " << ff << endl;
	cout << "i = " << i << "    j = " << j << endl;
	if (b)
		cout << "Er geldt: f > 1\n";
	cout << "Aantal bytes voor het type 'bool':    "
		<< sizeof(bool) << endl;
	cout << "Aantal bytes voor het type 'char':    "
		<< sizeof(char) << endl;
	cout << "Aantal bytes voor het type 'int':     "
		<< sizeof(int) << endl;
	cout << "Aantal bytes voor het type 'float':   "
		<< sizeof(float) << endl;
	cout << "Aantal bytes voor het type 'double':  "
		<< sizeof(double) << endl;
	return 0;
}
