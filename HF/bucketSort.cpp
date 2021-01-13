#include<iostream> 
#include<stdlib.h>
#include<time.h> 

using namespace std;

int dv(int value, int d){
	int temp = value;
	int res;
	for(int i=0; i < d; i++){
		res = temp%10;
		temp /= 10;
	}
	return res;
}

int *ranNum(int *array, int n){
	for(int i=0; i < n; i++)
		array[i] = rand()%99999+10000;
} 

int *bucketSort(int *array, int n){
	
} 

int main(){
	srand (time(NULL));
	
	int a[100];
	
	ranNum(a,100);
	
	for(int i=0; i < 100; i++) cout << a[i] << endl;
	
		
}
