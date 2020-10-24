#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int d = 0, f = 0, b = 0, cycle, time, delt, x;
	
	//input
	cout << "Total Distance: ";
	cin >> d ;
	cout << "Forward Distance: ";
	cin >> f ;
	cout << "Backward Distance: ";
	cin >> b ;
	
	//counting
	d -= f;
	delt = f-b;
	
	//zero chack
	if(delt <= 0) return 0;
	
	//Time and cycle
	cycle = d/delt;
	x = d%delt;
	if(d>cycle*delt) cycle++;
	time = cycle * 35;
	d += f; 
	if(d-cycle*delt > 0) time += 30; 
	
	
	//cout << cycle*delt << endl;
	//cout << x << endl;
	cout << "\n" << "Total Time : " << time/60 << "h" << time%60 << \
	"min" << "(" << time << "min)";
	return 0;
}
