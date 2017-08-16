#pragma once

/*
seedRng
Seeds the random number generator with a given integer value.
Accepts an integer to use as the seed value for the random number generator.
Does not return any information.
*/

void seedRng(int seed);

/*
rng
Generates a random number between 1 and 100.
Does not accept any additional information.
Returns the generated random number.
*/

int rng();

/*
rngRange
Generates a random number based on a given range.
Accepts two integers that represent the lower bound and upper bound of the range.
Returns the generated random number.
*/

int rngRange(int lower, int upper);

/*
Rngb
Generates a random boolean.
Does not accept any information.
Returns the generated boolean value.
*/

bool rngBool();

/*
rngbChance
Generates a random boolean based on a chance value.
Accepts a single integer that represents the chance to return true.
For example, if 50 is provided, that means that there is a 50% chance to get true.
Returns the generated boolean value.
*/

bool rngBoolChance();