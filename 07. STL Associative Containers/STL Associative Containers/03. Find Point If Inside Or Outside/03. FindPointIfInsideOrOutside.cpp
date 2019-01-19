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

using namespace std;

int main()
{
	vector<pair<int, int>> vec;

	int firstPointX, firstPointY, secondPointX, secondPointY, checkPointX, checkPointY;

	cin >> firstPointX;
	cin >> firstPointY;
	cin >> secondPointX;
	cin >> secondPointY;
	cin >> checkPointX;
	cin >> checkPointY;

	vec.push_back(pair<int, int>(firstPointX, firstPointY));
	vec.push_back(pair<int, int>(secondPointX, secondPointY));
	vec.push_back(pair<int, int>(checkPointX, checkPointY));

	if (abs(vec.at(2).first) >= abs(vec.at(0).first) 
		&& abs(vec.at(2).second) >= abs(vec.at(0).second)
		&& abs(vec.at(2).first) <= abs(vec.at(1).first)
		&& abs(vec.at(2).second) <= abs(vec.at(1).second)) {
		cout << "Check point is inside";
	}
	else {
		cout << "Check point is outside";
	}

    return 0;
}