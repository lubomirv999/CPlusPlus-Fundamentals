#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

bool areEqual(int firstArr[], int firstArrSize, int secondArr[], int secondArrSize)
{
	if (firstArrSize != secondArrSize)
		return false;

	for (int i = 0; i < firstArrSize; i++)
		if (firstArr[i] != secondArr[i])
			return false;

	return true;
}

int main()
{
	int firstArrSize, secondArrSize;

	cin >> firstArrSize;
	int firstArr[firstArrSize];

	for (int i = 0; i < firstArrSize; i++)
		cin >> firstArr[i];

	cin >> secondArrSize;
	int secondArr[secondArrSize];

	for (int i = 0; i < secondArrSize; i++)
		cin >> secondArr[i];

	if (areEqual(firstArr, firstArrSize, secondArr, secondArrSize))
		cout << "equal";
	else
		cout << "not equal";

	return 0;
}