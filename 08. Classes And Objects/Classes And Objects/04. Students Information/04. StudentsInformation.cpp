#include "stdafx.h"
#include <iomanip>
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

class Student
{
public:
	std::string name;
	std::string surname;
	double totalAverage;

	Student();
	Student(std::string name, std::string surname, double totalAverage);
	~Student();

	void Print();
};

Student::Student()
{
}

Student::Student(std::string name, std::string surname, double totalAverage)
{
	this->name = name;
	this->surname = surname;
	this->totalAverage = totalAverage;
}

void Student::Print()
{
	std::cout << this->name << " " << this->surname << " " << this->totalAverage;
}

Student::~Student()
{
}

int main()
{
	int numberOfStudents;
	std::cin >> numberOfStudents;

	std::list<Student> students;

	for (int i = 0; i < numberOfStudents; i++)
	{
		std::string name;
		std::cin >> name;


		std::string surname;
		std::cin >> surname;

		double totalAverage;
		std::cin >> totalAverage;

		Student student(name, surname, totalAverage);
		students.push_back(student);
	}

	for (Student student : students)
	{
		student.Print();
		std::cout << std::endl;
	}
}