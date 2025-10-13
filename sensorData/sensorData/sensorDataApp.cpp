// sensorDataApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <cmath>		//for the sqrt() function

double addValue();								//Allows the user to add a value 
double sum(std::vector<double> vec);		//prints the sum of the values in the vactor
double minValue(std::vector<double> vect);	//Finds the smallest value
double maxValue(std::vector<double> vect);	//Finds the biggest value
double variance(std::vector<double> vect);	//Caluculates the variance

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
	
			if (std::cin.fail())		//checks if user input is correct
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "- Invalid Input -" << std::endl;
				correctInput = false;
			}

		} while (correctInput == false);
		switch (menuChoice)
		{
		case 1:				//Add new values
		{
			do		
			{
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
			break;
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
			std::cout << "\n- Menu not available -" << std::endl;
			break;
		}
		

	} while (returnToStart == true);
	
	for (int i = 0; i < sensorData.size(); i++)			//Will be deleted, here now to check that the vector contains all the numbers
	{
		std::cout << sensorData[i] << " ";
	}
	std::cout << "\n\vA river dirt chee (Arrivederci)\n\n";
}