#include<iostream> 
#include<stdlib.h>
#include<time.h> 
using namespace std;

void BubbleSort(int arr[], int size){
	for(int j = 0; j < size-1; j++){
		for(int i = 0; i < size-1; i++){
			if(arr[i+1] < arr[i]) swap(arr[i+1],arr[i]);
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
		int ran = rand()%size;
		swap(arr[i],arr[ran]);
	}
}

void printAll(int arr[], int size){
	for(int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << endl;
}

void randomFill(int arr[], int size){
	for(int i = 0; i < size; i++){
		arr[i] = rand()%size;
	}
}


int main(){
	//Set Rendom Seed
	srand (time(NULL));
	
	int arr1[31];
	int arr1_Len = sizeof(arr1)/sizeof(arr1[0]);
	randomFill(arr1, arr1_Len);
	
	BubbleSort(arr1, arr1_Len);
	printAll(arr1, arr1_Len);
		
}
