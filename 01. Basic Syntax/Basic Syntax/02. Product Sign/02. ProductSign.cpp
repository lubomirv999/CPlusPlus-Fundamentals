#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int negativeNumbersCount = 0;
	double firstNum, secondNum, thirdNum;
	cin >> firstNum >> secondNum >> thirdNum;

	if (firstNum == 0 || secondNum == 0 || thirdNum == 0)
	{
		cout << "+";
		return 0;
	}

	if (firstNum < 0)
		negativeNumbersCount++;

	if (secondNum < 0)
		negativeNumbersCount++;

	if (thirdNum < 0)
		negativeNumbersCount++;

	if (negativeNumbersCount % 2 != 0)
		cout << "-";
	else
		cout << "+";

	return 0;
}