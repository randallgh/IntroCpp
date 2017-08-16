#pragma once

/*
dayGreeting
Prints a greeting to the console window based on the day, month, and year.
Accepts three integers for the day, month, and year, respectively.
Does not return any information, but does print a message to the terminal.
*/

void dayGreeting(int day, int month, int year);

/*
timeGreeting
Prints a greeting to the console window based on the time.
Accepts two integers for the current hour and minutes.
Does not return any information, but does print a message to the terminal.
*/

void timeGreeting(int hour, int minutes);

/*
isLeapYear
Determines whether or not a given year is a leap year or common year.
Accepts an integer representing the year in question.
Returns true if the year is a leap year, otherwise returns false for common years.
*/

void isLeapYear(int year);
