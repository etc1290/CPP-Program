#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int tri, max = 0, min;
	
	cin >> tri;
	min = max = tri;
	
	for(int i; i < 2; i++){
		cin >> tri;
		if(tri > max) swap(tri,max);
		else if(tri < min) swap(tri,min);
	}
	
	if(min == 0 || min+tri < max) {
		cout << "Non-Triangle";
		return 0;
	}
	
	if (min == tri && tri == max) cout << "Equilateral ";
	else if (min == tri || tri == max) cout << "Isosceles ";
	
	if(max*max == min*min+tri*tri) cout << "Right Triangle";
	else cout << "Triangle";
	
	
	return 0;
}
