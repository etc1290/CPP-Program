#include<iostream> 
#include<stdlib.h>
#include<time.h> 
using namespace std;


int main(){
	
	bool arr1[10000];
	int x;
	
	for(int i = 0; i < 10000; i++){
		arr1[i] = true;
	}
	
	for(int i = 2; i < 10000; i++){
		for(int j = 1; j < 10000; j++){
			x = i*j;
			if() break;
			arr1[x] = false;
			 
		} 
	}

	for(int i = 0; i < 10000; i++){
		if(arr1[i]) cout << i << endl;
	}
		
}
