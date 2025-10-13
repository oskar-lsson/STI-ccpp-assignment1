

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
	std::cout << "\nThe avrage is " << sumVect/vect.size() << std::endl;
}

void minValueVector(std::vector<double> vect)
{
	double minValue = vect[0];
	for (int i : vect)
	{
		if (i < minValue)
		{
			minValue = i;
		}
	}
	std::cout << "\nMinimum value is " << minValue << std::endl;
}

void maxValueVector(std::vector<double> vect)
{
	double maxValue = vect[0];
	for (int i : vect)
	{
		if (i > maxValue)
		{
			maxValue = i;
		}
	}
	std::cout << "\nMaxmum value is " << maxValue << std::endl;
}
