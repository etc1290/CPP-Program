#include<iostream> 
#include<stdlib.h>
#include<time.h> 
using namespace std;

void BubbleSort(int arr[], int size){
	for(int j = 0; j < size-1; j++){
		for(int i = 0; i < size-1; i++){
			if(arr[i+1] > arr[i]) swap(arr[i+1],arr[i]);
		}
	} 
	return;
}

void InitOrderarr(int arr[], int size){
	for(int i = 0; i < size; i++) arr[i] = i;
	return;
}

void shuffle(int arr[],int size){
	for(int i = 0; i < size/2; i++){
		int ran = rand()%52;
		swap(arr[i],arr[ran]);
	}
}

void printAll(int arr[], int size){
	for(int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << endl;
}


int main(){
	//Set Rendom Seed
	srand (time(NULL));
	
	//Initiallize array
	int card[52];
	int arrLen = sizeof(card)/sizeof(card[0]);
	
	InitOrderarr(card, arrLen);
	printAll(card, arrLen);
	
	shuffle(card, arrLen);
	printAll(card, arrLen);
	
	BubbleSort(card, arrLen);
	printAll(card, arrLen);
		
}
