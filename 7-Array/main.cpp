#include <iostream>
#include "main.h"

//Bubble sort
void printArray(int a[], int length);
int sumArray(int a[], int length);
int smallestValue(int a[], int length);
int largestValue(int a[], int length);

void closed();
void open();

int main()
{
	int numbers[] = { 1, 2, 3 };

	//printArray(numbers, 3);

	//closed();
	open();

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
	printf("Array \n");
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

	return sum;
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

void sortDescending(int a[], int length);
void sortAscending(int a[], int length);

void open()
{
	int b1[] = { 4, 3, 2, 1, 0 };
	int b2[] = { 4, 3, 4, 3, 4 };
	int b3[] = { 1, 8, 9, 4, 0, 6, 7, 5 };

	sortAscending(b1, 5);
	sortAscending(b2, 5);
	sortAscending(b3, 8);

	printArray(b1, 5);
	printArray(b2, 5);
	printArray(b3, 8);

	sortDescending(b1, 5);
	sortDescending(b2, 5);
	sortDescending(b3, 8);

	printArray(b1, 5);
	printArray(b2, 5);
	printArray(b3, 8);
}

//Find value
bool findValue(int a[], int length, int value)
{
	for (int i = 0; i < length; i++) 
	{
		if (a[i] == value) 
		{
			return true;
		}
	}

	return false;
}

//is Array unique
bool isUnique(int a[], int b[], int length)
{
	for (int i = 0; i < length; i++) 
	{
		if (a[i] == b[i]) 
		{
			return false;
		}
	}

	return true;
}

//reverse
void reverse(int a[], int length)
{
	int temp = 0;

	for (int i = 0; i < length/2; i++) 
	{
		temp = a[i];
		a[i] = a[length - (i + 1)];
		a[length - (i + 1)] = temp;

	}
}

//Sorting ascending

bool isAscended(int a[], int length)
{
	for (int i = 0; i < length-1; i++) 
	{
		if (a[i] > a[i + 1]) 
		{
			return false;
		}
	}

	return true;
}

void sortAscending(int a[], int length)
{
	int temp = 0;
	
	while (!isAscended(a, length))
	{
		for (int i = 0; i < length-1; i++) 
		{
			if (a[i] > a[i + 1]) 
			{
				temp = a[i + 1];
				a[i + 1] = a[i];
				a[i] = temp;
			}
		}
	}
}

//Sorting descending

bool isDescended(int a[], int length)
{
	for (int i = 0; i < length; i++) 
	{
		if (a[i] < a[i + 1])
		{
			return false;
		}
	}
	return true;
}

void sortDescending(int a[], int length)
{
	int temp = 0;

	while (!isDescended(a, length)) 
	{
		for (int i = 0; i < length - 1; i++)
		{
			if (a[i] < a[i + 1])
			{
				temp = a[i + 1];
				a[i + 1] = a[i];
				a[i] = temp;
			}
		}
	}
}