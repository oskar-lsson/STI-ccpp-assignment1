

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
	double valueVect{};
	for (int i = 0; i < vect.size(); i++)
	{
		valueVect = vect[i];
		sumVect = sumVect + valueVect;
	}
	std::cout << "Sum of the all the values is " << sumVect << std::endl;
}

