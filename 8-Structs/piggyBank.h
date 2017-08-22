#pragma once

struct piggybank
{
	int numOnes;
	int numTwos;
	int numFives;
	int numQuarters;
	int numDimes;
	int numNickels;
	int numPennies;
};

// Returns the total monetary value of all dollar bills.
float calcPiggybankNotes(piggybank piggy);

// Returns the total monetary value of all coins.
float calcPiggybankCoins(piggybank piggy);

// Returns the total monetary value of the piggybank's contents.
float calcPiggybankTotal(piggybank piggy);