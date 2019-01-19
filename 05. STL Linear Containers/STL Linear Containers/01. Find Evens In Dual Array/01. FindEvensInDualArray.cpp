#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int matrix[10][10];

	int rows, cols, evenCounter = 0;
	cin >> rows;
	cin >> cols;

	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			cin >> matrix[i][j];

	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			if (matrix[i][j] % 2 == 0)
				evenCounter++;

	cout << evenCounter;

	return 0;
}