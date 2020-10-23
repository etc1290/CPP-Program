#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	string x;
	
	cin >> x ;
	
	if(x[0] == x[x.size()-1]) cout << "match";
	else cout << "No match";
	
	
	//cout << x.size();
	return 0;
}
