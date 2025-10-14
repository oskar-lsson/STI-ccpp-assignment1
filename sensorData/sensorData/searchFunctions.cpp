#include <iostream>
#include <map>
#include <string>

void valueSearch(const std::map<std::string, double> &searchMap)
{
	int searchVal;
	bool valueWasFound = false;
	std::cout << "Which value are you looking for? "; std::cin >> searchVal; std::cout << std::endl;
	for (auto it = searchMap.begin(); it != searchMap.end(); it++)
	{
		if (it->second == searchVal)
		{
			std::cout << "It was " << it->second << " degrees on " << it->first << std::endl;
			valueWasFound = true;
		}
	}
	if (valueWasFound == false)
	{
		std::cout << "\n***Value not found***\n" << std::endl;
	}
}

void keySearch(const std::map<std::string, double>& searchMap)
{
	int searchKey;
	std::cout << "\nWhich day do you want the temperature for?"
		"\nDay"; std::cin >> searchKey;
	auto it = searchMap.find("Day " + std::to_string(searchKey)); //saves the keySearch in iterator it
	if (it != searchMap.end())
	{
		std::cout << "\nOn " << it->first << " the temparture was " << it->second << " degrees" << std::endl;
	}
	else
	{
		std::cout << "\n***Day not found***" << std::endl;
	}
}