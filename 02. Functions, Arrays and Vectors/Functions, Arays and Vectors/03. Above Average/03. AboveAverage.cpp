#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	const int numberOfElements = 5;
	int sum = 0, average = 0;

	int nums[numberOfElements];

	for (int i = 0; i < numberOfElements; i++)
		cin >> nums[i];

	for (int i = 0; i < numberOfElements; i++)
		sum += nums[i];

	average = sum / numberOfElements;

	for (int i = 0; i < numberOfElements; i++)
		if (nums[i] >= average)
			cout << nums[i] << " ";

	return 0;
}