#include <math.h>::sqrt

#include "mathutils.h"

int min(int a, int b)
{
	if (a > b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int clamp(int lower, int upper, int value)
{
	if (value > upper)
	{
		return upper;
	}
	else if (value < lower)
	{
		return lower;
	}
	else
	{
		return value;
	}
}

int dist(int x1, int y1, int x2, int y2)
{
	float distance = 0;

	int y = y2 - y1;
	int x = x2 - x1;

	return sqrt(x*x + y*y);
}
