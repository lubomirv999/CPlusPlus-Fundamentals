#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	string input;
	cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == ',')
			input[i] = ' ';

		cout << input[i];
	}

	return 0;
}