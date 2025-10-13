#include <iostream>

void clearWindow()
{
	std::cout << "\x1B[2J""\x1B[H";	//escape code for clearing the window and moving the cursor back to starting position
}