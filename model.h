#ifndef MODEL_H
#define MODEL_H

//Status type of coordinate point
enum PointStatus
{
	STATUS_BLANK=0,
	STATUS_BLACK=-1,
	STATUS_WHITE=1
};

//Coordinate point data
typedef struct PointStatu
{
	int row;	//row number
	int col;	//column number
	int status;	//The current point status,get value to pointstatus type
}Point;

typedef struct RANK
{
	int player;
}Rank;

#endif
