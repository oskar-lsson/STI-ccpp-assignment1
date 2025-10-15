#include <iostream>


void checkInput()
{
	if (std::cin.fail())		//checks if user input is correct, flags it if incorrect
	{
		std::cin.clear();		//clear the flag 
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');		//ignore and removes the input from the buffert
		std::cout << "\x1B[31m- Invalid Input -\x1B[0m" << std::endl;
	}
}