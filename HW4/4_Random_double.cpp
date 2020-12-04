#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

double rand_double(){
	return 2.0 * rand() / (RAND_MAX + 1.0) -1;
}
int main(){
  srand( time(0) );


  double a,b;
  float n = 0;
  
  for(int i = 0; i<1000000; i++) {
  	a = rand_double();
  	b = rand_double();
  	if(a*a+b*b < 1) n++;
  }
	cout << n << endl;
	cout << 4*n/1000000;

  return 0;
}
