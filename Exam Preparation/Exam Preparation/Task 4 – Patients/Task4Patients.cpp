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

class Date
{
private:
	int day;
	int month;
	int year;

public:
	// If all constructors can be invoked with no user input the compiler does not know which to use

	//Date()
	//{
	//};

	Date(int day = 1, int month = 1, int year = 1900)
	{
		SetDay(day);
		SetMonth(month);
		SetYear(year);
	};

	~Date()
	{
	};

	int GetDay()
	{
		return day;
	}

	int GetMonth()
	{
		return month;
	}

	int GetYear()
	{
		return year;
	}

	void SetDay(int day)
	{
		this->day = day;
	}

	void SetMonth(int month)
	{
		this->month = month;
	}

	void SetYear(int year)
	{
		this->year = year;
	}

	void Print()
	{
		std::cout << "Birthday: " << this->day << "/" << this->month << "/" << this->year << std::endl;
	}
};

class Patient
{
private:
	std::string name;
	int visits;
	Date birthDate;

public:
	Patient()
	{
	};

	Patient(std::string name, int visits, Date date)
	{
		SetName(name);
		SetVisits(visits);
		SetDate(date);		
	};

	~Patient()
	{
	};

	std::string GetName()
	{
		return name;
	}

	int GetVisits()
	{
		return visits;
	}

	Date GetDate()
	{
		return birthDate;
	}

	void SetName(std::string name)
	{
		this->name = name;
	}

	void SetVisits(int visits)
	{
		this->visits = visits;
	}

	void SetDate(Date date)
	{
		this->birthDate.SetDay(date.GetDay());
		this->birthDate.SetMonth(date.GetMonth());
		this->birthDate.SetYear(date.GetYear());
	}

	void Print()
	{
		std::cout << "Name: " << name << std::endl;
		std::cout << "Visits: " << visits << std::endl;
		birthDate.Print();
		std::cout << std::endl;
	}
};

void PrintPatients(std::vector<Patient> patients)
{
	for (std::vector<Patient>::iterator i = patients.begin(); i != patients.end(); i++)
		i->Print();
}

int sumPatientsVisits(std::vector<Patient> patients)
{
	int sumVisits = 0;

	for (std::vector<Patient>::iterator i = patients.begin(); i != patients.end(); i++)
		sumVisits += i->GetVisits();

	return sumVisits;
}

int main()
{
	std::vector<Patient> patients;

	std::cout << "Enter number of patients: ";
	int numberOfPatients;
	std::cin >> numberOfPatients;

	for (int i = 0; i < numberOfPatients; i++)
	{
		std::cout << "Enter name: ";
		std::string name;
		std::cin >> name;

		std::cout << "Enter visits: ";
		int visits;
		std::cin >> visits;

		std::cout << "Enter date of birthday (dd/mm/yy)" << std::endl;
		std::cout << "Enter day: ";
		int day;
		std::cin >> day;

		std::cout << "Enter month: ";
		int month;
		std::cin >> month;

		std::cout << "Enter year: ";
		int year;
		std::cin >> year;

		Date date(day, month, year);
		Patient patient(name, visits, date);

		patients.push_back(patient);
		std::cout << std::endl;
	}

	PrintPatients(patients);

	int totalVisits = sumPatientsVisits(patients);
	std::cout << "Sum of visits: " << totalVisits << std::endl;

	return 0;
}