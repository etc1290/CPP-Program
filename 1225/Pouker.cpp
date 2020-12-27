#include<iostream> 
#include <stdlib.h>
#include<time.h> 
using namespace std;

string show(int c){
	string suits[] = {"¶Â³³","¬õ¤ß","¤è¶ô","±öªá"};
	string face[] = {"A","1","2","3","4","5","6","7","8","9","i","j","q","k"};
	string card = "";
	card += suits[c/13];
	card += face[c%13];
	return card;
}

void porksawp(int x, int card[]){
	int temp;
	int ran = rand()%52;
	temp = card[x];
	card[x] = card[ran];
	card[ran] = temp;
}


int main(){
	int card[52];
	for(int i = 0; i < 52; i++){
		card[i] = i;
	}
	srand (time(NULL));
	cout << show(rand()%52) << "\n\n";
	
	for(int i = 0; i < 26; i++)
		porksawp(i,card);
	
	int x = 0;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 5; j++){
			cout << show(card[x]) << endl;
			x++;
		}
		cout << "\n\n";
	}
		
}
