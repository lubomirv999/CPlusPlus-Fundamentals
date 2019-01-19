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
	std::vector<int> digits;
	std::vector<char> lowerCaseLetters;
	std::vector<char> upperCaseAndOtherCharacters;

	int numberOfCharacters;
	std::cin >> numberOfCharacters;

	for (int i = 0; i < numberOfCharacters; i++)
	{
		char c;
		std::cin >> c;

		if (isdigit(c))
			digits.push_back(c - 48);
		else if (islower(c))
			lowerCaseLetters.push_back(c);
		else // It's not digit and lower case, any other character
			upperCaseAndOtherCharacters.push_back(c);
	}

	for (std::vector<int>::iterator i = digits.begin(); i != digits.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;

	for (std::vector<char>::iterator i = lowerCaseLetters.begin(); i != lowerCaseLetters.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;

	for (std::vector<char>::iterator i = upperCaseAndOtherCharacters.begin(); i != upperCaseAndOtherCharacters.end(); i++)
		std::cout << *i << " ";

	std::cout << std::endl;

	return 0;
}