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

	for (int i = input.length(); i >= 0; i--)
		cout << input[i];

	return 0;
}