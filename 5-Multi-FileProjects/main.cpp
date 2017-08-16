#include <iostream>

#include "func.h"
#include "mathutils.h"
#include "dtgreet.h"

int main()
{
	int minimum = min(123, 1);
	printf("Test %d \n" , minimum);
	std::wcout << Sum(6, 7) + Sum(99, 10) << std::endl;
	system("PAUSE");
	return 0;
}