#include<iostream> 
#include<stdlib.h>
#include<time.h> 

using namespace std;

class PCard{
	public:
		int card[52];
		int next;
		const string suits[4] = {"黑陶","紅心","方塊","梅花"};
		const string face[14] = {"A","1","2","3","4","5","6","7","8","9","I","J","Q","K"};
		
		PCard(){  //建構子,名稱與型別相同,會在被呼叫的時候自動執行 
			for(int i = 0; i < 52; i++) card[i] = i; 
			next = 0;
		}
		
		void suffle(){  //成員函式 
			for(int i = 0; i< 52; i++) swap(card[i],card[rand()%52]);
			next = 0; //洗完牌後歸零 
		}
		
		int *deal(){
			int *h = new int[5];
			for(int i = 0; i < 5; i++) h[i] = card[next++];
			return h;
		}
		
		void show(int *x){
			for(int i = 0; i < 5; i++) cout << suits[gets(x[i])]<< " " <<face[getf(x[i])] << "\t";
			if(four(x)) {
				cout <<"  Four of a kind!";
				cout << "\n\n";
				system("pause");
				return;
			}
			if(fullHouse(x)) {
				cout <<"  Full House!";
				cout << "\n\n";
				return;
			}
			if(three(x)) {
				cout <<"  Three of a kind!";
				cout << "\n\n";
				return;
			}
			if(twoPair(x)) {
				cout <<"  Two Pair!";
				cout << "\n\n";
				return;
			}
			if(Pair(x)) {
				cout <<"  Pair!";
				cout << "\n\n";
				return;
			}
			
			cout << "\n\n";
			return;	
		}
		int getf(int c){
			return c%13;
		}
		int gets(int c){
			return c/13;
		}
		bool Pair(int *x){
			int count[13] = {};
			for(int i = 0; i < 5;i++) count[getf(x[i])]++;
			int count2 = 0;
			for(int i = 0; i< 13; i++)
				if(count[i] == 2) count2++;
			if(count2 == 1) return true;
			return false;
		}
		bool twoPair(int *x){
			int count[13] = {};
			for(int i = 0; i < 5;i++) count[getf(x[i])]++;
			int count2 = 0;
			for(int i = 0; i< 13; i++)
				if(count[i] == 2) count2++;
			if(count2 == 2) return true;
			return false;
		}
		bool three(int *x){
			int count[13] = {};
			for(int i = 0; i < 5;i++) count[getf(x[i])]++;
			int count2 = 0;
			for(int i = 0; i< 13; i++)
				if(count[i] == 3) count2++;
			if(count2) return true;
			return false;
		}
		bool four(int *x){
			int count[13] = {};
			for(int i = 0; i < 5;i++) count[getf(x[i])]++;
			int count2 = 0;
			for(int i = 0; i< 13; i++)
				if(count[i] == 4) return true;
			return false;
		}
		bool fullHouse(int *x){
			int count[13] = {};
			for(int i = 0; i < 5;i++) count[getf(x[i])]++;
			bool bool1 = 0, bool2 = 0;
			for(int i = 0; i< 13; i++){
				if(count[i] == 3) bool1++;
				if(count[i] == 2) bool2++;
			}
				
			if(bool1 && bool2) return true;
			return false;
		}
		
		
};

int main(){
	srand (time(NULL));
	PCard a,b;
	int *hand;
	a.suffle();
	for(int j=0; j < 1000;j++){
		for(int i = 0; i < 10; i++){
			hand = a.deal();
			a.show(hand);
		}
		a.suffle();
	}
	
	
		
	return 0;
}
