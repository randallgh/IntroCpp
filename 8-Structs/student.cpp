#include <iostream>

#include "student.h"


void printStudentInfo(Student stu) {
	printf("%d, %d, %d, \n", stu.id, stu.course, stu.lastScore);
}

float averageStudentTestScore(Student stu[], int length)
{
	int sum = 0;
	
	for (int i = 0; i < length; i++)
	{
		sum += stu[i].lastScore;
	}

	return sum / length;
}

//Sorting ascending

bool isAscended(Student a[], int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		if (a[i].lastScore > a[i + 1].lastScore)
		{
			return false;
		}
	}

	return true;
}

void sortAscending(Student a[], int length)
{
	Student temp;

	while (!isAscended(a, length))
	{
		for (int i = 0; i < length - 1; i++)
		{
			if (a[i].lastScore > a[i + 1].lastScore)
			{
				temp = a[i + 1];
				a[i + 1] = a[i];
				a[i] = temp;
			}
		}
	}
}

float medianStudentTestScore(Student a[], int length)
{
	//Sort
	sortAscending(a, length);
	//Find median
	int temp1 = 0;
	int temp2 = 0;

	if ((length % 2) == 0) {
		temp1 = a[length / 2].lastScore;
		temp2 = a[(length / 2) + 1].lastScore;

		return (temp1 + temp2) / 2;
	}
	else 
	{
		temp1 = length / 2;
		return a[temp1 + 1].lastScore;

	}
}