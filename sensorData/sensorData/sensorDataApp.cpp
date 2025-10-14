// sensorDataApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <cmath>		//for the sqrt() function
#include <map>
#include <string>

void clearWindow();					//Clears the window and moves cursor to start position
double addValue();								//Allows the user to add a value 
double sum(const std::vector<double> &vect);		//prints the sum of the values in the vactor
double minValue(const std::vector<double> &vect);	//Finds the smallest value
double maxValue(const std::vector<double> &vect);	//Finds the biggest value
double variance(const std::vector<double> &vect);	//Caluculates the variance
void valueSearch(const std::map<std::string, double>& searchMap);			// search for specific value
void keySearch(const std::map<std::string, double>& searchMap);				//search for specific value


int main()
{
	bool returnToStart = true;
	bool continueAddValue = true;
	bool correctInput = true;
	bool searchAgain = true;
	int menuChoice;
	int returnChoice;
	int numberOfDays;
	int noTimesInAddValue{};
	

	std::vector<double> sensorData;
	std::map<std::string, double> sensorDataMap;

	do	//Continues until the user wants to exit
	{
		clearWindow();
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
		}

		clearWindow();
		switch (menuChoice)
		{
		case 1:				//Add new values
		{
			int i = 1;
			std::cout << "\nHow many days do you want to enter? "; std::cin >> numberOfDays;
			if (noTimesInAddValue != 0)		//if user have added numbers before
			{
				i += sensorData.size();
				numberOfDays += sensorData.size();
			}
			for ( i ; i <= numberOfDays; i++)
			{
				std::string day = "Day " + std::to_string(i);		//makes the number of i to a string and saved in the string day
				double value = addValue();
				std::cout << "Temperture for " << day << " is " << value << std::endl;
				sensorDataMap[day] = value;		//the value is paired with a specific key, in this case a day
				sensorData.push_back(value);	//the value is also saved in one vector
			}
			std::cout << "\nYou have entered the following:\n";
			for (auto& pair : sensorDataMap)
			{
				std::cout << pair.first << " : " << pair.second << " degrees\n";
			}
			noTimesInAddValue++;
			system("pause");
			break;
		}	//Case 1 end
		case 2: // Display different statistics
		{

			if (sensorData.size() < 1)		//checks if the list is empty
			{
				std::cout << "\n- List is empty, try again -" << std::endl;
				system("pause");		//waits for the user to press a key
				break;
			}
			//number of values
			std::cout << "\nNumber of values is " << sensorData.size() << std::endl;
			//Prints the sum
			std::cout << "\nSum of the all the values is " << sum(sensorData) << std::endl;
			//Prints the avrage
			std::cout << "\nThe avrage is " << sum(sensorData) / sensorData.size() << std::endl;
			//Prints the minimum value
			std::cout << "\nMinimum value is " << minValue(sensorData) << std::endl;
			//Prints the maximum value
			std::cout << "\nMaxmum value is " << maxValue(sensorData) << std::endl;
			//Prints the variance
			std::cout << "\nThe variance is " << variance(sensorData) << std::endl;
			//Prints the standrad deviation
			std::cout << "\nThe standrad deviation is " << sqrt(variance(sensorData)) << std::endl;

			std::cout << "\n[1] Return to start?"
				"\n[2] Exit "; std::cin >> returnChoice;

			if (returnChoice == 2)			//Checks if the user wants to go back to start or exit the program
			{
				returnToStart = false;
			}
			break;
		}//case 2 end
		case 3: //Searchfunction
		{
			int searchChoice;
			//int keySearch, valueSearch;

			do
			{
				searchAgain = true;
				//bool valueWasFound{};		//Used to display error message if value was not found
				std::cout << "\nSearch by key or value?"
					"\n[1] Key"
					"\n[2] Value" << std::endl;
				std::cin >> searchChoice;
				
				switch (searchChoice)
				{
				case 1:
					keySearch(sensorDataMap);
					break;				
				case 2:
					valueSearch(sensorDataMap);
					break;				
				}
				std::cout <<
					"\n[1] New search"
					"\n[2] Return to start?"
					"\n[3] Exit "; std::cin >> returnChoice;

				if (returnChoice == 2)
				{
					searchAgain = false;
				}
				else if (returnChoice == 3)
				{
					returnToStart = false;
					searchAgain = false;
				}
				else
				{
					clearWindow();
				}
			} while (searchAgain == true);
			break;
		} //case 3 end
		case 4:		//sorting the list
		{
			break;
		} //case 4 end
		case 5:		//Exit
		{
			returnToStart = false;
			break;
		}
		default:
			std::cout << "\n- Menu not available -" << std::endl;
			system("pause");
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