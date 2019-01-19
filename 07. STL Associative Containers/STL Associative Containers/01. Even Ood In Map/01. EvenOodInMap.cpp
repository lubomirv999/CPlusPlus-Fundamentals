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
	int keysToInsert;
	cin >> keysToInsert;

	map<int, string> map;

	for (int i = 0; i < keysToInsert; i++)
	{
		string evenOrOdd;

		if (i % 2 == 0)
			evenOrOdd = "EVEN";
		else
			evenOrOdd = "ODD";

		map.insert(pair<int,string>(i, evenOrOdd));
	}

	for (int i = 0; i < map.size(); i++)
	{
		cout << "KEY: " << i << " VALUE: " << map.at(i) << endl;
	}

	return 0;
}