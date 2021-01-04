#include<iostream> 

using namespace std;

void Eratosthenes(bool prime[], int n) 
{ 
    for (int p=2; p*p<=n; p++) { 
        if (prime[p] == true) { 
            for (int i=p*2; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
     
} 

int main(){
	int  n = 10000;
	bool prime[n+1];
	
	for(int i = 0; i < n+1; i++){
		prime[i] = true;
	} 
	
	Eratosthenes(prime, n);
	
	for (int p=2; p<=n; p++) 
       if (prime[p]) 
          cout << p << " ";
		
}
