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
	int differences = 0;

	int numberOfSymbols;
	std::cin >> numberOfSymbols;

	std::string firstWord;
	std::getline(std::cin.ignore(), firstWord);

	std::string secondWord;
	std::getline(std::cin, secondWord);

	for (int i = 0; i < numberOfSymbols; i++)
	{
		if (firstWord.at(i) == secondWord.at(i))
			std::cout << firstWord.at(i);
		else if (toupper(firstWord.at(i)) == toupper(secondWord.at(i)))
			std::cout << (char)toupper(firstWord.at(i));
		else if (firstWord.at(i) != secondWord.at(i))
		{
			std::cout << '!';
			differences++;
		}
	}

	std::cout << std::endl << differences;
}