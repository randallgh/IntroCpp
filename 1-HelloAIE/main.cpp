/*	
	Randall Hines
	8/14/17
*/

#include <array>
#include <iostream>

void tracklist();
void zeroFive();
void fiveZero();
void syntaxErrors();

int main()
{
	std::cout << "Hello AIE \n\n\n";

	tracklist();
	std::cout << std::endl;
	zeroFive();
	std::cout << std::endl;
	fiveZero();
	std::cout << std::endl;
	syntaxErrors();

	system("PAUSE");
	return 0;
}

//Displays a tracklist using cout
void tracklist()
{
	std::cout << "Tracklist"				<< "\n\n";
	std::cout << "1. Dreaming"				<< std::endl;
	std::cout << "2. Growing Wings"			<< std::endl;
	std::cout << "3. Grandma"				<< std::endl;
	std::cout << "4. This cannot continue"	<< std::endl;
}

//Prints out numbers from 1 to 5
void zeroFive()
{
	for (int i = 1; i <= 5; i++)
	{
		std::cout << i << std::endl;
	}
}

//Prints out numbers from 5 to 0
void fiveZero()
{
	for (int i = 5; i >= 0; i--)
	{
		std::cout << i << std::endl;
	}
}


//Prints out the syntax error open thing
void syntaxErrors()
{
	std::cout << "SyntacticalErrors-A)" << std::endl;
	std::cout << "Howdy AIE" << std::endl;
	std::cout << "It's a fine day today as any!" << std::endl;
	std::cout << "I really wish I had some potatoes...\n" << std::endl;

	std::cout << "SyntacticalErrors-B)" << std::endl;
	std::cout << "Four score and seven years ago" << std::endl;
	std::cout << "our fathers brought forth on this continent," << std::endl;
	std::cout << "a new nation," << std::endl;
	std::cout << "conceived in Libery, and dedicated to the proposition" << std::endl;
	std::cout << "that all men are created equal.\n" << std::endl;

	std::cout << "Now we are engaged in a great civil war," << std::endl;
	std::cout << "testing whether that nation, or any nation << std::endl" << std::endl;
	std::cout << "so conceived and so dedicated, can long endure.\n" << std::endl;
}