#include <iostream>::printf

#include "dtgreet.h"

//Prints a greeting to the console window based on the day, month, and year.
void dayGreeting(int day, int month, int year)
{
	printf("%d/%d/%d \n", day, month, year);
}

//Prints a greeting to the console window based on the time.
void timeGreeting(int hour, int minutes)
{
	printf("%d%d", hour, minutes);
}

//Determines whether or not a given year is a leap year or common year.
void isLeapYear(int year)
{
	printf("%d", year);
}
