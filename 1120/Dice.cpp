#include<iostream>
#include<cstdlib>
using namespace std;

int dice(){
	return rand()%6 + 1;
}

int main(){
	srand(0);
	int a ,b ,t[6] = {}, sum = 0, ts[12] = {};
	for(int i = 0; i < 10000; i++){
		a = dice();
		b = dice();
		cout << a << "\t";
		cout << b << "\t";
		cout << a+b << endl;
		t[a-1]++; t[b-1]++;
		sum += a+b;
		ts[a+b-1]++;
	}
	
	cout << "\n"; 
	cout << "sum : " << sum << endl;
	
	for(int i = 0; i < 6; i++){
		cout << i+1 << ":";
		cout << t[i] << "\t";
	}
	
	cout << "\n";
	
	for(int i = 0; i < 12; i++){
		cout << i+1 << ":";
		cout << ts[i] << "\t";
	}
	
} 
