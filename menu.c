#include<stdio.h>
#include "menu.h"
#include "global.h"
#include "game_service.h"

//Initialize application, output welcome information
void initApplication()
{
	printf("-------------------------------------------\n");
	printf("     ¡ñ¡ð¡ñ¡ð Welcome to Renju Game ¡ð¡ñ¡ð¡ñ\n");
	printf("-------------------------------------------\n");
}
//When exit application, can output the game ending information and release program data
void exitApplication()
{
	printf("-------------------------------------------\n");
		printf("     ¡ñ¡ð¡ñ¡ð Game Over ¡ð¡ñ¡ð¡ñ\n");
		printf("---------------------------------------\n");
	
}
//Print main menu
void printMainMenu()
{
	printf("    Here is the menu~Have a happy time!\n");
	printf("___________________________________________\n");
	printf("1.start game     2.load board    3.rank list\n");
	printf("4.view rules     5.about us      6.exit\n");
	printf("___________________________________________\n");
}
//Start game
void playGame()
{
	int b=0;
	int a=0;
	
	do{
		b=judgeDraw();
		a=setStatus();
		
	}while(b!=1&&a!=1);
	
	if(b==1){
		printf("The game is drawed.\n");
	}
	
	printMainMenu();
}
//Output game rules
void printGameRule()
{
  	printf("I believe you must have learned the rules,so go ahead!\n");	
}
//Output about us
void printAboutUs()
{
	printf("The game is written by YEYE.\n");
}
//Output ranking list
void printRanklist();

//print the chess board
//©Ð©Ø©à©°©´©¸©¼¡ð¡ñ©À©È
void printBoard()
{	
	printf("  ");
	for(int i=0;i<15;i++){
		printf(" %c",'a'+i);
	}
	printf("\n");
	for(int i=1;i<16;i++){
		for(int j=0;j<16;j++){
			if(j==0){
				if(i<10)	printf("%d ",i);
				else	printf("%d",i);
			}
			else{
				printf("%2c",map[i][j]);
			}	
		}
		printf("\n");
	}
}





