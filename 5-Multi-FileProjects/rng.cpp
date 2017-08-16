#include <iostream>

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

	return generatedNum % upper + lower;
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

bool rngBoolChance()
{
	return false;
}
