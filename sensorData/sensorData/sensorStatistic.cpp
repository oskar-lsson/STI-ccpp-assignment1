

#include <iostream>
#include <vector>
#include <cmath>
/* Function in this file is 
	* double sum()
		- Calculates the sum of all the values in one vector
	* double avrage()
		- Calculates the avrage of all the values in the vector
	* double minValue()
		- finds the smallest value in the vector 
	* double maxValue()
		- finds the biggest value in the vector 
	* double variance()
		- Calculates the variance
*/

double sum(const std::vector<double> &vect)
{
	double sumVect{};
	for (int i : vect)
	{
		sumVect += i;
	}
	return sumVect;
}

double avrage(const std::vector<double> &vect)
{
	double sumVect{};
	for (int i : vect)
	{
		sumVect += i;
	}
	return sumVect/vect.size();			//returns the avrage 
}

double minValue(const std::vector<double> &vect)
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

double maxValue(const std::vector<double> &vect)
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

double variance(const std::vector<double> &vect)
{
	double var{};
	double mean = avrage(vect);		//The avrage of all the elements are used to calculate the variance

	for (int i : vect)
	{
		var += pow(i - mean, 2);			//Calculates the difference between every element and the mean, pow() is used to get a positive number
	}
	return var/vect.size();			//returns the variance
}