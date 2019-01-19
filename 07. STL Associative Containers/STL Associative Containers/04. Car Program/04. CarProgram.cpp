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

using namespace std;

int main()
{
	int numberOfCarsToInput;
	cin >> numberOfCarsToInput;

	map<string, pair<string, int>> cars;
	map<string, int> modelAndYearMap;

	for (int i = 0; i < numberOfCarsToInput; i++)
	{
		string made;
		cin >> made;

		string model;
		cin >> model;

		int year;
		cin >> year;

		//cars.emplace - before insert check if key exists - works too
		cars.insert(pair<string, pair<string, int>>(made, pair<string, int>(model, year)));
	}

	int action;
	cin >> action;

	if (action == 1) {
		string madeToFilterBy;
		cin >> madeToFilterBy;

		for (pair<string, pair<string, int>> person : cars)
			if (person.first == madeToFilterBy)
				cout << person.first << " " << person.second.first << " " << person.second.second << endl;
	}
	else if (action == 2)
		for (pair<string, pair<string, int>> person : cars)
			cout << person.first << " " << person.second.first << " " << person.second.second << endl;

	return 0;
}