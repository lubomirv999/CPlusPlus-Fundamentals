#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>
#include <vector>
#include <functional>
#include <list>
#include <map>
#include <cctype>
#include <algorithm>
#include <sstream>

int main()
{
	int hours;
	std::cin >> hours;

	int minutes;
	std::cin >> minutes;

	int seconds;
	std::cin >> seconds;

	int total = (hours * 60 * 60) + (minutes * 60) + seconds;

	int hoursParsed = total / 60 / 60;
	int minutesParsed = total / 60;
	int secondsParsed = total;

	std::cout << hoursParsed << std::endl;
	std::cout << minutesParsed << std::endl;
	std::cout << secondsParsed;
}