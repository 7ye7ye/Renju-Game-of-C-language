#ifndef RANK_FILE_H
#define RANK_FILE_H

#include "model.h"

int writeRanklist(Rank* psrRanks, const int nSize); // Write ranking information to the file

int readRanklist(Rank* psrRanks, const int nMaxSize); // Read player ranking list from the file

int getRanklistCount();// Get the count of the player in ranking list from ranking list file

#endif
