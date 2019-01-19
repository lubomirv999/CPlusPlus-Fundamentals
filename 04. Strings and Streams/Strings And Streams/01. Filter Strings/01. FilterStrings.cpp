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
		if (input[i] == '0' || input[i] == '1' || input[i] == '2' || input[i] == '3' 
			|| input[i] == '4' || input[i] == '5' || input[i] == '6' || input[i] == '7' 
			|| input[i] == '8' || input[i] == '9')
			cout << input[i];

	return 0;
}