#include <iostream>

//14
void myFinalForm1()
{
	int number = 5;

	number = 9;
	number = 11;
	number = 14;

	std::cout << "A) " << number << std::endl;
}
//9
void myFinalForm2()
{
	int number = 10;
	number = 9;

	int thing = 55;
	thing = 22;

	std::cout << "B) " << number << std::endl;
}
//21
void myFinalForm3()
{
	int number = 3;
	number = 7;
	number = 1;

	int something = 23;
	something = 21;

	number = something;

	std::cout << "C) " << number << std::endl;
}
//3
void myFinalForm4()
{
	int number = 1;
	int something = 3;

	number = something;

	std::cout << "D) " << something << std::endl;
}
//6
void myFinalForm5()
{
	int x = 13;

	x = x / 2;

	std::cout << "E) " << x << std::endl;
}
//6.5
void myFinalForm6()
{
	float x = 13;

	x = x / 2;

	std::cout << "F)" << x << std::endl;
}

//Takes celsius and converts it to fahrenheight
float cToF(float celsius)
{
	return celsius*1.8f + 32;
}

//Takes the width and height and returns them multiplied by each other
float areaOfRectangle(float width, float height)
{
	return width * height;
}

float averageOfFive(float a[])
{

}

int main()
{
	myFinalForm1();
	myFinalForm2();
	myFinalForm3();
	myFinalForm4();
	myFinalForm5();
	myFinalForm6();

	std::cout << cToF(78.0f) << "\n\n\n";

	std::cout << "Enter a float for degrees celsius to be converted to Fahrenheit \n";
	float degreesCelcius = 0;
	std::cin >> degreesCelcius;
	std::cout << std::endl << cToF(degreesCelcius) << "\n\n";

	std::cout << "Enter the width of a rectangle\n";
	float rectWidth = 0.0f;
	std::cin >> rectWidth;

	std::cout << "Enter the height of a rectangle\n";
	float rectHeight = 0.0f;
	std::cin >> rectHeight;	

	std::cout << "Area: " << areaOfRectangle(rectWidth, rectHeight) << "\n\n";




	system("PAUSE");
	return 0;
}

