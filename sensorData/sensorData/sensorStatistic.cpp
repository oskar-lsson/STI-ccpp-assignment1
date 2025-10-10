

#include <iostream>
#include <vector>
/* Function that takes the list and display different statistics
	* Numbers of elements
	* Sum
	* Medianvalue
	* min and max value
	* Variance
	* Standard deviation
*/

void sumVector(std::vector<double> vect)
{
	double sumVect{};
	for (int i : vect)
	{
		sumVect += i;
	}
	std::cout << "\nSum of the all the values is " << sumVect << std::endl;
}

void avrageVector(std::vector<double> vect)
{
	double sumVect{};
	for (int i : vect)
	{
		sumVect += i;
	}
	std::cout << "\nSum of the all the values is " << sumVect/vect.size() << std::endl;
}