#include<iostream>
#include <cstring>

using namespace std;

int main (){
	int a[20] = {}, b[20] = {}, len1, len2,maxlen, sum = 0;
	char input1[20], input2[20];
	
	cin >> input1;
	cin >> input2;
	len1 = strlen(input1);
	len2 = strlen(input2);
	if(len1 > len2) maxlen = len1;
	else maxlen = len2;
	
	//over detactive
	if(len1 > 20 || len2 >20) {
		cout << "Too much input";
		return 0;
	}
	
	//Convert Char Array to Int Array
	for(int i = 0; i < len1; i++) a[i] = input1[i] - '0';
	for(int i = 0; i < len2; i++) b[i] = input2[i] - '0';
	
	//Add two Array
	int apoint = 0, bpoint = 0;
	while((len1-apoint)> 0 && (len2-bpoint)>0){
		a[apoint] += b[bpoint];
		if(a[apoint] >= 10){
			a[apoint] -= 10;
			a[apoint+1]++;
		}
		apoint++;
		bpoint++;
	}
	for(;apoint <= len1;apoint++) a[apoint] = a[apoint];
	for(;bpoint <= len2;bpoint++) a[bpoint] = b[bpoint];
	
	for(int i = 0; i < maxlen;i++) cout<<a[i]<<" ";
		
} 
