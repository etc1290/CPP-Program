#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	float height , weight, BMI;

	//Input
	cout << "�п�J����(����): ";
	cin >> height;
	cout << "�п�J�魫(����): ";
	cin >> weight;

	BMI = weight/(height*height);

	cout << "BMI: " << BMI << endl;

	if(BMI<18.5) cout << "�L��";
	else if(18.5 <= BMI < 25) cout << "���`";
	else if(25 <= BMI < 30) cout << "�ӭD";
	else if(BMI >=30) cout << "�L�D";




	return 0;
}
