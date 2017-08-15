#include <iostream>


void closedPractice();
void openPractice();
void challenge();

int main()
{
	//closedPractice();
	//openPractice();
	challenge();

	system("PAUSE");
	return 0;
}

//Closed Practice
int sumOfTwoInts(int a, int b);
void printHelloFunctions();
int squareInt(int num);
float fractionToDecimal(int num, int denom);
float largestDiffrence(float a, float b, float c);
void printCordinates(int a, int b);
int sumOfThreeInts(int a, int b, int c);

void closedPractice()
{
	std::cout << sumOfTwoInts(1, 2) << std::endl;
	printHelloFunctions();
	std::cout << squareInt(2) << std::endl;
	std::cout << squareInt(4) << std::endl;
	std::cout << squareInt(10) << "\n\n";
	std::cout << fractionToDecimal(1, 4) << std::endl;
	std::cout << "Diff: " << largestDiffrence(20, 1, -99) << std::endl;
	printCordinates(4, 1);
	printCordinates(0, 3);
	printCordinates(2, 2);
}


int sumOfTwoInts(int a, int b)
{
	return a + b;
}

void printHelloFunctions()
{
	std::cout << "Hello Functions." << std::endl;
}

int squareInt(int num)
{
	return num * num;
}

float fractionToDecimal(int num, int denom)
{
	return (float)num / (float)denom;
}

float largestDiffrence(float a, float b, float c)
{
	float biggestDiffrence = 0;
	
	float diffAB = abs(a - b);
	float diffBC = abs(b - c);
	float diffAC = abs(a - c);

	if (diffAB < diffBC)
	{
		biggestDiffrence = diffBC;
	}
	else if (diffAB > diffBC)
	{
		biggestDiffrence = diffAB;
	}

	if (biggestDiffrence < diffAC)
	{
		biggestDiffrence = diffAC;
	}

	return biggestDiffrence;
}

void printCordinates(int a, int b)
{
	std::cout << a << ", " << b << std::endl;
}

int sumOfThreeInts(int a, int b, int c)
{
	return (a + b + c);
}


int min(int a, int b);
int max(int a, int b);
int clamp(int min, int max, int num);
float distance(int x1, int y1, int x2, int y2);
float estimatedTimeOfArrival(int x1, int y1, int x2, int y2, int speed);



//Open Practice things

void openPractice()
{
	std::cout << "Min" << std::endl;
	//Min
	std::cout << min(4, 6) << std::endl;
	std::cout << min(5, 2) << std::endl;
	std::cout << min(7, 7) << std::endl;

	std::cout << "Max" << std::endl;
	//Max
	std::cout << max(4, 6) << std::endl;
	std::cout << max(5, 2) << std::endl;
	std::cout << max(7, 7) << std::endl;

	std::cout << "Clamp" << std::endl;
	//Clamp
	std::cout << clamp(15, 30, 11) << std::endl;
	std::cout << clamp(2, 7, 5) << std::endl;
	std::cout << clamp(0, 10, -3) << std::endl;
	std::cout << clamp(0, 10, 45) << std::endl;
	std::cout << clamp(25, 40, 30) << std::endl;
	std::cout << clamp(10, 25, 75) << std::endl;
	
	std::cout << "Distance" << std::endl;
	//Distance
	std::cout << distance(0, 0, 0, 1) << std::endl;
	std::cout << distance(3, 3, 4, 5) << std::endl;
	std::cout << distance(7, 23, 9, 0) << std::endl;

	std::cout << "Estimated Time of Arrival" << std::endl;
	//Estimated Time of Arrival
	std::cout << estimatedTimeOfArrival(0, 0, 0, 4, 1)<< std::endl;
	std::cout << estimatedTimeOfArrival(0, 0, 0, 4, 2) << std::endl;
	std::cout << estimatedTimeOfArrival(4, 4, 4, 8, 4) << std::endl;
}

int min(int a, int b)
{
	if (a > b){
		return b;
	}
	else
	{
		return a;
	}
}

int max(int a, int b)
{
	if(a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int clamp(int min, int max, int num)
{
	if(num > max){
		return max;
	}
	else if (num < min)
	{
		return min;
	}
	else
	{
		return num;
	}
}

float distance(int x1, int y1, int x2, int y2)
{
	float distance = 0;

	int y = y2 - y1;
	int x = x2 - x1;

	return sqrt(x*x + y*y);
}

//Find distance and then the time
float estimatedTimeOfArrival(int x1, int y1, int x2, int y2, int speed)
{
	return distance(x1, y1, x2, y2) / speed;
}

//Challange
float linearInterpolation(int a, int b, float normalizer);


void challenge()
{

	std::cout << linearInterpolation(2, 4, 0.5f) << std::endl;
	std::cout << linearInterpolation(3, 7, 0.5f) << std::endl;
	std::cout << linearInterpolation(1, 2, 0.5f) << std::endl;
}

//Linear Interpolation
float linearInterpolation(int a, int b, float normalizer)
{
	//Which is the min and which is max
	//Subtract the min from the max and apply that diffrence to the min

	int minNum = min(a, b);
	int maxNum = max(a, b);

	float diffrence = maxNum - minNum;

	return (minNum + diffrence * normalizer);
}

//High and Low



//ToUpper and ToLower