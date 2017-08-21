#include <iostream>

void walkthrough();
void closed();

int main() {
	
	//walkthrough();
	closed();

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
	//Three favorite positive numbers with input validation
}

void open()
{

}