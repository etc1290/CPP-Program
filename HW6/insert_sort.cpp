#include<iostream>



using namespace std;
void ssort(int n, int v[]){
	int temp;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(v[j] < v[i] ){
				temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
	}
	for(int i =0; i < n; i++)
		cout << v[i] << " ";
	return;
}

void ssr(int n, int m, int v[]){
	static int c = m;
	int temp;
	if(c < n-1) {
		for(int j = c + 1; j < n; j++){
			if(v[j] < v[c] ){
				temp = v[c];
				v[c] = v[j];
				v[j] = temp;
			}
		}
		return ssr(n,c++,v);
	}
	else return;
}

int main(){
	int a[10] = {3,5,6,7,4,2,3,8,9,10},b[10] = {3,5,6,7,4,2,3,8,9,10};
	ssort(10,a);
	cout << endl;
	for(int i=0; i<10;i++) cout << a[i] << " ";
	
	ssr(10,0,b);
	cout << endl;
	for(int i=0; i<10;i++) cout << b[i] << " ";
	return 0;
}
