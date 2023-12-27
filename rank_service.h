#ifndef RANK_SERVICE_H
#define RANK_SERVICE_H

int judgeOrder(const int nStep); // Judge ranking order 
void insertRank(const int nPostion, const Rank srRank); // Add ranking player
void saveRanks();// Save ranking data
int getRankSize();// Get the counts of the player in ranking list
int getRanks(Rank* psrRanks, const int nMaxSize); // Get data of the player in ranking list
void initRanks();// Initialize the ranking data
void clearRanks();// Clear the ranking data

#endif
