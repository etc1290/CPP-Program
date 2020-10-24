#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
	int input,sum =0,count = 0, max = 0; 
	int arr[10];

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
        arr[count] = input%10;
        input /= 10;
        sum += arr[count];
        cout << arr[count];
        if (arr[count] > max) max = arr[count]; 
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
