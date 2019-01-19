#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int counter[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	const int numberOfElements = 13;
	int max = 1;

	int nums[numberOfElements];

	for (int i = 0; i < numberOfElements; i++)
		cin >> nums[i];

	for (int i = 0; i < numberOfElements; i++)
		counter[nums[i]]++;

	for (int i = 0; i < 10; i++)
		if (counter[i] >= max)
			max = counter[i];

	for (int i = 0; i < 10; i++)
		if (counter[i] == max)
			cout << i << " ";

	return 0;
}