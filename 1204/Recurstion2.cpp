#include<iostream>

using namespace std;

int recur(int n, int m){	
	if(m <= 0 || m == n) return 1;
	return recur(n-1,m) + recur(n-1,m-1);
}

int main(){
	for(int i=0; i < 25;i++){
		for(int k=0; k < 25-i ; k++) cout << "       ";
		for(int j=0; j <= i ;j++){
			cout.width(7);
			cout.fill(' ');
			cout << recur(i,j) << "      "; 
		}
		cout << "\n\n";
	}
	//cout << recur(5,1) << endl;
	return 0;
} 
