// sensorDataApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <cmath>		//for the sqrt() function

void clearWindow();					//Clears the window and moves cursor to start position
double addValue();								//Allows the user to add a value 
double sum(const std::vector<double> &vect);		//prints the sum of the values in the vactor
double minValue(const std::vector<double> &vect);	//Finds the smallest value
double maxValue(const std::vector<double> &vect);	//Finds the biggest value
double variance(const std::vector<double> &vect);	//Caluculates the variance

int main()
{
	bool returnToStart = true;
	bool continueAddValue = true;
	bool correctInput;
	int menuChoice;
	int returnChoice{};
	
	std::vector<double> sensorData;		
	
	do	//Continues until the user wants to exit
	{
		do		//Runs until correctInput is true
		{
			clearWindow();
			correctInput = true;
			std::cout << "\n[1] Add new values "
				"\n[2] Display statistics "
				"\n[3] Search for specific value "
				"\n[4] Sorting the list "
				"\n[5] Exit" << std::endl;
			std::cout << "Menu choice: "; std::cin >> menuChoice;
	
			if (std::cin.fail())		//checks if user input is correct
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "- Invalid Input -" << std::endl;
				correctInput = false;
			}

		} while (correctInput == false);	
		clearWindow();
		switch (menuChoice)
		{
		case 1:				//Add new values
		{
			do		
			{
				continueAddValue = true;					
				sensorData.push_back(addValue());			//adds the new value at the end of the vector
				int addChoice{};
				std::cout << "Add more values?" 
					"\n[1] Yes"
					"\n[2] No "; std::cin >> addChoice;
				if (addChoice == 2)
				{
					continueAddValue = false;
				}
			} while (continueAddValue == true);
			break;
		}
		case 2: // Display different statistics

			//number of values
			std::cout << "\nNumber of values is "<< sensorData.size() << std::endl;
			//sum
			std::cout << "\nSum of the all the values is " << sum(sensorData) << std::endl;
			//avrage
			std::cout << "\nThe avrage is " << sum(sensorData) / sensorData.size() << std::endl;
			//minimum value
			std::cout << "\nMinimum value is " << minValue(sensorData) << std::endl;
			//maximum value
			std::cout << "\nMaxmum value is " << maxValue(sensorData) << std::endl;
			//variance
			std::cout << "\nThe variance is " << variance(sensorData) << std::endl;
			//standrad deviation
			std::cout << "\nThe standrad deviation is " << sqrt(variance(sensorData)) << std::endl;
			
			std::cout << "\n[1] Return to start?"
				"\n[2] Exit "; std::cin >> returnChoice;

			if (returnChoice == 2)
			{
				returnToStart = false;
			}
			break;
		case 3:
		/* Search funtions
			* ...
			* ...
			* ...
			* ...
			* ...
		*/
		case 4:		//sorting the list
			break;
		case 5:		//Exit
		{
			returnToStart = false;
			break;
		}
		default:
			std::cout << "\n- Menu not available -" << std::endl;
			break;
		}
		

	} while (returnToStart == true);
	clearWindow();
	for (int i : sensorData)			//Will be deleted, here now to check that the vector contains all the numbers
	{
		std::cout << i << " ";
	}
	std::cout << "\n\vA river dirt chee (Arrivederci)\n\n";
}