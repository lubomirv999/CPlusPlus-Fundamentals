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

class RationalNumber
{
private:
	int num;
	int den;

public:
	RationalNumber()
	{
		num = 1;
		den = 0;
	};

	~RationalNumber();

	int GetNum() const
	{
		return num;
	}

	int GetDen()
	{
		return den;
	}

	void SetNum(int otherNum)
	{
		this->num = otherNum;
	}

	void SetDen(int otherDen)
	{
		if (otherDen == 0)
			otherDen = 1;

		this->den = otherDen;
	}

	void Print();
};

RationalNumber::~RationalNumber()
{
}

void RationalNumber::Print()
{
	std::cout << this->num << "/" << this->den << std::endl;
}

RationalNumber Sum(RationalNumber firstNum, RationalNumber secondNum)
{
	RationalNumber temp;
	temp.SetNum(firstNum.GetNum() * secondNum.GetDen() + secondNum.GetNum() * firstNum.GetDen());
	temp.SetDen(firstNum.GetDen() * secondNum.GetDen());	

	return temp;
}

RationalNumber Difference(RationalNumber firstNum, RationalNumber secondNum)
{
	RationalNumber temp;
	temp.SetNum(firstNum.GetNum() * secondNum.GetDen() - secondNum.GetNum() * firstNum.GetDen());
	temp.SetDen(firstNum.GetDen() * secondNum.GetDen());

	return temp;
}

RationalNumber Multiply(RationalNumber firstNum, RationalNumber secondNum)
{
	RationalNumber temp;
	temp.SetNum(firstNum.GetNum() * secondNum.GetNum());
	temp.SetDen(firstNum.GetDen() * secondNum.GetDen());

	return temp;
}

RationalNumber Division(RationalNumber firstNum, RationalNumber secondNum)
{
	RationalNumber temp;
	temp.SetNum(firstNum.GetNum() * secondNum.GetDen());
	temp.SetDen(firstNum.GetDen() * secondNum.GetNum());

	return temp;
}

int main()
{
	RationalNumber firstNum;
	RationalNumber secondNum;

	int num;
	int den;

	std::cout << "Enter First Rational Number Numerator: ";
	std::cin >> num;
	firstNum.SetNum(num);

	std::cout << "Enter First Rational Number Denominator: ";
	std::cin >> den;
	firstNum.SetDen(den);
	
	std::cout << std::endl;

	std::cout << "Enter Second Rational Number Numerator: ";
	std::cin >> num;
	secondNum.SetNum(num);

	std::cout << "Enter Second Rational Number Denominator: ";
	std::cin >> den;
	secondNum.SetDen(den);

	std::cout << std::endl;

	RationalNumber temp;	
	
	std::cout << "Sum: ";
	temp = Sum(firstNum, secondNum);
	temp.Print();

	std::cout << "Difference: ";
	temp = Difference(firstNum, secondNum);
	temp.Print();

	std::cout << "Ìultiplication: ";
	temp = Multiply(firstNum, secondNum);
	temp.Print();

	std::cout << "Division: ";
	temp = Division(firstNum, secondNum);
	temp.Print();

	return 0;
}