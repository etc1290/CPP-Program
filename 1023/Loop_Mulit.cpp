#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	int x, count =0;
	int arr[100];
	
	cin >> x;
	
	for(int k = 0;k<3;k++){
		for(int i =1; i<10; i++){
			for(int j = 1; j<k+4; j++){
				cout << j << "x" << i << "=" << i*j << "\t";
			}
			cout << endl;
		}
		cout << endl;
	}
	
	
	
	/*cout << endl;
	
	for(int i =1; i<10; i++){
		for(int j = 4; j<7; j++){
			cout << j << "x" << i << "=" << i*j << "\t";
		}
		cout << endl;
	}
	cout << endl;
	
	for(int i =1; i<10; i++){
		for(int j = 7; j<10; j++){
			cout << j << "x" << i << "=" << i*j << "\t";
		}
		cout << endl;
	}*/
	


	

	return 0;
}
