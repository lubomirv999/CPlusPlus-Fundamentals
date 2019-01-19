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

class BankAccount
{
public:
	std::string name;
	std::string accountNumber;
	double balance;

	BankAccount();
	BankAccount(std::string name, std::string accountNumber, double balance);
	~BankAccount();

	void Print();
	void AddBalance();
	void WithdrawBalance();

	// If We Use Getters And Setters
	/*void SetInitialBalance(double initialBalance)
	void SetAccountNumber(std::string accountNumber);
	void GetBalance();*/
};

BankAccount::BankAccount()
{
}

BankAccount::BankAccount(std::string name, std::string accountNumber, double balance)
{
	this->name = name;
	this->accountNumber = accountNumber;
	this->balance = balance;
}

BankAccount::~BankAccount()
{
}

void BankAccount::Print()
{
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Account Number: " << this->accountNumber << std::endl;
	std::cout << "Balance: " << this->balance << std::endl;
}

void BankAccount::AddBalance()
{
	std::cout << "Enter Balance To Add: ";
	double balanceToAdd;
	std::cin >> balanceToAdd;

	if (balanceToAdd <= 0)
	{
		std::cout << "You can not add zero or negative balance!" << std::endl;
		return;
	}

	this->balance += balanceToAdd;
	std::cout << "Added: " << balanceToAdd << std::endl;
	std::cout << "New Balance: " << this->balance << std::endl;
}

void BankAccount::WithdrawBalance()
{
	std::cout << "Enter Balance To Withdraw: ";
	double balanceToWithdraw;
	std::cin >> balanceToWithdraw;

	if (balanceToWithdraw > this->balance)
	{
		std::cout << "Not Enough Balance!" << std::endl;
		return;
	}

	this->balance -= balanceToWithdraw;

	std::cout << "Withdrawed: " << balanceToWithdraw << std::endl;
	std::cout << "New Balance: " << this->balance << std::endl;
}

void PrintMenu()
{
	std::cout << std::endl;
	std::cout << "Would you like to do?" << std::endl;
	std::cout << "Press 1 To Show All Information..." << std::endl;
	std::cout << "Press 2 To Add Balance..." << std::endl;
	std::cout << "Press 3 To Withdraw Balance..." << std::endl;
	std::cout << "Press 0 To Exit Program..." << std::endl;
	std::cout << "Enter command: ";
}

int main()
{
	std::cout << "Enter name: ";
	std::string name;
	std::cin >> name;

	std::cout << "Enter 5 charactes IBAN Code: ";
	std::string iban;
	std::cin >> iban;

	std::cout << "Enter Initial Balance: ";
	double initialBalance;
	std::cin >> initialBalance;

	BankAccount bankAccount(name, iban, initialBalance);

	PrintMenu();

	int command;
	std::cin >> command;

	while (command != 0)
	{
		std::cout << std::endl;
		if (command == 1)
			bankAccount.Print();
		else if (command == 2)
			bankAccount.AddBalance();
		else if (command == 3)
			bankAccount.WithdrawBalance();

		PrintMenu();
		std::cin >> command;
	}

	return 0;
}