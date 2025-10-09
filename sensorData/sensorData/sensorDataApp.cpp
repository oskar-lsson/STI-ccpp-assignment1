// sensorDataApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int menuChoice;
	std::cout << "\n[1] Add new values \n[2] Display statistics \n[3] Search for specific value \n[4] Sorting the list \n[5] Exit" << std::endl;
	std::cout << "Menu choice: "; std::cin >> menuChoice;

	switch (menuChoice)
	{
	case 1:
	/* Call a function that allows user to give a input and saves the input in array or maybe a vector
		* Reapet until user is done
		* Maybe ask if the number should be randomize x number of times
		* When done return to start 		
	*/
	case 2:
	/* Function that takes the list and display different statistics
		* Numbers of elements
		* Sum
		* Medianvalue
		* min and max value
		* Variance
		* Standard deviation
	*/ 
	case 3:
	/* Search funtions
		* ...
		* ...
		* ...
		* ...
		* ...
	*/
	case 4:
	/* Sortfunction
		* ... 
		* ...
		* ...
		* ...
		* ...
	*/
	case 5:
	/* End the program
		* ...
		* ...
		* ...
	*/
	default:
		break;
	}

}
