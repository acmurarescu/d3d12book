// Chapter2Exercise18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	// | M11 M12 M13 |
	// | M21 M22 M23 |
	// | M31 M32 M33 |
	// initial matrix
	int matrix3x3[3][3] = { 
		{ 1, 2, 3 }, 
		{ 4, 5, 6 }, 
		{ 7, 8, 9 } 
	};

	int matrix3x3transpose[3][3];

	//transpose operations
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{

			matrix3x3transpose[j][i] = matrix3x3[i][j];
			
		}
	}

	std::cout << "Matrix before transpose \n";

	for (int i = 0; i < 3; i++)
	{
		std::cout << "\n";
		for (int j = 0; j < 3; j++)
		{
			std::cout << matrix3x3[i][j] << " ";
		}
	}

	std::cout << "Matrix after transpose \n";

	for (int i = 0; i < 3; i++)
	{
		std::cout << "\n";
		for (int j = 0; j < 3; j++)
		{
			std::cout << matrix3x3transpose[i][j] << " ";
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
