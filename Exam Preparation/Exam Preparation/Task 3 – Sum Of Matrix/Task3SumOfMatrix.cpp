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

int main()
{
	// 2
	// 1 1
	// 1 1

	// 3
	// 3 3 3
	// 3 3 3
	// 3 3 3

	// 4
	// 1 2 3 4
	// 1 2 3 4
	// 1 2 3 4
	// 1 2 3 4

	const int MATRIX_SIZE = 2;
	int matrix[MATRIX_SIZE][MATRIX_SIZE];

	int sum = 0;

	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		for (int j = 0; j < MATRIX_SIZE; j++)
		{
			std::cout << "Enter matrix[" << i << "][" << j << "] = ";
			int num;
			std::cin >> num;

			matrix[i][j] = num;
		}
	}

	for (int i = 0; i < MATRIX_SIZE; i++)
		for (int j = i + 1; j < MATRIX_SIZE; j++)
			sum += matrix[i][j];

	/*for (int i = 0; i < MATRIX_SIZE; i++)
		for (int j = 0; j < MATRIX_SIZE; j++)
			if (j > i)
				sum += matrix[i][j];*/

	std::cout << "Sum of numbers above the main diagonal: " << sum << std::endl;

	return 0;
}