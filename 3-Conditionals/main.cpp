#include <iostream>

/* 
	Closed Practice 
	1)
		true && true = true
		true || false = true
		false || true = true
		false && true = false
		treue && false = false
		false || true || false =  true
		true && (true || false) = true

	2:
		A) 30
		B) 15
		C) 24
		D) 0
		E) 56
		F) 6
		G) 3
*/

void printEndLine()
{
	std::cout << std::endl;
}

void printEndLine(int num)
{
	for (int i = 0; i < num; i++){
		std::cout << std::endl;
	}
}

void closedPractice()
{
	//Number Judging
	std::cout << "Please enter a number from 1 to 100: ";
	int input = 0;
	std::cin >> input;

	//printSpacer();

	if (input > 50)
	{
		std::cout << input << " is a large number.";
	}
	else if (input < 50)
	{
		std::cout << input << " is a small number.";
	}
	else if (input == 50)
	{
		std::cout << input << " is a balanced number.";
	}

	printEndLine(2);

	//Age Gate

	int userAge = 0;

	std::cin.clear();
	std::cout << "How old are you? ";
	std::cin >> userAge;

	if (userAge < 18)
	{
		std::cout << "You are a minor.";
	}
	else if (userAge > 50)
	{
		std::cout << "You are elegible tto join AARP";
	}
	else if (userAge > 65)
	{
		std::cout << "You are elegible to get retirement benefits.";
	}
	else if (userAge >= 18)
	{
		std::cout << "You are an adult";
	}

	printEndLine(2);

	//Smallest of Three Numbers

	int numOne = 0;
	int numTwo = 0;
	int numThree = 0;
	int smallest = 0;

	std::cout << "Please enter three numbers. Type and integer and then press enter" << std::endl;
	std::cin >> numOne;
	std::cin >> numTwo;
	std::cin >> numThree;

	std::cout << "You entered: " << numOne << ", " << numTwo << ", "<< numThree << ". " << std::endl;
	if (numOne < numTwo)
	{
		smallest = numOne;
	} else {
		smallest = numTwo;
	}

	if (numThree < smallest)
	{
		smallest = numThree;
	}

	std::cout << "Smallest number is: " << smallest << std::endl;

}

void openPractice()
{
	//Even or odd
	int number = 0;

	std::cout << "Enter a number: ";
	std::cin >> number;

	if ((number % 2) == 1)
	{
		std::cout << "Number is odd. ";
	} 
	else if(number == 0)
	{
		std::cout << "Number is zero ";
	}
	else {
		std::cout << "Number is even. ";
	}

	printEndLine();

	//Clamp the number
	
	int max = 30;
	int min = 15;

	int clampNum = 0;

	std::cout << "Enter a integer." << std::endl;
	std::cin >> clampNum;

	if (clampNum > max)
	{
		clampNum = max;
	} if (clampNum < min)
	{
		clampNum = min;
	}

	std::cout << "Number is: " << clampNum << std::endl;

	//Input Validation

	// Field:       Thai Spiciness Rating
	// Constraints: Any number from 0 to 5, inclusive of both ends.
	int thaiSpiceRating = 0;
	std::cout << "How spicy should your food be?\n";
	std::cin >> thaiSpiceRating;
	if (thaiSpiceRating > 5) { thaiSpiceRating = 5; }
	else if (thaiSpiceRating < 0) { thaiSpiceRating = 0; }
	std::cout << "You ordered with a spiciness rating of " << thaiSpiceRating << "!\n";

	// Field:       Purchase Order for Cookies
	// Constraints: Must be ordered in multiples of 23. Only whole numbers.
	//              Round down to the nearest multiple if not a multiple of 23.
	//
	//              If nearest multiple is zero, provide an error message.

	int numCookiesPurchase = 0;
	std::cout << "Enter a number of cookies to purchase. " << std::endl;
	std::cin >> numCookiesPurchase;
	
	if ((numCookiesPurchase % 23) != 0)
	{
		std::cout << numCookiesPurchase << " is not a multiple of 23. " << std::endl;
		numCookiesPurchase = (numCookiesPurchase / 23);
		numCookiesPurchase = (numCookiesPurchase * 23);
		std::cout << "Number rounded down to " << numCookiesPurchase << std::endl;
	} else if (numCookiesPurchase == 0){
		std::cout << "ERROR: Entered number is zero." << std::endl;
	}

	// Field:       Purchase Order for Sketchbooks (3pk)
	// Constraints: Must order at least 9 sketchbooks total.
	//              The total may not exceed 30 sketchbooks ordered.
	//
	//              If the total number of sketchbooks ordered does not meet
	//              the minimum order count or exceeds the maximum order count,
	//              provide an error message.

	int numSketchbooksOrder = 0;

	std::cout << "Enter a number of sketchbooks to purchase. " << std::endl;
	std::cin >> numSketchbooksOrder;

	if (numSketchbooksOrder < 9)
	{
		std::cout << "Purchase more then 9 sketchbooks! " << std::endl;
	} else if (numSketchbooksOrder > 30)
	{
		std::cout << "Cannot purchase more then 30 sketchbooks! " << std::endl;
	}

	// Field:       Enable Motion Blur
	// Constraints: Must be a 'y' or 'n' value.
	//
	//              Provide an error message if any other value.

	char inputChar = 'y';
	std::cout << "Enter y/n to adjust the motion blur. " << std::endl;
	std::cin >> inputChar;


	switch (inputChar)
	{
	case 'y':
		std::cout << "Motion Blur enabled. " << std::endl;
		break;
	case 'n':
		std::cout << "Motion Blur disabled. " << std::endl;
		break;
	default:
		std::cout << "WARNING: " << inputChar << " is not a valid char. " << std::endl;
		break;
	}

	// Field:       Texture Size
	// Constraints: Round to the nearest power of two. Only whole numbers.
	//
	//              If nearest power is zero, provide an error message.

	int textureSize = 0;
	std::cout << "Input a texture size with a multiple of 2. " << std::endl;
	std::cin >> textureSize;

	if (textureSize == 0)
	{
		std::cout << "WARNING: THE TEXTURE SIZE IS ZERO. " << std::endl;
	}
	else if (textureSize % 2 != 0)
	{
		std::cout << "Texture size given is not a multiple of 2. " << std::endl;
		textureSize = textureSize / 2;
		textureSize = textureSize * 2;
	}


}

void disposableCalculator()
{
	int numOne = 0;
	int numTwo = 0;
	char op = '&';

	std::cout << "Enter two integers. " << std::endl;
	std::cin >> numOne;
	std::cin >> numTwo;

	std::cout << "Enter a operator. + - / * " << std::endl;
	std::cin >> op;




}

int main()
{
	//closedPractice();
	//openPractice();
	disposableCalculator();

	system("PAUSE");
	return 0;
}