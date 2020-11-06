#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
	int i= 0,input[10],sum =0,count = 0, max = 0, min = 2147483647,noarray,reverseNum = 0;
	
	//Input summary and storage
	while(1){
		cin >> input[i];
		if(input[i] == -1) break;
        sum += input[i];
        if (input[i] > max) max = input[i];
        if (input[i] < min) min = input[i];
        count++;
        i++;
	}
	
	cout << "\n";
	
	//Print input array data
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
	
	cout << "\n\n";
	for (int i = 0; i < argc; ++i) {
    	cout << "[" << i << "] " << argv[i] << endl;
  	}


	return 0;
}
