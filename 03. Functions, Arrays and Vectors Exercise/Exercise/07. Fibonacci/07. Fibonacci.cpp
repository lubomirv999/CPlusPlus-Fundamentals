#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <string>

using namespace std;

int main()
{
	const int numberOfFibonacciElements = 3;

	int arr[numberOfFibonacciElements];
	arr[0] = 0;
	arr[1] = 1;

	for (int i = 2; i < numberOfFibonacciElements; i++)
		arr[i] = arr[i - 1] + arr[i - 2];

	for (int i = 0; i < numberOfFibonacciElements; i++)
		cout << arr[i] << " ";

	cout << endl;

	return 0;
}