#include "piggyBank.h"

// Returns the total monetary value of all dollar bills.
float calcPiggybankNotes(piggybank piggy) 
{
	return piggy.numOnes * 1.0f + piggy.numTwos * 2.0f + piggy.numFives * 5.0f;
}

// Returns the total monetary value of all coins.
float calcPiggybankCoins(piggybank piggy) 
{
	return piggy.numPennies * 0.01f +
		   piggy.numNickels * 0.05f +
		   piggy.numDimes * 0.1f	+
		   piggy.numQuarters * 0.25f;
}

// Returns the total monetary value of the piggybank's contents.
float calcPiggybankTotal(piggybank piggy)
{
	return calcPiggybankNotes(piggy) + calcPiggybankCoins(piggy);
}