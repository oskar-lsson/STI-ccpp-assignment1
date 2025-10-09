#include <iostream>

double addValue()
{
	double sensorValue;
	std::cout << "\nAdd value here: "; std::cin >> sensorValue; std::cout << std::endl;
	return sensorValue;
}