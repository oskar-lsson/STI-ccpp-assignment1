#include <iostream>
#include <limits>


double addValue()
{
	double sensorValue;
	bool correctInput;
	do
	{
		correctInput = true;
		std::cout << "\nAdd value here: "; std::cin >> sensorValue; std::cout << std::endl;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "- Invalid Input -" << std::endl;
			correctInput = false;
		}

	} while (correctInput == false);

	return sensorValue;
}