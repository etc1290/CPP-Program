#include<iostream> 
#include<cstdlib>
#include<ctime> 

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
		array[i] = rand()%89999+10000;
} 

int *bucketSort(int *array, int n, int m){
	int temp[100], x = 0;
		for(int j = 0; j < 10; j++){
			for(int k = 0; k < n; k++){
				if(dv(array[k],m) == j){
					temp[x] = array[k];
					x++;
				}
			}
		}
		for(int m = 0; m < n; m++){
			array[m] = temp[m];	
		}
} 

int main(){
	srand (time(NULL));
	
	int a[100];
	
	ranNum(a,100);
	for(int i=0; i < 100; i++) cout << a[i] << "  ";
	cout << "\n\n";
	
	for(int j = 1; j <= 5; j++){
		bucketSort(a,100,j);
		for(int i=0; i < 100; i++) cout << a[i] << "  " ;
		cout << "\n\n";
	}
	
	for(int i=0; i < 100; i++) cout << a[i] << endl;
		
}
