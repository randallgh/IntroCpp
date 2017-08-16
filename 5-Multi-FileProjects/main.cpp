#include <iostream>
#include <chrono>


#include "func.h"
#include "mathutils.h"
#include "dtgreet.h"
#include "rng.h"

int main()
{
	/*
	int minimum = min(123, 1);
	printf("Test %d \n" , minimum);
	std::cout << Sum(6, 7) + Sum(99, 10) << std::endl;
	dayGreeting(9, 3, 1997);
	timeGreeting(10, 28);
	isLeapYear(2003);
	isLeapYear(2000);
	isLeapYear(2004);
	*/
	int seed = 0; 

	seed = std::chrono::system_clock::now().time_since_epoch().count();
	seedRng(seed);
	//printf("%d \n", rng());
	//printf("%s", rngBool() == 1 ? "true" : "false");
	printf("%d \n", rngRange(100, 1000));

	system("PAUSE");
	return 0;
}