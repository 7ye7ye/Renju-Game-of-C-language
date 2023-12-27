#ifndef GAME_SERVICE_H
#define GAME_SERVICE_H

#include "model.h"

int judgeHorizontal(int,int); // judge the continuous stone number of horizontal diagonal

int judgeVertical(int,int); // judge the continuous stone number of vertical diagonal

int judgeHyperphoria(int,int); // judge the continuous stone number of positive diagonal

int judgeHypophoria(int,int); // judge the continuous stone number of opposite diagonal

void initStatus();// Initialize the board status value,the status value is set to be blank.

int isGetStatus(int,int); // Get status value of the coordinates of the board 

int setStatus(); // Set status value of the coordinates of the board

int judge(int,int); // Judge if one side wins

int judgeDraw();// Judge if the game is draw

#endif 
