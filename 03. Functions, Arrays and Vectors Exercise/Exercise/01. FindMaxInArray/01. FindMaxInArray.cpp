#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <string>

using namespace std;

void FindMaxInArray(int arr[], const int numberOfElements)
{
	int max = arr[0];

	for (int i = 0; i < numberOfElements; i++)
		if (arr[i] > max)
			max = arr[i];

	cout << "The biggest number in array is : " << max << endl;
}

int main()
{
	const int numberOfElements = 3;

	int arr[numberOfElements];

	for (int i = 0; i < numberOfElements; i++)
	{
		cout << "Enter number: " << endl;
		cin >> arr[i];
	}

	FindMaxInArray(arr, numberOfElements);

	return 0;
}