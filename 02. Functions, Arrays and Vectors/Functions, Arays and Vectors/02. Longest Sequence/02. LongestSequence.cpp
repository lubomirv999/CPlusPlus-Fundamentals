#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int numberOfElements, counter = 1, currentCounter = 1, mostFrequentElement = 0;
	cin >> numberOfElements;

	int nums[numberOfElements];

	for (int i = 0; i < numberOfElements; i++)
		cin >> nums[i];

	for (int i = 0; i < numberOfElements - 1; i++)
	{
		if (nums[i] == nums[i + 1])
		{
			currentCounter++;

			if (currentCounter >= counter)
			{
				counter = currentCounter;
				mostFrequentElement = nums[i];
			}
		}
		else
			currentCounter = 1;
	}

	if (counter > 1)
		for (int i = 0; i < counter; i++)
			cout << mostFrequentElement << " ";
	else
		cout << nums[numberOfElements - 1];

	return 0;
}