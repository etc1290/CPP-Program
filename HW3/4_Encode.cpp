#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int input,encode[3];
	cin >> input;
	
	//Encode
	cout << "Encode: ";
	for(int i =3; i>=0 ; i--) {
		encode[i] = (input+7)%10;
		input /= 10;
	}
	swap(encode[0],encode[2]);
	swap(encode[1],encode[3]);
	
	for(int i =0; i<4 ; i++) cout << encode[i];
	
	
	cout << "\n";
	//Decode
	swap(encode[0],encode[2]);
	swap(encode[1],encode[3]);
	
	cout << "Decode: ";
	for(int i =0; i<4 ; i++){
		cout << (encode[i]+3)%10;
	}
	
	return 0;
}
