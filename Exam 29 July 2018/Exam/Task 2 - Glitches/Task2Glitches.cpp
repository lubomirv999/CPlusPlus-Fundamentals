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

int main()
{
	std::map<char, std::vector<int>> centers;
	std::map<char, std::vector<int>> glitches;

	int sizeOfMatrix;
	std::cin >> sizeOfMatrix;

	for (int i = 1; i <= sizeOfMatrix; i++)
	{
		std::string line;
		std::cin >> line;

		for (int j = 0; j < line.size(); j++)
		{
			if (line[j] != '.')
			{
				glitches.insert(std::pair<char, std::vector<int>>(line[j], std::vector<int>()));
				glitches[line[j]].push_back(i);
				glitches[line[j]].push_back(j + 1);
			}
		}
	}

	for (std::map<char, std::vector<int>>::iterator i = glitches.begin(); i != glitches.end(); i++)
	{
		int rowSum = 0;
		int colSum = 0;

		for (std::vector<int>::iterator j = glitches[i->first].begin(); j != glitches[i->first].end(); j += 2)
		{
			rowSum += *j;
			colSum += *(j + 1);
		}

		int centerRow = rowSum / (glitches[i->first].size() / 2);
		int centerCol = colSum / (glitches[i->first].size() / 2);

		for (int r = 1; r <= sizeOfMatrix; r++)
		{
			for (int c = 1; c <= sizeOfMatrix; c++)
				if (r == centerRow && c == centerCol)
				{
					centers.insert(std::pair<char, std::vector<int>>(i->first, std::vector<int>()));
					centers[i->first].push_back(centerRow);
					centers[i->first].push_back(centerCol);
				}
		}
	}

	for (int r = 1; r <= sizeOfMatrix; r++)
	{
		for (int c = 1; c <= sizeOfMatrix; c++)
		{
			bool flag = false;

			for (std::map<char, std::vector<int>>::iterator i = centers.begin(); i != centers.end(); i++)
				for (std::vector<int>::iterator j = centers[i->first].begin(); j != centers[i->first].end(); j += 2)
					if (r == *j && c == *(j + 1))
					{
						std::cout << i->first;
						flag = true;
					}

			if (!flag)
				std::cout << '.';
		}

		std::cout << std::endl;
	}
}