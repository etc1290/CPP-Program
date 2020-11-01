#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int input, fac = 1;
	float approach_exp = 1;
	cin >> input;
	
	for(int i = 1; i < input -1; i++){
		fac *= i;
		approach_exp += 1/float(fac);
	}
	
	cout << approach_exp;
	
	return 0;
}
