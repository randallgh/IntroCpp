#include <iostream>
#include <string>


void closed();


int main() 
{
	closed();

	system("PAUSE");
	return 0;
}

void greeting();
void favoriteColor();

void closed() 
{
	//greeting();
	favoriteColor();
}

void greeting() 
{
	char name[80] = {};

	printf("Please enter your name. Less then 20 characters.");
	std::cin >> name;

	std::cout << "HELLO " << name << "!" << std::endl;
}

void favoriteColor()
{
	std::string color;

	printf("Please enter your favorite color.");
	std::cin >> color;

	//Split out the characters and compare those characters to other char[]

	if (color == "orange") {
		printf("You entered orange.");
	}
	else if (color == "yellow") {
		printf("You entered yellow.");
	}
}

void removeWhitespace() 
{
	std::string removeWhite;

	printf("Enter a string to remove the whitespace.");

	std::cin >> removeWhite;
	
}