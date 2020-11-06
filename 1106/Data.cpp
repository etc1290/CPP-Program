#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int input[2] = {3,5};
	int *a;
	a = &input[0];
	
	cout << input[0] << endl;
	cout << &input << endl;
	cout << a << endl;
	cout << *a << endl;
	cout << *(a+1) << endl;
	cout << *(a+2) << endl;
	
	return 0;
}
