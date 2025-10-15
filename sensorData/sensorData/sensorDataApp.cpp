// sensorDataApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <cmath>		//for the sqrt() function
#include <map>
#include <string>
#include <algorithm>

void clearWindow();			//Clears the window and moves cursor to start position
void checkInput();			//Checks if the input is correct
double addValue();			//Allows the user to add a value 
double sum(const std::vector<double> &vect);		//prints the sum of the values in the vactor
double minValue(const std::vector<double> &vect);		//Finds the smallest value
double maxValue(const std::vector<double> &vect);		//Finds the biggest value
double variance(const std::vector<double> &vect);		//Caluculates the variance
void valueSearch(const std::map<std::string, double>& searchMap);		// search for specific value
void keySearch(const std::map<std::string, double>& searchMap);			//search for specific value
void sortMap(std::vector<std::pair<std::string, double>>& vect, bool ascending);		//sorts the map from smallest to biggest value

//Different menus
int startMenu(); void returnToStart(); bool searchAgain(); int sortChoice();

int main()
{
	bool toStart = true;
	bool again = true;
	int menuChoice;
	int numberOfDays;
	int noTimesInAddValue{};
	
	std::vector<double> sensorData;
	std::map<std::string, double> sensorDataMap;

	do	//Continues until the user wants to exit
	{
		clearWindow();
		menuChoice = startMenu();

		switch (menuChoice)
		{
		case 1:				//Add new values
		{
			clearWindow();
			int i = 1;
			std::cout << "\nHow many days do you want to enter? "; std::cin >> numberOfDays;
			
			//if user have added numbers before
			//this to prevent already existing numbers dosent get overwritten
			if (noTimesInAddValue != 0)		
			{
				i += sensorData.size();
				numberOfDays += sensorData.size();
			}
			for ( i ; i <= numberOfDays; i++)
			{
				std::string day;
				if (i < 10)  //adds a zero before the number to make the list sorted correctly
				{
					day = "Day 0" + std::to_string(i);	
				}
				else
				{
					day = "Day " + std::to_string(i);		
				}
				double value = addValue();
				std::cout << "Temperture for " << day << " is " << value << std::endl;
				sensorDataMap[day] = value;		//the value is paired with a specific key, in this case a day
				sensorData.push_back(value);	//the value is also saved in one vector
			}
			std::cout << "\nYou have entered the following:\n";
			for (auto& val : sensorDataMap)		//Prints the map
			{
				std::cout << val.first << " : " << val.second << " degrees\n";
			}
			
			//adds with one each time user leaves 
			noTimesInAddValue++;

			system("pause"); //waits on userinput before leaving
			break;
		}
		case 2: // Display different statistics
		{
			clearWindow();
			if (sensorData.size() < 1)		//checks if the list is empty
			{
				std::cout << "\n- List is empty, try again -" << std::endl;
				system("pause");			//waits for the user to press a key
				break;
			}

			std::cout << "\nNumber of values is " << sensorData.size() << std::endl;
			std::cout << "\nSum of the all the values is " << sum(sensorData) << std::endl;
			std::cout << "\nThe avrage is " << sum(sensorData) / sensorData.size() << std::endl;
			std::cout << "\nMinimum value is " << minValue(sensorData) << std::endl;
			std::cout << "\nMaxmum value is " << maxValue(sensorData) << std::endl;
			std::cout << "\nThe variance is " << variance(sensorData) << std::endl;
			std::cout << "\nThe standrad deviation is " << sqrt(variance(sensorData)) << std::endl;
			
			returnToStart();
			break;
		}
		case 3: //Searchfunction
		{
			clearWindow();
			int searchChoice;
			do
			{
				again = true;
				std::cout << "\nSearch by key or value?"
					"\n[1] Key"
					"\n[2] Value" << std::endl;
				std::cin >> searchChoice;
				checkInput();

				switch (searchChoice)
				{
				case 1:
					keySearch(sensorDataMap);
					break;				
				case 2:
					valueSearch(sensorDataMap);
					break;				
				}
				
				again = searchAgain();

			} while (again == true);
			break;
		}
		case 4:		//sorting the list
		{
			clearWindow();
			int sortingChoice;
			std::vector<std::pair<std::string, double
				>> sortedSensorMap(sensorDataMap.begin(), sensorDataMap.end());	//makes a copy of sensorDataMap and saves it in a vector
			
			sortingChoice = sortChoice();		//Menu
			
			if (sortingChoice == 1)
			{
				sortMap(sortedSensorMap, true);			//sorts the values in sensorDataMap to smallest to biggest
			}
			else
			{
				sortMap(sortedSensorMap, false);
			}
			for (auto& sortedValues : sortedSensorMap)
			{
				std::cout << sortedValues.first << " : " << sortedValues.second << " degrees\n";
			}
			system("pause");
			break;
		}
		case 5:		//Exit
		{
			std::cout << "\n\tA river dirt chee (Arrivederci)\n\n";
			exit(0);
			break;
		}
		default:
			std::cout << "\n- Menu not available -" << std::endl;
			system("pause");
			break;
		}

	} while (toStart == true);
}