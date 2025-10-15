#include <iostream>
#include <map>
#include <string>

/* valueSearch() 
* Search for a specific value in the chosen map
* Using a iterator and loops through the entire map
* Checks if what the iterator pointing at matches with the search value and prints the result
*/
void valueSearch(const std::map<std::string, double> &searchMap)
{
	int searchVal;
	bool valueWasFound = false;			//Used to determine if a value was found
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
/* keySearch()
* Search for a specific key in the chosen map
* Using .find() to determine which key word to search for
* Checks so the iterator is not at the end at the map,
* Prints the result, depending if the key word was found, diffrent message is shown
*/
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