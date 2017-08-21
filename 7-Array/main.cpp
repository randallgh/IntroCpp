#include <iostream>
#include "main.h"

//Bubble sort
void printArray(int a[], int length);
int sumArray(int a[], int length);

void closed();

int main()
{
	int numbers[] = { 1, 2, 3 };

	printArray(numbers, 3);

	closed();

	system("pause");
	return 0;
}

void closed()
{
	int a1[] = { 0, 1, 2, 3 };
	int a2[] = { 2, 4, 8, 16, 32, 64 };
	int a3[] = { 33, 74, 52, 9 };

	printArray(a1, 4);
	sumArray(a2, 6);
	smallestValue(a3, 4);
	largestValue(a3, 4);
}

void printArray(int a[], int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d \n", a[i]);
	}
}

int sumArray(int a[], int length)
{
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += a[i];
	}
}

int smallestValue(int a[], int length)
{
	int smallest = a[0];

	for (int i = 0; i < length; i++)
	{
		if (a[i] < smallest) {
			smallest = a[i];
		}
	}

	return smallest;
}

int largestValue(int a[], int length)
{
	int largest = a[0];

	for (int i = 0; i < length; i++)
	{
		if (a[i] > largest) {
			largest = a[i];
		}
	}

	return largest;
}

void open()
{

}

//Find value
bool findValue(int a[], int length, int value)
{
}
//is Array unique
//reverse
//Sorting ascending
//Sorting descending

