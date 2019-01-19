#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

bool CompareStrings(string firstString, string secondString)
{
	if (firstString.length() == secondString.length())
	{
		for (int i = 0; i < firstString.length(); i++)
			if (firstString[i] != secondString[i])
				return false;

		return true;
	}
	else
		return false;
}

int main()
{
	string firstString, secondString;
	cin >> firstString;
	cin >> secondString;

	if (CompareStrings(firstString, secondString))
		cout << "Equal";
	else
		cout << "Not Equal";

	return 0;
}