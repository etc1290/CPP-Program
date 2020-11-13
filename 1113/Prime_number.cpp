#include <iostream>

using namespace std;

int NPcount = 0;

bool Prime(int n){
    if(n==1) return 0;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int Prime_inter(int begin, int inter){
}

int Prime_range(int begin, int end, bool show = false){
	int Pcount = 0;
	for(int i = begin ; i < end +1; i++ ) {
		if(Prime(i)){
			if(show) cout << i << " Is a Prime" << endl;
			Pcount++;	
		} 
		else {
			//cout << i << " Is Not a Prime" << endl;
			NPcount++;
		}
	} 
	return Pcount;
}
 

int main(int argc, char** argv) {
	int n1, n2; 
	char show_input;
	bool show;
	
	//Data Input
	cin >> n1;
	cin >> n2;
	cout << "Show Prime Number ? (y/n)" << endl;
	cin >> show_input;
	
	//Show All of the Prime number
	if(show_input == 'y' || show_input == 'Y') show = true;
	else show = false;
	
	
	
	
	cout << "There have " << Prime_range(n1, n2, true) << " Prime in " << n1  << " to " << n2 << endl;
	cout << "There have " << NPcount << " Non-prime in " << n1  << " to " << n2 << endl;
	return 0;
}
