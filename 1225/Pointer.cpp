#include<iostream> 

using namespace std;

bool linerSearch(int x, int n, int *v){
	for(int i = 0; i < n; i++)
		if(*v++ == x) return true;
	return false;
}

void rlinerSearch(int x, int n, int v){
	for(int i = 0; i < n; i++)
		if(v[i] == x) return true;
	return false;
}

int funt(int *c){
	*c += 10;
}
int funValue(int c){
	return c += 10;
}

int funRef(int &c){
	c += 10;
}

int main(){
	int *ptr, a = 100;
	
	
	cout << "New ptr Array:" << endl;
	ptr = new int[10];
	
	for(int i = 0; i < 10; i++)
		ptr[i] = i;
	
	for(int i = 0; i < 10; i++)
		cout << ptr[i] << "  ";
	
	
	cout << "Delete ptr Array:" << endl;
	delete ptr;
	cout << endl;

	for(int i = 0; i < 10; i++)
		cout << ptr[i] << "  ";
	
	cout << "\n\n";
	
	cout << a << endl;
	
	//Call by addreass	
	funt(&a); 
	cout << "Call by addreass: " << a << endl;
	
	//call by Value
	funValue(a);
	cout << "Call by Value: " << a << endl;
	
	//Call by Referance
	funRef(a);
	cout << "Call by Referance: " << a << endl;
	
	
	
}
