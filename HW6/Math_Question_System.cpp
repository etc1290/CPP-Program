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
	cout << "請依指示輸入設定值已開始作答" << endl;
	//cout << "作答期間如要更改設定請輸入\"S\" 離開請輸入\"E\" \n\n";
	cout << "請輸入位數(1~3):";
	cin >> Digits;
	Digits = powf(10, float(Digits));
	cout << "請輸入出題方式(1:加法 2:減法 3:乘法 4:除法 5:綜合)";
	cin >> Mode;
	
	srand(time(0));
	
	while(x<100){
		int op = Mode;
		if(Mode == 5) {
			op = rand_math(5);
			while(op == 0 || op > 4) op = rand_math(5);
		}
		else if (Mode<1 || Mode>5){
			cout <<"輸入錯誤 請重新輸入模式 :" <<endl;
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
		if(ans == ans_input) cout << "正確" << "\n" << endl;
		else cout << "錯誤，正確答案為" << ans << "\n" << endl;
		x++;
	}
	
	
}
