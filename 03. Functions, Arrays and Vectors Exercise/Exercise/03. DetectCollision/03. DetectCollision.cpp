#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <string>

using namespace std;

bool DetectCollision(int firstPointX, int firstPointY, int secondPointX, int secondPointY)
{
	if (firstPointX >= secondPointX && firstPointY >= secondPointY)
	{
		cout << "First point is inside or after second point!" << endl;
		return true;
	}

	cout << "First point is NOT inside or after second point!" << endl;
	return false;
}

int main()
{
	bool collision = false;

	while (!collision)
	{
		int firstPointX;
		int firstPointY;
		int secondPointX;
		int secondPointY;

		cout << "Enter x1: " << endl;
		cin >> firstPointX;

		cout << "Enter y1: " << endl;
		cin >> firstPointY;

		cout << "Enter x2: " << endl;
		cin >> secondPointX;

		cout << "Enter y2: " << endl;
		cin >> secondPointY;

		collision = DetectCollision(firstPointX, firstPointY, secondPointX, secondPointY);
	}

	return 0;
}
