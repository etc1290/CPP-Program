#include<iostream> 
#include<stdlib.h>
#include<time.h> 

using namespace std;

int dir[8][2] = {(1,2),(1,-2),(-1,2),(-1,-2),(2,1),(2,-1),(-2,1),(-2,-1)};
int count = 0;

bool isValid(int x, int y){
	if(x > 8 || y > 8 || x<0 || y<0){
		return true;
	}
	return false;
}

void knightWalk(bool (*board)[8][8], int x ,int y){
	int i = 0;
	cout << "ok";
	if(x > 8 || y > 8 || x<0 || y<0) return;
	while (i<8) {
		if(isValid(x+dir[i][0],y+dir[i][1]) && !(*board)[x+dir[i][0]][y+dir[i][1]]){
			(*board)[x+dir[i][0]][y+dir[i][1]] = true;
			cout << "(" << x <<","<< y << ") " << count << endl;
			knightWalk(board, x+dir[i][0] ,y+dir[i][1]);
			count++;
		}
		i++;
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
	int initX = rand()%8, initY = rand()%8;
	chessBoard[initX][initY] = true;
	knightWalk(&chessBoard, initX ,initY);
	
	return 0;
}
