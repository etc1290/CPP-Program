#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	float height , weight, BMI;

	//Input
	cout << "請輸入身高(公尺): ";
	cin >> height;
	cout << "請輸入體重(公斤): ";
	cin >> weight;

	BMI = weight/(height*height);

	cout << "BMI: " << BMI << endl;

	if(BMI<18.5) cout << "過輕";
	else if(18.5 <= BMI < 25) cout << "正常";
	else if(25 <= BMI < 30) cout << "太胖";
	else if(BMI >=30) cout << "過胖";




	return 0;
}
