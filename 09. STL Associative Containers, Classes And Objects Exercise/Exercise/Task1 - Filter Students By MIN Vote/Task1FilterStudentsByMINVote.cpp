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

class Student
{
public:
	std::string name;
	std::string surname;
	int age;
	double vote;

	Student();
	Student(std::string name, std::string surname, int age, double vote);
	~Student();
};

Student::Student()
{
}

Student::Student(std::string name, std::string surname, int age, double vote)
{
	this->name = name;
	this->surname = surname;
	this->age = age;
	this->vote = vote;
}

Student::~Student()
{
}

void PrintStudent(Student student)
{
	std::cout << "Name -> " << student.name << " " << student.surname << std::endl;
	std::cout << "Age -> " << student.age << std::endl;
	std::cout << "Vote -> " << student.vote << std::endl;
	std::cout << std::endl;
}

void FilterByVote(std::list<Student> students, double minVote)
{
	std::cout << std::endl;
	std::cout << "The students with MIN vote -> " << minVote << " are:" << std::endl;

	for (Student student : students)
		if (student.vote >= minVote)
			PrintStudent(student);
}

int main()
{
	std::list<Student> students;

	std::cout << "How many students you want to input? - ";
	int numberOfStudents;
	std::cin >> numberOfStudents;

	for (int i = 0; i < numberOfStudents; i++)
	{
		std::cout << "Enter Name: ";
		std::string name;
		std::cin >> name;

		std::cout << "Enter Surname: ";
		std::string surname;
		std::cin >> surname;

		std::cout << "Enter Age: ";
		int age;
		std::cin >> age;

		std::cout << "Enter Vote (the vote can be with decimal point): ";
		double vote;
		std::cin >> vote;

		std::cout << std::endl;

		Student student(name, surname, age, vote);
		students.push_back(student);
	}

	std::cout << "Which is the minimal vote that you would like to filter? - ";
	double minVote;
	std::cin >> minVote;

	FilterByVote(students, minVote);

	return 0;
}