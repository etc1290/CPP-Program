#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int input, div = 1;
	cin >> input;
	
	for(int i; i <9; i++){
		if(input / div == div && input % div == 0){
			cout << "Symmetry";
			return 0;
		}
		div = div*10+1;
	}
	
	cout << "Non-Symmetry";
	
	return 0;
}
