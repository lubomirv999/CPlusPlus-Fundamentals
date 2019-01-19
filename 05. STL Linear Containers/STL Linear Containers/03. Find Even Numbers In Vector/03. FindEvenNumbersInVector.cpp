#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec;
	vector<int> oddNumbersVec;
	bool evenNumberExists = false;

	int sizeOfVector;
	cin >> sizeOfVector;

	for (int i = 0; i < sizeOfVector; i++)
	{
		int number;
		cin >> number;

		vec.push_back(number);
	}

	for (int i = 0; i < vec.size(); i++)
		if (vec.at(i) % 2 == 0)
			evenNumberExists = true;
		else
			oddNumbersVec.push_back(vec.at(i));

	if (evenNumberExists)
		for (int i = 0; i < oddNumbersVec.size(); i++)
			cout << oddNumbersVec.at(i);
	else
		cout << "EVEN not found";

	return 0;
}