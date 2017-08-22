#include <iostream>
#include "piggyBank.h"
#include "student.h"

int main()
{
	//piggybank bank = { 1, 0, 2, 0, 0, 0, 0 };
	//printf( "%f \n ", calcPiggybankTotal(bank));

	Student jim = { 12006, 1, 45 };
	Student john = { 12007, 2, 29 };
	Student joe = { 12008, 2, 32 };
	Student pop = { 12009, 1, 40 };
	Student yuld = { 12010, 2, 47 };
	Student reck = { 12011, 2, 28 };

	Student students[6] = { jim,john,joe,pop,yuld,reck };

	for (Student element : students) {
		printStudentInfo(element);
	}

	medianStudentTestScore(students, 6);

	for (Student element : students) {
		printStudentInfo(element);
	}

	system("PAUSE");
	return 0;
}