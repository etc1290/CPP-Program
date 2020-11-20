#include<iostream>
#include<cstdlib>
#include<time.h>
#include <thread>

using namespace std;

int dice(){
	return rand()%6 + 1;
}
int twodice(){
	return dice()+dice();
}

bool game(){
	int a = twodice();
	if(a == 7 || a == 11 )
		return true;
	if(a == 2 || a == 3 || a == 12)
		return false;
	while(true){
		a = twodice();
		if(a == 7)
			return false;
		else
			return true;
	}
}

int main(){
	int win = 0, loose = 0;
	srand(time(0));
	for(int i = 0 ; i < 100000; i++){
		if(game()){
			cout << "Win" << endl;
			win++;
		}else{
			cout << "Loose" << endl;
			loose++;
		}
					
	}
	
	cout << "Win :" << win << "   " << "Loose :" << loose << endl;
	
	return 0;
} 
