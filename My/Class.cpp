#include<iostream>

using namespace std;

Template
class Test{
	public:
		int inter;
		char ch;
		int inter2;
		int add();
	

};

int Test::add(){
	return inter+inter2;
}

int main(){
	Test a;
	a.ch = 'a';
	a.inter = 2;
	a.inter2 = 3;
	
	cout << a.add();
} 
