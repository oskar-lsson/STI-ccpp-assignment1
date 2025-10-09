// sensorDataApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

double addValue();

int main()
{
	bool returnToStart = true;
	bool continueAddValue = true;
	std::vector<double> sensorData;		
	
	do
	{
		int menuChoice;
		std::cout << "\n[1] Add new values \n[2] Display statistics \n[3] Search for specific value \n[4] Sorting the list \n[5] Exit" << std::endl;
		std::cout << "Menu choice: "; std::cin >> menuChoice;

	
		switch (menuChoice)
		{
		case 1:
		{
			do
			{
				sensorData.push_back(addValue());			//adds the new value at the end of the vector
				int choice;
				std::cout << "Continue? 1 yes 2 no"; std::cin >> choice;
				if (choice == 2)
				{
					continueAddValue = false;
				}
			} while (continueAddValue == true);
			break;
		}
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
		case 5:		//Exit
		{
			returnToStart = false;
			break;
		}
		default:
			break;
		}
		

	} while (returnToStart == true);
	
	for (int i = 0; i < sensorData.size(); i++)
	{
		std::cout << sensorData[i] << " ";
	}
	
	std::cout << "\n\vA river dirt chee (Arrivederci)\n\n";
}