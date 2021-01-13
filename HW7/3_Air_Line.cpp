#include<iostream> 

using namespace std;


int main(){
	bool seat[10];
	char c_input;
	int passanger, pos;
	
	for(int i = 0; i < 10; i++) seat[i] = true;
	
	while(1){
		cout << "Enter the booking system enter y or leave enter e" << endl;
		cin >> c_input;
		if(c_input == 'e'|| c_input == 'E') break;
		
		cout << "how many passanger ?(1~5)" << endl;
		cin >> passanger;
		cout << endl;
		
		booking:
		cout << "1 means available 0 means this seats are booked." << endl;
		cout << "number" << "\t\t";
		for(int i = 0; i < 10; i++) cout << i << "  ";
		cout << endl;
		cout << "available" << "\t";
		for(int i = 0; i < 10; i++) cout << seat[i] << "  ";
		cout << "\n" << "Enter the seat number you want to book" << endl;
		cin >> pos; 
		cout << "\n\n";
		
		if(seat[pos]) seat[pos] = false;
		else {
			cout << "This seat has been booked, please choose other seat" << endl;
			goto booking;
		}
		
		if(passanger>1){
			cout << "Please choose other seat for other passanger"<< endl;
			passanger--;
			goto booking;
		} 
		
		
		
	}
	
	for(int i = 0; i < 10; i++) cout << seat[i] << "  ";
		
}
