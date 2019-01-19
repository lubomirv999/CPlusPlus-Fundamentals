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

	int sizeOfVector, sum = 0;
	cin >> sizeOfVector;

	for (int i = 0; i < sizeOfVector; i++)
	{
		int number;
		cin >> number;

		vec.push_back(number);
	}

	for (int i = 0; i < vec.size(); i++)
		sum += vec.at(i);

	cout << sum;

	return 0;
}