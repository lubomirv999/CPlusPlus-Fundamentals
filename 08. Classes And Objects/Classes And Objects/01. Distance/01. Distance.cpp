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

class Point
{
public:
	int x;
	int y;

	Point();
	Point(int x, int y);
	~Point();
};

Point::Point()
{
}

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

Point::~Point()
{
}

int main()
{
	std::string firstLine;
	std::getline(std::cin, firstLine);

	std::string secondLine;
	std::getline(std::cin, secondLine);

	int firstPointX, firstPointY, secondPointX, secondPointY;

	std::istringstream firstPointCords(firstLine);
	firstPointCords >> firstPointX >> firstPointY;

	std::istringstream secondPointCords(secondLine);
	secondPointCords >> secondPointX >> secondPointY;

	Point firstPoint(firstPointX, firstPointY);
	Point secondPoint(secondPointX, secondPointY);

	int xDiff = (firstPointX - secondPoint.x) * (firstPointX - secondPoint.x);
	int yDiff = (firstPoint.y - secondPoint.y) * (firstPoint.y - secondPoint.y);
	double distance = sqrt(abs(xDiff + yDiff));

	std::cout << distance;
}