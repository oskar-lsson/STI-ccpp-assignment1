// sensorDataApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

double addValue();								//Allows the user to add a value 
double sumVector(std::vector<double> vec);		//prints the sum of the values in the vactor
double minValueVector(std::vector<double> vect);	//Finds the smallest value
double maxValueVector(std::vector<double> vect);	//Finds the biggest value

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
		case 2:
		/* Function that takes the list and display different statistics
			* Numbers of elements
			* Sum
			* Medianvalue
			* min and max value
			* Variance
			* Standard deviation
		*/ 
			//sum
			std::cout << "\nSum of the all the values is " << sumVector(sensorData) << std::endl;
			//avrage
			std::cout << "\nThe avrage is " << sumVector(sensorData) / sensorData.size() << std::endl;
			//minValue
			std::cout << "\nMinimum value is " << minValueVector(sensorData) << std::endl;
			//maxValue
			std::cout << "\nMaxmum value is " << maxValueVector(sensorData) << std::endl;
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
			break;
		}
		

	} while (returnToStart == true);
	
	for (int i = 0; i < sensorData.size(); i++)			//Will be deleted, here now to check that the vector contains all the numbers
	{
		std::cout << sensorData[i] << " ";
	}
	std::cout << "\n"<< sensorData.size() << " antal element" << std::endl;
	std::cout << "\n\vA river dirt chee (Arrivederci)\n\n";
}