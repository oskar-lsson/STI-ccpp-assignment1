

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

double sumVector(std::vector<double> vect)
{
	double sumVect{};
	for (int i : vect)
	{
		sumVect += i;
	}
	return sumVect;
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

double minValueVector(std::vector<double> vect)
{
	double minValue = vect[0];
	for (int i : vect)
	{
		if (i < minValue)
		{
			minValue = i;
		}
	}
	return minValue;
}

double maxValueVector(std::vector<double> vect)
{
	double maxValue = vect[0];
	for (int i : vect)
	{
		if (i > maxValue)
		{
			maxValue = i;
		}
	}
	return maxValue;
}

