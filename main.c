#include<stdio.h>
#include<stdlib.h>
#include "menu.h"
#include "global.h"
#include "game_service.h"
#include "rank_file.h"
#include "rank_service.h"

//char map[17][17];

int main()
{
	initApplication();
	printMainMenu();
	initStatus();
	
	int select;
	
	do{
		printf("Please select menu item number:");
			
		scanf("%d",&select);
		
		switch(select){
			case 1:
				playGame();
				initStatus();
				break;
			case 2:
				initStatus();
				printBoard();
				break;
			case 3:
//				printRanklist();
				break;
			case 4:
				printGameRule();
				break;
			case 5:
				printAboutUs();
				break;
			case 6:
				printf("\nThanks for playing~Have a nice day!\n");
				exit(1);
				break;
			default:
				printf("\nInvailed enter!Please enter again!\n");
				break;
		}
		
	}while(1);
	
	return 0;
}
