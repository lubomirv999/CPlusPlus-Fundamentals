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

class Employee
{
public:
	struct Names
	{
		std::string firstName;
		std::string lastName;
	} name;

	struct Hours
	{
		int workedHours;
		int salaryPerHour;
	} hours;

	Employee();
	~Employee();

	void Read();
	void Print();
};

Employee::Employee()
{
}

Employee::~Employee()
{
}

void Employee::Read()
{
	std::cout << "Enter First Name: ";
	std::string firstName;
	std::cin >> firstName;

	std::cout << "Enter Last Name: ";
	std::string lastName;
	std::cin >> lastName;

	std::cout << "Enter Hours: ";
	int hours;
	std::cin >> hours;

	std::cout << "Enter Salary Per Hour: ";
	int salaryPerHour;
	std::cin >> salaryPerHour;

	std::cout << std::endl;

	this->name.firstName = firstName;
	this->name.lastName = lastName;

	this->hours.workedHours = hours;
	this->hours.salaryPerHour = salaryPerHour;
}

void Employee::Print()
{	
	double totalSalary = this->hours.workedHours * this->hours.salaryPerHour;

	std::cout << this->name.firstName << " " << this->name.lastName << std::endl;
	std::cout << "Worked Hours: " << this->hours.workedHours << std::endl;
	std::cout << "Total Salary (hours*salaryPerHour): " << totalSalary << std::endl;
}

int main()
{
	Employee employee;
	employee.Read();
	employee.Print();
		
    return 0;
}