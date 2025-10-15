#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

void sortMap(std::vector<std::pair<std::string, double>> &vect, bool ascending)
{
	std::sort(vect.begin(), vect.end(),[ascending](auto &value1, auto &value2) {
        if (ascending)
            return value1.second < value2.second;         //ascending
        else
            return value1.second > value2.second;});      //descending
}