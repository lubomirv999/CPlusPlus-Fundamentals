#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>
#include <functional>
#include <list>

using namespace std;

int main()
{
	list<int> numbers;

	int sizeOfList;
	cin >> sizeOfList;

	for (int i = 0; i < sizeOfList; i++)
	{
		int number;
		cin >> number;

		numbers.push_back(number);
	}

	numbers.sort(greater<int>());

	for (int number : numbers)
		cout << number;

	return 0;
}