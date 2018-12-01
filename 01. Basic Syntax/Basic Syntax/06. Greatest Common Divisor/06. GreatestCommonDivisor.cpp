#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int firstNum, secondNum;
	cin >> firstNum >> secondNum;

	while (firstNum != secondNum)
	{
		if (firstNum < secondNum)
			swap(firstNum, secondNum);

		firstNum -= secondNum;
	}

	cout << firstNum;
	return 0;
}