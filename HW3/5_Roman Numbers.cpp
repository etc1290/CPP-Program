#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int input,encode[3];
	cin >> input;
	
	while (input != 0){
		if(input >= 10){
			cout << "X";
			input -= 10;
		}else if (input == 9){
			cout << "IX";
			input = 0;
		}else if (input < 9 && input >=5){
			cout << "V";
			for(int i =0 ; i < input-5; i++) {
				cout << "I";
			}
			input = 0; 
		}else if (input == 4){
			cout << "IV";
		}else if (input < 4){
			for(int i =0 ; i < input; i++) {
				cout << "I";
			}
			input = 0; 
		}
	}
	
	return 0;
}
