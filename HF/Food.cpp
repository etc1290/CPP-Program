#include<iostream> 
#include <string>

using namespace std;

class Food{
	public:
		int id =0;
		bool bad = false;
		string food, mfr;
		
		void init(int i, string f, string m){
			id = i;
			food = f;
			mfr = m;
		}
		void print(){
			cout << id << "\t" << food << "\t" << mfr << endl;
		}
		
};

void printList(Food *list, int n){
	cout << "ID" << "\t" << "Name" << "\t\t" <<  "Factory" << endl;
	for(int i = 0; i < n; i++){
		if(list[i].id){
			list[i].print();
		}
	}
} 

void instData(Food *list, int id, string name , string mfr, int &next){
	list[next].init(id,name,mfr);
	next++;
}

void findbyID(Food *list,int ID,int n){
	bool find = false;
	cout << "ID" << "\t" << "Name" << "\t\t" <<  "Factory" << endl;
	for(int i = 0; i < n; i++){
		if(list[i].id == ID){
			list[i].print();
			find = true;
		}
	}	
	if(find) return;
	cout << "�d�L���" <<endl;
	return;
}

void findbyName(Food *list,string ID,int n){
	bool find = false;
	cout << "ID" << "\t" << "Name" << "\t\t" <<  "Factory" << endl;
	for(int i = 0; i < n; i++){
		if(list[i].food == ID){
			if(list[i].bad) cout << "�¤�!  ";
			list[i].print();
			find = true;
		}
	}
	if(find) return;
	cout << "�d�L���" <<endl;
	return;	
}

void findbyMfr(Food *list,string ID,int n){
	bool find = false;
	cout << "ID" << "\t" << "Name" << "\t\t" <<  "Factory" << endl;
	for(int i = 0; i < n; i++){
		if(list[i].mfr == ID){
			if(list[i].bad) cout << "�¤�!  ";
			list[i].print();
			find = true;
		}
	}	
	if(find) return;
	cout << "�d�L���" <<endl;
	return;
}


void bad(Food *list,string ID,int n){
	bool find = false;
	for(int i = 0; i < n; i++){
		if(list[i].mfr == ID){
			list[i].bad = true;
			find = true;
		}
	}	
	if(find) {
		cout << "�w�N" << ID << "�C���¤ߥ��~"; 
		return;
	}
	cout << "�d�L���" <<endl;
	return;
}

int main(){
	Food list[20];
	int next = 0;
	char op;
	
	instData(list,50001,"�n�Y�^�Y","�a�a��",next);
	instData(list,50002,"�n�Y�̯�","�a�a��",next);
	instData(list,50003,"�n�Y�׶�","�a�a��",next);
	instData(list,51001,"NU Pasta","�q�b�Q",next);
	instData(list,51002,"NU spaghetti","�q�b�Q",next);
	instData(list,51003,"NU Lasagne","�q�b�Q",next);
	instData(list,51001,"���d�a�Īo","���a",next);
	instData(list,51002,"�u�ۤT�_","���a",next);
	instData(list,51003,"���ů����o","���a",next);
	
	while(1){
		int ID;
		string name,mfr;
		cout << "i ���J���" << endl; 
		cout << "f �HID�d�߸��" << endl;
		cout << "n �H�W�٬d�߸��" << endl;
		cout << "l �C�X�Ҧ����" << endl;
		cout << "b �^���¤߼t��" << endl;
		cout << "m �H�t�Ӭd�߸��" << "\n\n";
		cout << "�п�J�ާ@�N�X :";
		cin >> op; 
		switch(op){
			case 'i':
				cin >> ID >> name >> mfr;
				instData(list,ID,name,mfr,next);
				break;
				
			case 'd':
				cin >> ID >> name >> mfr;
				delData(list,ID,name,mfr,next);
				break;
			
			case 'f':
				cout << "�п�J���d��ID : ";
				cin >> ID;
				cout << endl;
				findbyID(list,ID,20);
				break;
				
			case 'n':
				cout << "�п�J���d�ߦW�� : ";
				cin >> name;
				cout << endl;
				findbyName(list,name,20);
				break;
				
			case 'm':
				cout << "�п�J���d�߼t�� : ";
				cin >> mfr;
				cout << endl;
				findbyMfr(list,mfr,20);
				break;
				
			case 'b':
				cout << "�п�J���^���t�� : ";
				cin >> mfr;
				cout << endl;
				bad(list,mfr,20);
				break;
				
			case 'l':
				printList(list, 20);
				break;
		}
		cout << "\n\n\n";
	}
		
}
