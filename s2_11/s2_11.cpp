// s2_11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int d2 = 0, d3 = 0, d5 = 0;
	for (int i = 0; i < 10; i++)
	{
		int n;
		cin >> n;
		if (!(n % 2)) d2++;
		if (!(n % 3)) d3++;
		if (!(n % 5)) d5++;
	}
	cout << "Deelbaar door 2: " << d2 << endl;
	cout << "Deelbaar door 3: " << d3 << endl;
	cout << "Deelbaar door 5: " << d5 << endl;
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
