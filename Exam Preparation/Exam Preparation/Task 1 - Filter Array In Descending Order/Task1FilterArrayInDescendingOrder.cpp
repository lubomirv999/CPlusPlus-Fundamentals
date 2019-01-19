#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>
#include <vector>
#include <functional>
#include <list>
#include <map>
#include <cctype>
#include <algorithm>
#include <sstream>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int sizeOfArray)
{
	for (int i = 0; i < sizeOfArray - 1; i++)
		for (int j = 0; j < sizeOfArray - i - 1; j++)
			if (arr[j] < arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

void print(int arr[], int sizeOfArray)
{
	std::cout << "Sorted Array: " << std::endl;
	for (int i = 0; i < sizeOfArray; i++)
		std::cout << arr[i] << " ";

	std::cout << std::endl;
}

int main()
{
	const int sizeOfArray = 5;
	int arr[5];

	for (int i = 0; i < sizeOfArray; i++)
	{
		int num;
		std::cin >> num;

		arr[i] = num;
	}

	bubbleSort(arr, sizeOfArray);	
	print(arr, sizeOfArray);

	return 0;
}