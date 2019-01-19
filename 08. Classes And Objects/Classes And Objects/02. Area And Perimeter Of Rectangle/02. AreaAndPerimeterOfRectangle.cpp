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

class Rectangle
{
public:
	int a;
	int b;

	Rectangle();
	Rectangle(int a, int b);
	~Rectangle();
};

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int a, int b)
{
	this->a = a;
	this->b = b;
}

Rectangle::~Rectangle()
{
}

int main()
{
	int a;
	std::cin >> a;

	int b;
	std::cin >> b;

	Rectangle rectangle(a, b);

	int perimeter = 2 * (rectangle.a + rectangle.b);
	int area = rectangle.a * rectangle.b;

	std::cout << area << std::endl;
	std::cout << perimeter;
}