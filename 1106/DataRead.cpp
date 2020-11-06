#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	ifstream infile("a.txt");
	string value;
	int i= 0,input[10],sum =0,count = 0, max = 0, min = 2147483647;
	
	
	while(infile.good()){
		getline(infile,value,',');
		cout<<value<<endl;
		input[i] = atoi(value.c_str());
		//input[i] = atoi(value);
		if(input[i] == -1) break;
        sum += input[i];
        if (input[i] > max) max = input[i];
        if (input[i] < min) min = input[i];
        count++;
        i++;
	} 
	
	for(int i =0; i < count; i++){
		cout << input[i] << " ";
	}
	
	//Result print
	cout << "\n\n";
	cout << "sum: " << sum << endl;
	cout << "count: " << count << endl;
	cout << "max: " << max << endl;
	cout << "min: " << min << endl;
	cout << "average: " << float(sum)/float(count) << endl;
	
} 
