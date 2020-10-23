#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int x;
	int arr[100];
	
	for(int i =-100; i<=100; i+=5){
		cout << i << "     " ;
		cout << i*9/5+32 <<endl;
		
	}
	
	for(int i =100; i>=-100; i-=5){
		cout << i << "     " ;
		cout << (i-32)*9/5 <<endl;
		
	}


	

	return 0;
}
