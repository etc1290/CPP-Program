#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int a = 10, b = 20, sum, sub, mult;
	float div;

	cin >> a;
	cin >> b;

	sum = a + b;
	sub = a - b;
	mult = a * b;
	div = float(a) / float(b);


	cout << a << "+" << b << "=" << sum << endl;
	cout << a << "-" << b << "=" << sub << endl;
	cout << a << "*" << b << "=" << mult << endl;
	cout << a << "/" << b << "=" << div << endl;

	return 2;
}
