#include "vector2D.h"

Vector2D sumVectors(Vector2D v1, Vector2D v2) 
{
	Vector2D sum;
	sum.x = v1.x + v2.x;
	sum.y = v1.y + v2.y;

	return sum;
}

Vector2D diffVectors(Vector2D v1, Vector2D v2) 
{
	Vector2D dif;
	dif.x = v1.x - v2.x;
	dif.y = v1.y - v2.y;

	return dif;
}