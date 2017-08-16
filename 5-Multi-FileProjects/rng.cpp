#include <iostream>
#include <random>

#include "rng.h"

void seedRng(int seed)
{
	std::srand(seed);
}

int rng()
{
	int generatedNum = std::rand();

	return generatedNum % 100 + 1;
}

int rngRange(int lower, int upper)
{
	int generatedNum = std::rand();
	generatedNum %= upper;

	if (generatedNum < lower)
	{
		return generatedNum + lower;
	} 
	else 
	{
		return generatedNum;
	}
}

bool rngBool()
{
	int num = std::rand() % 2;
	if (num == 0)
	{
		return false;
	} 
	else if (num == 1) 
	{
		return true;
	}
	return false;
}


/*
Generates a random boolean based on a chance value.
Accepts a single integer that represents the chance to return true.
For example, if 50 is provided, that means that there is a 50% chance to get true.
Returns the generated boolean value.

*/
bool rngBoolChance(int chance)
{
	return (rng() <= chance);
}
