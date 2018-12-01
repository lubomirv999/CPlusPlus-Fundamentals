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

	firstNum < secondNum
		? cout << firstNum << " " << secondNum
		: cout << secondNum << " " << firstNum;

	return 0;
}