#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <vector>
#include <string>

using namespace std;

void FilterNumber(vector<int> vec, int numberToFilter)
{
	bool exitCycle = false;

	while (!exitCycle)
	{
		for (int i = 0; i < vec.size(); i++)
			if (vec.at(i) == numberToFilter)
				vec.erase(vec.begin() + i);

		exitCycle = true;

		for (int j = 0; j < vec.size(); j++)
			if (vec.at(j) == numberToFilter)
				exitCycle = false;
	}

	cout << "Filtered Numbers in vector: " << endl;

	for (int i = 0; i < vec.size(); i++)
		cout << vec.at(i) << " ";

	cout << endl;
}


int main()
{
	int numberOfElements, numberToFilter;;
	vector<int> vec;	

	cout << "Enter vector size : " << endl;
	cin >> numberOfElements;

	for (int i = 0; i < numberOfElements; i++)
	{
		int num;

		cout << "Enter Number: " << endl;
		cin >> num;

		vec.push_back(num);
	}

	cout << "Enter number to filter :" << endl;
	cin >> numberToFilter;

	FilterNumber(vec, numberToFilter);

	return 0;
}