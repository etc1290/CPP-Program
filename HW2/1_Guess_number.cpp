#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	string input, guess;
	int A = 0,B = 0;
	
	//input
	cin >> input ;
	cin >> guess ;
	
	//compare number
	for(int i = 0; i<input.size(); i++ ){
		if(input[i] == guess[i]) A++;
		else
			for(int j = 0; j<guess.size(); j++)
				if(input[i] == guess[j]) B++;
	
	}
	
	cout << A << "A" << B << "B";
	return 0;
}
