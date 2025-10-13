

#include <iostream>
#include <vector>
#include <cmath>
/* Function that takes the list and display different statistics
	* Numbers of elements
	* Sum
	* Medianvalue
	* min and max value
	* Variance
	* Standard deviation
*/

double sum(std::vector<double> vect)
{
	double sumVect{};
	for (int i : vect)
	{
		sumVect += i;
	}
	return sumVect;
}

double avrage(std::vector<double> vect)
{
	double sumVect{};
	for (int i : vect)
	{
		sumVect += i;
	}
	return sumVect/vect.size();			//returns the avrage 
}

double minValue(std::vector<double> vect)
{
	double minVal = vect[0];
	for (int i : vect)
	{
		if (i < minVal)
		{
			minVal = i;
		}
	}
	return minVal;		//returns the smallest value
}

double maxValue(std::vector<double> vect)
{
	double maxVal = vect[0];
	for (int i : vect)
	{
		if (i > maxVal)
		{
			maxVal = i;
		}
	}
	return maxVal;			//returns the biggest value
}

double variance(std::vector<double> vect)
{
	double var{};
	double mean = avrage(vect);		//The avrage of all the elements are used to calculate the variance

	for (int i : vect)
	{
		var += pow(i - mean, 2);			//Calculates the difference between every element and the mean, pow() is used to get a positive number
	}
	return var/vect.size();			//returns the variance
}