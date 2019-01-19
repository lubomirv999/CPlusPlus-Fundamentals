#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>
#include <vector>
#include <functional>
#include <list>
#include <map>
#include <cctype>
#include <algorithm>
#include <sstream>

int main()
{
	//std::map<int, int> ranges;
	std::vector<int> ranges;

	std::string rangesInput;
	std::getline(std::cin, rangesInput);

	while (rangesInput.size() != 1)
	{
		std::istringstream nums(rangesInput);

		int from = 0;
		int to = 0;
		nums >> from >> to;

		ranges.push_back(from);
		ranges.push_back(to);
		//ranges.insert(std::pair<int, int>(from, to));
		std::getline(std::cin, rangesInput);
	}

	int num;
	std::cin >> num;

	while (std::cin)
	{
		bool isInRange = false;

		for (std::vector<int>::iterator i = ranges.begin(); i != ranges.end(); i += 2)
			if (*i <= num && num <= *(i + 1))
			{
				isInRange = true;
				break;
			}

		/*for (std::map<int, int>::iterator i = ranges.begin(); i != ranges.end(); i++)
			if (i->first <= num && num <= i->second)
			{
			isInRange = true;
			break;
		}*/

		if (isInRange == true)
			std::cout << "in" << std::endl;
		else
			std::cout << "out" << std::endl;

		std::cin >> num;
	}
}