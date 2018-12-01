#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <string>

using namespace std;

void IntCalculator(int firstNum, int secondNum, string sign)
{
	if (sign == "+")
		cout << "The sum is -> " << firstNum + secondNum << endl;
	else if (sign == "-")
		cout << "The difference is -> " << firstNum - secondNum << endl;
	else if (sign == "*")
		cout << "The product is -> " << firstNum * secondNum << endl;
	else if (sign == "/")
		cout << "The division is -> " << firstNum / secondNum << endl;
	else
		cout << "INVALID SIGN!" << endl;
}

int main()
{
	int firstNum, secondNum;
	string sign;

	cout << "Enter num1 : " << endl;
	cin >> firstNum;

	cout << "Enter sign : " << endl;
	cin >> sign;

	cout << "Enter num2 : " << endl;
	cin >> secondNum;

	IntCalculator(firstNum, secondNum, sign);
	return 0;
}