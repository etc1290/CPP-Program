#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	float a, b;
	cin >> a >> b;
	
	
	float c;
	
	c = (13 * a + b) / b;
	cout << c << endl;
	
	c = a + b * 3;
	cout << c << endl;
	
	c = a / 100 + b / 200;
	cout << c << endl;
	
	
	int x = (int)a;
	int y = (int)b;
	
	c = x%y;
	cout << c << endl;
	
	c = x/y%y;
	cout << c << endl;
	
	c = x/y/y%y;
	cout << c << endl;
	
	c = x/y/y/y%y;
	cout << c << endl;
	
	
	return 0;
}
