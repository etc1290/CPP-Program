#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	string x;
	
	cin >> x ;
	
	for(int i = 0; i <x.size()/2; x++){
		if(x[i] == x[x.size()-1-i]) ;
		else bool mirror = true;
	} 
	
	ifdef mirror
	cout << "No match";
	
	endif 
	cout << "match"
	
	
	//cout << x.size();
	return 0;
}
