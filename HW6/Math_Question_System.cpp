#include<iostream>
#include <stdlib.h>
#include <time.h>
#include<math.h>

using namespace std;

int rand_math(int di){
	double ran = di * rand() / (RAND_MAX + 1);
	return int(ran);
}

int main(){
	int Digits,Mode,x = 0;
	char char_op;
	float ans,ans_input;
	cout << "�Ш̫��ܿ�J�]�w�Ȥw�}�l�@��" << endl;
	//cout << "�@�������p�n���]�w�п�J\"S\" ���}�п�J\"E\" \n\n";
	cout << "�п�J���(1~3):";
	cin >> Digits;
	Digits = powf(10, float(Digits));
	cout << "�п�J�X�D�覡(1:�[�k 2:��k 3:���k 4:���k 5:��X)";
	cin >> Mode;
	
	srand(time(0));
	
	while(x<100){
		int op = Mode;
		if(Mode == 5) {
			op = rand_math(5);
			while(op == 0 || op > 4) op = rand_math(5);
		}
		else if (Mode<1 || Mode>5){
			cout <<"��J���~ �Э��s��J�Ҧ� :" <<endl;
		}
		
		int a = rand_math(Digits);
		int b = rand_math(Digits);
		if(op == 4){
			while(b == 0 || a/b < 1) b = rand_math(Digits);
		}
		switch(op){
			case 1:
				char_op = '+';
				ans = a+b;
				break;
			case 2:
				char_op = '-';
				ans = a-b;
				break;
			case 3:
				char_op = 'x';
				ans = a*b;
				break;
			case 4:
				char_op = '/';
				ans = a/b;
				break;
		}
		cout << a << char_op << b << endl;
		cin >> ans_input;
		if(ans == ans_input) cout << "���T" << "\n" << endl;
		else cout << "���~�A���T���׬�" << ans << "\n" << endl;
		x++;
	}
	
	
}
