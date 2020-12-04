#include<iostream>
#include <cstring>

using namespace std;

int main (){
	int a[20] = {}, len, sum = 0;
	char input[20];
	
	cin >> input;
	len = strlen(input);
	for(int i = 0; i < len; i++) a[i] = input[i] - '0';
	
	for(int i = 0; i < len; i++){
		sum += a[i];
		cout << a[i] << "\t"; 
	} 
	cout << "\n";
	cout << "sum: " << sum << endl; 
	cout << "avrage: " << float(sum)/float(len-1) << endl;
		
} 
