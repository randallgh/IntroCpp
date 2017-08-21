#include <iostream>

void walkthrough();
void closed();
void open();

int main() {
	
	//walkthrough();
	//closed();
	open();

	system("PAUSE");
	return 0;
}

void walkthrough()
{
	//While 0-10
	printf("While \n");
	int num = 0;
	while (num < 10)
	{
		//std::cout << num;
		printf("%d \n", num);
		num++;
	}

	printf("For \n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", i);
	}

	printf("DoWhile \n");
	int index = 0;
	do
	{
		printf("%d \n", index);
		index++;
	}
	while (index < 10);
}

bool isEven(int num);
//bool isInputValid(int num);

void closed()
{
	printf("Closed");
	//1 - 100 for loop
	for(int i = 1; i <= 100; i++)
	{
		printf("%d \n", i);

	}
	//100 - 1 while loop
	int num = 100;
	while(num >= 1)
	{
		printf("%d \n", num);
		num--;
	}
	//1995 - 2017 do while
	int year = 1995;
	do
	{
		printf("%d \n", year);
		year++;
	}
	while (year <= 2017);

	//Three favorite positive numbers with input validation
	//Only allow positive numbers, not chars, or strings, floats,

	int input = 0;
	int numNumbers = 0;
	int numbers[3] = {};
	printf("Enter your favorite positive numbers. Please enter one at a time.\n>");
	bool isRunning = true;
	
	do
	{
		if (numNumbers == 0) {
			printf("Enter your first number. \n>");
		}
		else if (numNumbers == 1) {
			printf("Enter your second number. \n>");
		}
		else if (numNumbers == 2) 
		{
			printf("Enter your third number. \n>");
		}
		std::cin >> input;

		if (isEven(input)) 
		{
			numbers[numNumbers] = input;
			numNumbers++;
			if (numNumbers == 3) {
				isRunning = false;
			}
		} else 
		{
			printf("Invalid input please enter a positive number. \n");
		}

	} while (isRunning);

	printf("You entered: %d, %d, %d, as your favorite positive numbers. \n", numbers[0], numbers[1], numbers[2]);

}

bool isEven(int num)
{
	if (num % 2 == 0)
	{
		return true;
	}
	return false;
}

void printXY(int x, int y);

void open()
{
	//X to Y
	printXY(1, 3);
	printXY(4, 5);
	printXY(0, 5);
	//Largest of any numbers
	//Smallest of any numbers
	//Even or Odd
	//Fizz Buzz
	//Grid generator
	//Higher or Lower
}

void printXY(int x, int y)
{
	printf("X: %d, Y: %d \n", x, y);
	for (int i = x; i <= y; i++) 
	{
		printf("%d \n", i);
	}
}