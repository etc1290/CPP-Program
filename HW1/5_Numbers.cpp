#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	float a , b, temp, small, large, out1,out2;
	cin >> a;
	cin >> b;

	if(b > a){
        small = a;
        large = b;
	}else{
        small = b;
        large = a;
	}

	out1 = a*small/large;
	out2 = b*small/large;

	cout << out1 << endl;
	cout << out2 << endl;



	return 0;
}
