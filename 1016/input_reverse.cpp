#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
	int input,sum =0,count = 0, max = 0,noarray;

	//Input overflow check
	cin >> input;
	if(!cin) {
		cout << "Input Overflow" << endl;
		return 0;
	}
	
	//Negitive number dective
	if(input < 0){
		cout << "-";
		input = abs(input);
	}
	
	//Reverse print and find the max
	while(input != 0){
        noarray = input%10;
        input = input/10;
        sum += noarray;
        cout << noarray;
        if (noarray > max) max = noarray; 
        count++;
	}
	
	//Result print
	cout << "\n\n";
	cout << "sum: " << sum << endl;
	cout << "count: " << count << endl;
	cout << "max: " << max << endl;
	cout << "average: " << float(sum)/float(count) << endl;
	

	return 0;
}
