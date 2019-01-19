#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <string>

using namespace std;

void SortArray(int arr[], const int numberOfElements)
{
	int i, j, flag = 1, temp;

	for (i = 1; (i <= numberOfElements) && flag; i++)
	{
		flag = 0;
		for (j = 0; j < numberOfElements - 1; j++)
		{
			if (arr[j + 1] < arr[j])
			{
				temp = arr[j];             
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 1;               
			}
		}
	}

	for (int i = 0; i < numberOfElements; i++)
		cout << arr[i] << " ";
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

	SortArray(arr, numberOfElements);

	return 0;
}