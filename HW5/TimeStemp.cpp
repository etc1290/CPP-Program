#include <iostream>
#include <string.h>
using namespace std;
int timespamp(int hr, int min, int sec){
	return sec+60*min+60*60*hr;
}

int second(int ts){
	return ts%60;
}

int minute(int ts){
	return (ts/60)%60;
}

int hour(int ts){
	return ts/60/60;
}

int main()
{
	char input[7] = " ";
	int time[3] = {0},j=0,sec;
	
	cin >> input;
	for(int i = 0; i<6; i++){
		time[j] = time[j]*10+input[i]-'0';
		if((i+1)%2 == 0) j++;	
	}
	cout << time[0] << ":" << time[1]<< ":" << time[2] << endl;
	sec = timespamp(time[0], time[1],time[2]);

	cin >> input;
	j = 0;
	memset(time,0,sizeof time);
	for(int i = 0; i<6; i++){
		time[j] = time[j]*10+input[i]-'0';
		if((i+1)%2 == 0) j++;
	}
	cout << time[0] << ":" << time[1]<< ":" << time[2] << endl;
	sec -= timespamp(time[0], time[1],time[2]);
	
	cout << endl; 
	if(sec < 0){
		sec = -sec;
		cout << "Forword: " << sec;
	}else{
		cout << "Backword: " << sec;
	}
	cout << "\n\n";
	cout << hour(sec) << "hr " << minute(sec) << "min " << second(sec) << "sec" << endl;
    return 0;
}
