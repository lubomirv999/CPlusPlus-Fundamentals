#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int numberOfElements, min = INT32_MAX;
	cin >> numberOfElements;

	int nums[numberOfElements];

	for (int i = 0; i < numberOfElements; i++)
		cin >> nums[i];

	for (int i = 0; i < numberOfElements; i++)
		for (int j = 0; j < numberOfElements; j++)
			if (nums[i] != nums[j])
				if (abs(nums[i] - nums[j]) < min)
					min = abs(nums[i] - nums[j]);

	if (min != INT32_MAX)
		cout << min;
	else
		cout << 0;

	return 0;
}