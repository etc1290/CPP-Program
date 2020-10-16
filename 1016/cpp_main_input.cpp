#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int x = 0, sum = 0,max = 0, min = 0;
	float count = 0;
	;
	
	cout << "Please enter a value ";
	cin >> x;
	min = x; sum = x;
	while(x != -1){
		cout << "Please enter a value ";
		cin >> x;
		sum += x;
		count ++;
		if(max < x)max=x;
		if(min > x && x != -1)min=x;
	}
	
	
	cout << "sum " << sum << endl;
	cout << "average " << float(sum)/count << endl;
	cout << "count " << count << endl;
	cout << "max " << max << endl;
	cout << "min "<< min << endl;
	return 0;
}
