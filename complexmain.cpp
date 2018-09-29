
#include <iostream>
#include "Complex.h"

using namespace std;


int main()
{
	cout << "\tThis program does complex number arithmetic competition\n";

	Complex c1,c2,sum,sub,div,mul; // creating objects


	cin >> c1;
	cout << "\nPlease avoid using 0 from for your real and imaginary files\n";
	cin >> c2;

	//cout << comp;

	sum = c1 + c2;
	sub = c1 - c2;
	mul = c1 * c2;
	div = c1 / c2;
	

	cout << "The arithmetic operations on these two numbers:\n"; //outputing documents
	cout << " c1 + c2 = " << sum << "\n"
		 << " c1 - c2 = " << sub << "\n"
		 << " c1 * c2 = " << mul << "\n"
		 << " c1 / c2 = " << div << "\n";


	cin.ignore();
	cin.get();
	return 0;
}

