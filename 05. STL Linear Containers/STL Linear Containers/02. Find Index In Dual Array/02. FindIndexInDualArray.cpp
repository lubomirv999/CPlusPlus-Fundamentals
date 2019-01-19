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

	bool numberExistsInMatrix = false;
	int numberToFind;
	cin >> numberToFind;

	int rows, cols;
	cin >> rows;
	cin >> cols;

	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			cin >> matrix[i][j];

	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			if (matrix[i][j] == numberToFind)
			{
				numberExistsInMatrix = true;
				cout << i << j << endl;
			}

	if (!numberExistsInMatrix)
		cout << "Number not found";

	return 0;
}