// sensorDataApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

double addValue();

int main()
{
	bool returnToStart = true;
	bool continueAddValue = true;
	bool correctInput;
	int menuChoice;
	
	std::vector<double> sensorData;		
	
	do	//Continues until the user wants to exit
	{
		do		//Runs until correctInput is true
		{
			correctInput = true;
			std::cout << "\n[1] Add new values "
				"\n[2] Display statistics "
				"\n[3] Search for specific value "
				"\n[4] Sorting the list "
				"\n[5] Exit" << std::endl;
			std::cout << "Menu choice: "; std::cin >> menuChoice;
	
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "- Invalid Input -" << std::endl;
				correctInput = false;
			}

		} while (correctInput == false);
		switch (menuChoice)
		{
		case 1:
		{
			do		
			{
				sensorData.push_back(addValue());			//adds the new value at the end of the vector
				int addChoice;
				std::cout << "Add more values?\n" 
					"[1] Yes \n[2] No"; std::cin >> addChoice;
				if (addChoice == 2)
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
	
	for (int i = 0; i < sensorData.size(); i++)			//Will be deleted, here now to check that the vector contains all the numbers
	{
		std::cout << sensorData[i] << " ";
	}
	
	std::cout << "\n\vA river dirt chee (Arrivederci)\n\n";
}