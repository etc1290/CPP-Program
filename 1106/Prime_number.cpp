#include <iostream>

using namespace std;

bool Prime(int n){
    if(n==1) return 0;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
 

int main(int argc, char** argv) {
	int n, Pcount =0 , NPcount = 0;
	cin >> n;
	
	for(int i = 1 ; i < n +1; i++ ) {
		if(Prime(i)){
			cout << i << " Is a Prime" << endl;
			Pcount++;	
		} 
		else {
			//cout << i << " Is Not a Prime" << endl;
			NPcount++;
		}
	} 
	
	cout << "There have " << Pcount << " Prime in " << n << endl;
	cout << "There have " << NPcount << " Non-prime in " << n << endl;	
	return 0;
}
