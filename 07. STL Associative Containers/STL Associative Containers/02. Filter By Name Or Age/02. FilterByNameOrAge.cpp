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
	int numberOfPeopleToInsert;
	cin >> numberOfPeopleToInsert;

	map<string, int> map;

	for (int i = 0; i < numberOfPeopleToInsert; i++)
	{
		string name;
		cin >> name;

		int age;
		cin >> age;

		map.insert(pair<string, int>(name, age));
	}

	string filterBy;
	cin >> filterBy;

	if (filterBy == "name") {
		string nameToFilterBy;
		cin >> nameToFilterBy;

		for (pair<string, int> person : map)
			if (person.first == nameToFilterBy)
				cout << "name : " << person.first << " age : " << person.second << endl;

	}
	else if (filterBy == "age") {
		int ageToFilterBy;
		cin >> ageToFilterBy;

		for (pair<string, int> person : map)
			if (person.second == ageToFilterBy)
				cout << "name : " << person.first << " age : " << person.second << endl;
	}

	return 0;
}