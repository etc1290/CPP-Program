#include<iostream> 
#include<stdlib.h>
#include<time.h> 

using namespace std;

int dir[8][2] = {{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};
int count = 0;

bool isValid(bool (*board)[8][8],int x, int y){
	if(x >= 8 || y >= 8 || x<0 || y<0 || (*board)[x][y]){
		return false;
	}
	return true;
}

void knightWalk(bool (*board)[8][8], int x ,int y){
	for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cout << isValid(board,i,j) << "  ";
        }
        cout << endl;
    }
    cout << endl;
	if(!isValid(board,x,y)) return;
	for(int i = 0; i < 8; i++) {
		if(isValid(board,x,y)){
			(*board)[x][y] = true;
			cout << "(" << x+dir[i][0] <<","<< y+dir[i][1] << ") " << count << endl;
			knightWalk(board, x+dir[i][0] ,y+dir[i][1]);
			count++;
		}
	}
	return;
}

int main(){
	srand (time(NULL));
	
	bool chessBoard[8][8];
	for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            chessBoard[i][j] = false;
        }
    }
	int initX = rand()%7, initY = rand()%7;
	knightWalk(&chessBoard, initX ,initY);
	
	return 0;
}
