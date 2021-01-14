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
	cout << "查無資料" <<endl;
	return;
}

void findbyName(Food *list,string ID,int n){
	bool find = false;
	cout << "ID" << "\t" << "Name" << "\t\t" <<  "Factory" << endl;
	for(int i = 0; i < n; i++){
		if(list[i].food == ID){
			if(list[i].bad) cout << "黑心!  ";
			list[i].print();
			find = true;
		}
	}
	if(find) return;
	cout << "查無資料" <<endl;
	return;	
}

void findbyMfr(Food *list,string ID,int n){
	bool find = false;
	cout << "ID" << "\t" << "Name" << "\t\t" <<  "Factory" << endl;
	for(int i = 0; i < n; i++){
		if(list[i].mfr == ID){
			if(list[i].bad) cout << "黑心!  ";
			list[i].print();
			find = true;
		}
	}	
	if(find) return;
	cout << "查無資料" <<endl;
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
		cout << "已將" << ID << "列為黑心企業"; 
		return;
	}
	cout << "查無資料" <<endl;
	return;
}

int main(){
	Food list[20];
	int next = 0;
	char op;
	
	instData(list,50001,"好吃貢丸","家家福",next);
	instData(list,50002,"好吃米粉","家家福",next);
	instData(list,50003,"好吃肉圓","家家福",next);
	instData(list,51001,"NU Pasta","義呆利",next);
	instData(list,51002,"NU spaghetti","義呆利",next);
	instData(list,51003,"NU Lasagne","義呆利",next);
	instData(list,51001,"健康地勾油","頂壞",next);
	instData(list,51002,"真蠱三寶","頂壞",next);
	instData(list,51003,"頂級茴收油","頂壞",next);
	
	while(1){
		int ID;
		string name,mfr;
		cout << "i 插入資料" << endl; 
		cout << "f 以ID查詢資料" << endl;
		cout << "n 以名稱查詢資料" << endl;
		cout << "l 列出所有資料" << endl;
		cout << "b 回報黑心廠商" << endl;
		cout << "m 以廠商查詢資料" << "\n\n";
		cout << "請輸入操作代碼 :";
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
				cout << "請輸入欲查詢ID : ";
				cin >> ID;
				cout << endl;
				findbyID(list,ID,20);
				break;
				
			case 'n':
				cout << "請輸入欲查詢名稱 : ";
				cin >> name;
				cout << endl;
				findbyName(list,name,20);
				break;
				
			case 'm':
				cout << "請輸入欲查詢廠商 : ";
				cin >> mfr;
				cout << endl;
				findbyMfr(list,mfr,20);
				break;
				
			case 'b':
				cout << "請輸入欲回報廠商 : ";
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
