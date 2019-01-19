#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	const int numberOfElements = 3;
	int prod = 1;

	int nums[numberOfElements];

	for (int i = 0; i < numberOfElements; i++)
		cin >> nums[i];

	for (int i = 0; i < numberOfElements; i++)
		for (int j = 0; j < numberOfElements; j++)
			cout << nums[i] * nums[j] << " ";

	return 0;
}