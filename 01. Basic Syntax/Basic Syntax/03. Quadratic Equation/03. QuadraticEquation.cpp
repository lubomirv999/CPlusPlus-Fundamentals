#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c, d;
	cin >> a >> b >> c;

	d = (b * b) - (4 * a * c);

	if (d < 0)
	{
		cout << "no roots";
		return 0;
	}
	else if (d == 0)
	{
		cout << (-b) / (2 * a);
		return 0;
	}
	else if (d > 0) 
	{
		cout << (-b + sqrt(d)) / (2 * a) << " " << (-b - sqrt(d)) / (2 * a);
		return 0;
	}

	return 0;
}