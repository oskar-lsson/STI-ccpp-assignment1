#include <iostream>

void checkInput();

int startMenu()
{
	int menuChoice;
	std::cout << ""
		"\n_______MENU_______\n"
		"\n[1] Add new values "
		"\n[2] Display statistics "
		"\n[3] Search for specific value "
		"\n[4] Sorting the list "
		"\n[5] Exit" << std::endl;
	std::cout << "Menu choice: "; std::cin >> menuChoice;
	checkInput();
	
	return menuChoice;
}

void returnToStart()
{
	int returnChoice;
	std::cout << "\n[1] Return to start?"
		"\n[2] Exit "; std::cin >> returnChoice;

	checkInput();

	if (returnChoice == 2)			//Checks if the user wants to go back to start or exit the program
	{
		std::cout << "\n\tA river dirt chee (Arrivederci)\n\n";
		exit(42);
	}
}

bool searchAgain()
{
	int returnChoice;
	bool again = true;
	std::cout <<
		"\n[1] New search?"
		"\n[2] Return to start?"
		"\n[3] Exit "; std::cin >> returnChoice;
	checkInput();
	if (returnChoice == 2)
	{
		again = false;
	}
	else if (returnChoice == 3)
	{
		std::cout << "\n\tA river dirt chee (Arrivederci)\n\n";
		exit(0);
	}
	return again;
}
int sortChoice()
{
	int sortingChoice;
	std::cout <<
		"\nIn which order do you want to sort the values?"
		"\n[1] Ascending?"
		"\n[2] Descending? "; std::cin >> sortingChoice;
	checkInput();

	return sortingChoice;
}