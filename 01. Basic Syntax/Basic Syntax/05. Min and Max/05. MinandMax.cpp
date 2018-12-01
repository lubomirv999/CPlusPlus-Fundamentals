#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int nums, min = INT32_MAX, max = INT32_MIN;
	cin >> nums;

	for (int i = 0; i < nums; i++)
	{
		int num;
		cin >> num;

		if (num < min)
			min = num;

		if (num > max)
			max = num;
	}

	cout << min << " " << max;

	return 0;
}