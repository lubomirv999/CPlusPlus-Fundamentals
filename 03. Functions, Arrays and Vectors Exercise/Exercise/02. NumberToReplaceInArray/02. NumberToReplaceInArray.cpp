#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <string>

using namespace std;

void ReplaceNumber(int arr[], const int numberOfElements, int numToReplace)
{
	for (int i = 0; i < numberOfElements; i++)
		if (arr[i] == numToReplace)
			arr[i] = 0;

	cout << "Replaced number in array: " << endl;

	for (int j = 0; j < numberOfElements; j++)
		cout << arr[j] << " ";

	cout << endl;
}

int main()
{
	const int numberOfElements = 3;
	int numToReplace;

	int arr[numberOfElements];

	for (int i = 0; i < numberOfElements; i++)
	{
		cout << "Enter number: " << endl;
		cin >> arr[i];
	}

	cout << "Enter number to replace: " << endl;
	cin >> numToReplace;

	ReplaceNumber(arr, numberOfElements, numToReplace);

	return 0;
}