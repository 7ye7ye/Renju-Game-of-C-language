#include "game_service.h"
#include "global.h"
#include<stdio.h>

//char map[17][17];
int cnt=0;

int judgeHorizontal(int x,int y)// judge the continuous stone number of horizontal diagonal
{
	int i=0;
	int location=y;
	char player=map[x][y];
//往后找
	while(y<16&&map[x][y]==player){
		y++;
		i++;
	}
//往前找
	y=location;
	while(y>0&&map[x][y]==player){
		y--;
		i++;
	}	
//注意location处重复计算了一遍，所以需要i>5	
	if(i>5)	return 1;
	else	return 0;
}
int judgeVertical(int x,int y)// judge the continuous stone number of vertical diagonal
{
	int i=0;
	int location=x;
	char player=map[x][y];
		
	while(x<16&&map[x][y]==player){
		x++;
		i++;
	}
	
	x=location;
	while(x>0&&map[x][y]==player){
			x--;
			i++;
		}
		
	if(i>5)	return 1;
	else	return 0;

}
int judgeHyperphoria(int x,int y)// judge the continuous stone number of positive diagonal
{
	int i=0;
	int location1=x,location2=y;
	char player=map[x][y];
	
	while(y<16&&x<16&&map[x][y]==player){
		y++;
		x++;
		i++;
	}
	
	x=location1;
	y=location2;
		while(x>0&&y>0&&map[x][y]==player){
				x--;
				y--;
				i++;
			}
	
	if(i>5)	return 1;
	else	return 0;	
	return 0;
}
int judgeHypophoria(int x,int y)// judge the continuous stone number of opposite diagonal
{
	int i=0;
	int location1=x,location2=y;
	char player=map[x][y];
	
	while(y>0&&x<16&&map[x][y]==player){
		y--;
		x++;
		i++;
	}
	
	x=location1;
	y=location2;
			while(x>0&&y>0&&map[x][y]==player){
					x--;
					y++;
					i++;
				}
	
	if(i>5)	return 1;
	else	return 0;
	return 0;
}
void initStatus()// Initialize the board status value,the status value is set to be blank.
{
	for(int i=1;i<16;i++){
		for(int j=1;j<16;j++){
			map[i][j]='-';
		}
	}
}
int isGetStatus(int x,int y)// 判断输入是否合法
{
	if(map[x][y]!='-'){
		printf("This position is occupied, please re-enter:");
		return 0;
	}
	else if(x<1||y<1||x>15||y>15){
		printf("Please place your pieces on the board:");
		return 0;
	}	
	else return 1;
}

int setStatus() // Set status value of the coordinates of the board
{
	printf("Please enter the location of your drop(eg.1a):");
	int row;
	char col;
	
	int isAble=0;
	
	do{
		scanf("%d%c",&row,&col);
		isAble=isGetStatus(row,col-'a'+1);
	}while(isAble!=1);
	
	cnt++;
	if(cnt%2==0){
		map[row][col-'a'+1]='o';
	}
	else{
		map[row][col-'a'+1]='x';
	}
	system("cls");
	printBoard();
	
	int is;
	is=judge(row,col-'a'+1);
	
	if(is!=0)	return 1;
	else	return 0;
}
int judge(int x,int y)// Judge if one side wins
{
	int a=judgeHorizontal(x,y);
	int b=judgeVertical(x,y);
	int c=judgeHyperphoria(x,y);
	int d=judgeHypophoria(x,y);
	
	if(a==1||b==1||c==1||d==1)
	{
		printf("Game over!\n");
		if(map[x][y]=='x'){
			printf("The balck beats the white!\n");
			return -1;
		}
		else{
			printf("The white beats the black!\n");
			return 1;
		}
	}
	
	return 0;
}
int judgeDraw()// Judge if the game is draw
{
	int ret=1;
	
	for(int i=1;i<16;i++){
		for(int j=0;j<16;j++){
			if(map[i][j]=='-'){
				ret=0;
				break;
			}
		}
		if(ret==0)	break;	
	}
	
	return ret;
}
