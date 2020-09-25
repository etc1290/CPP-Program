#include <iostream>
#include <bitset>

using namespace std;

int main(int argc, char** argv) {
	short x = 0x8000;	
	
	bitset<16> bx(x);
	
	cout<< "short" << endl;
	cout<< "Input  : " << x << endl;
	cout << "BIN    : " << bx << endl << endl;
	
	unsigned short y = 0xffff;
	bitset<16> by(y);
	
	cout<< "unsigned short" << endl;
	cout<< "Input  : " << y << endl;
	cout << "BIN    : " << by << endl << endl;
	
	char c = 0;
	bitset<8> bc(c);
	
	cout<< "char" << endl;
	cout<< "Input  : " << c << "==>" << (int)c << endl;
	cout << "BIN    : " << bc << endl << endl;
	
	c = '0';
	bc = c;
	
	cout<< "char" << endl;
	cout<< "Input  : " << c << "==>" << (int)c << endl;
	cout << "BIN    : " << bc << endl << endl;
	
	c = '9';
	bc = c;
	
	cout<< "char" << endl;
	cout<< "Input  : " << c << "==>" << (int)c << endl;
	cout << "BIN    : " << bc << endl << endl;
	
	c = 'a';
	bc = c;
	
	cout<< "char" << endl;
	cout<< "Input  : " << c << "==>" << (int)c << endl;
	cout << "BIN    : " << bc << endl << endl;
	
	c = 'A';
	bc = c;
	
	cout<< "char" << endl;
	cout<< "Input  : " << c << "==>" << (int)c << endl;
	cout << "BIN    : " << bc << endl << endl;
	
	c = 'z';
	bc = c;
	
	cout<< "char" << endl;
	cout<< "Input  : " << c << "==>" << (int)c << endl;
	cout << "BIN    : " << bc << endl << endl;
	
	c = 'Z';
	bc = c;
	
	cout<< "char" << endl;
	cout<< "Input  : " << c << "==>" << (int)c << endl;
	cout << "BIN    : " << bc << endl << endl;
	
	unsigned char uc = 0xff;
	bitset<8> buc(uc);
	
	cout<< "unsigned char" << endl;
	cout<< "Input  : " << uc << endl;
	cout << "BIN    : " << buc << endl << endl;
	
	bool b = false;
	bitset<1> bb(b);
	
	cout<< "bool" << endl;
	cout<< "Input  : " << b << endl;
	cout << "BIN    : " << bb << endl << endl;
	
	b = true;
	bb = b;
	
	cout<< "bool" << endl;
	cout<< "Input  : " << b << endl;
	cout << "BIN    : " << bb << endl << endl;
	
	
	  
	return 0;
}
