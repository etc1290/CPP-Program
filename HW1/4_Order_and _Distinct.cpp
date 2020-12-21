#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int input;
	bool distinct = false, order = true;
	cin >> input;
	int a[4];

	for(int i= 0; i<4; i++){
        a[i] = input%10;
        input = input/10;
        cout << a[i] << endl;
	}

	for(int i= 0; i<4; i++){
       for(int j=i+1;j<4;j++){
        if(a[i] == a[j]){
            distinct = true;
        }
        if(a[i] < a[j]){
            order = false;
        }
       }
	}



	if(distinct)
        cout << "distinct"<<endl;
    else
        cout << "not distinct"<<endl;

    if(order)
        cout << "order"<<endl;
    else
        cout << "not order"<<endl;




	return 0;
}
