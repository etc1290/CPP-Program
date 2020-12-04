#include<iostream>

using namespace std;

int recur(int x){	
	if(x == 0) return 0;
	if(x == 1) return 1;
	return recur(x-1) + recur(x-2);
}

int main(){
	for(int i=0; i < 40; i++)
	cout << recur(i) << endl;
	return 0;
} 
