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

class Country
{
public:
	std::string name;
	std::string capital;
	int population;

	Country();
	Country(std::string name, std::string capital, int population);
	~Country();
};

Country::Country()
{
}

Country::Country(std::string name, std::string capital, int population)
{
	this->name = name;
	this->capital = capital;
	this->population = population;
}

Country::~Country()
{
}

void PrintCountry(Country country)
{
	std::cout << "Country -> " << country.name << std::endl;
	std::cout << "Capital -> " << country.capital << std::endl;
	std::cout << "Population -> " << country.population << std::endl;
	std::cout << std::endl;
}

void FilterByPopulation(std::list<Country> countries, double population)
{
	std::cout << std::endl;
	std::cout << "The countries with Population -> " << population << " millions are: " << std::endl;

	for (Country country : countries)
		if (country.population == population)
			PrintCountry(country);
}

int main()
{
	std::list<Country> countries;

	std::cout << "How many countries you want to input? - ";
	int numberOfCountries;
	std::cin >> numberOfCountries;

	for (int i = 0; i < numberOfCountries; i++)
	{
		std::cout << "Enter Country: ";
		std::string name;
		std::cin >> name;

		std::cout << "Enter Capital: ";
		std::string capital;
		std::cin >> capital;

		std::cout << "Enter Population: ";
		int population;
		std::cin >> population;

		std::cout << std::endl;

		Country country(name, capital, population);
		countries.push_back(country);
	}

	std::cout << "Which is the populations (millions) that you want to filter? - ";
	double population;
	std::cin >> population;

	FilterByPopulation(countries, population);

    return 0;
}