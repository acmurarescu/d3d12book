// Chapter2Exercise19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	// M11 M12 M13 M14
	// M21 M22 M23 M24
	// M31 M32 M33 M34
	// M41 M42 M43 M44
	//int matrix4x4[4][4] = {
	//	{1,	 2,  3,  4},
	//	{5,  6,  7,  8},
	//	{9,  10, 11, 12},
	//	{13, 14, 15, 16}
	//};
	int matrix4x4[4][4] = {
		{ 5, -7,  2,  2},
		{ 0,  3,  0, -4},
		{-5, -8,  0,  3},
		{ 0,  5,  0, -6}
	};

	int matrix4x4inverse[4][4];

	int matrix3x3m11[3][3];
	int matrix3x3m12[3][3];
	int matrix3x3m13[3][3];
	int matrix3x3m14[3][3];

	int matrix3x3ElementM11 = matrix4x4[0][0];
	int matrix3x3ElementM12 = matrix4x4[0][1];
	int matrix3x3ElementM13 = matrix4x4[0][2];
	int matrix3x3ElementM14 = matrix4x4[0][3];

	//Print out initial 4x4 matrix
	std::cout << "\n";
	std::cout << "Initial matrix: \n";
	for (int i = 0; i < 4; i++)
	{
		std::cout << "\n";
		for (int j = 0; j < 4; j++)
		{
			std::cout << matrix4x4[i][j] << " ";
		}
	}

	//std::cout << "\n";
	//std::cout << "\n";
	//std::cout << "M11 element: " << matrixElementM11 << "\n";
	//std::cout << "matrix4x4 M11 matrix: \n";
	//for (int i = 1; i < 4; i++)
	//{
	//	std::cout << "\n";
	//	for (int j = 1; j < 4; j++)
	//	{
	//		std::cout << matrix4x4[i][j] << " ";
	//	}
	//}

	// Caculate the 3x3 M11 matrix from the 4x4
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "M11 element: " << matrix3x3ElementM11 << "\n";
	std::cout << "matrix3x3m11 M11 matrix: \n";
	for (int i = 0; i < 3; i++)
	{
		int k = i + 1;
		std::cout << "\n";
		for (int j = 0; j < 3; j++)
		{
			int l = j + 1;

			matrix3x3m11[i][j] = matrix4x4[k][l];
			
			std::cout << matrix3x3m11[i][j] << " ";
		}
	}

	//std::cout << "\n";
	//std::cout << "\n";
	//std::cout << "M12 element: " << matrixElementM12 << "\n";
	//std::cout << "M12 matrix: \n";
	//for (int i = 1; i < 4; i++)
	//{
	//	std::cout << "\n";
	//	for (int j = 0; j < 4; j++)
	//	{
	//		if (j == 1)
	//		{
	//			continue;
	//		}
	//		std::cout << matrix4x4[i][j] << " ";
	//	}
	//}

	// Caculate the 3x3 M12 matrix from the 4x4
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "M12 element: " << matrix3x3ElementM12 << "\n";
	std::cout << "matrix3x3m12 M12 matrix: \n";
	for (int i = 0; i < 3; i++)
	{
		int k = i + 1;
		std::cout << "\n";
		for (int j = 0; j < 3; j++)
		{
			int l = j;

			if (l == 1)
			{
				l++;
			}

			matrix3x3m12[i][j] = matrix4x4[k][l];

			std::cout << matrix3x3m12[i][j] << " ";
		}
	}

	//std::cout << "\n";
	//std::cout << "\n";
	//std::cout << "M13 element: " << matrixElementM13 << "\n";
	//std::cout << "M13 matrix: \n";
	//for (int i = 1; i < 4; i++)
	//{
	//	std::cout << "\n";
	//	for (int j = 0; j < 4; j++)
	//	{
	//		if (j == 2)
	//		{
	//			continue;
	//		}
	//		std::cout << matrix4x4[i][j] << " ";
	//	}
	//}

	// Caculate the 3x3 M13 matrix from the 4x4
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "M13 element: " << matrix3x3ElementM13 << "\n";
	std::cout << "matrix3x3m13 M13 matrix: \n";
	for (int i = 0; i < 3; i++)
	{
		int k = i + 1;
		std::cout << "\n";
		for (int j = 0; j < 3; j++)
		{
			int l = j;

			if (l == 2)
			{
				l++;
			}

			matrix3x3m13[i][j] = matrix4x4[k][l];

			std::cout << matrix3x3m13[i][j] << " ";
		}
	}

	//std::cout << "\n";
	//std::cout << "\n";
	//std::cout << "M14 element: " << matrixElementM14 << "\n";
	//std::cout << "M14 matrix: \n";
	//for (int i = 1; i < 4; i++)
	//{
	//	std::cout << "\n";
	//	for (int j = 0; j < 3; j++)
	//	{
	//		std::cout << matrix4x4[i][j] << " ";
	//	}
	//}

	// Caculate the 3x3 M14 matrix from the 4x4
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "M14 element: " << matrix3x3ElementM14 << "\n";
	std::cout << "matrix3x3m14 M14 matrix: \n";
	for (int i = 0; i < 3; i++)
	{
		int k = i + 1;
		std::cout << "\n";
		for (int j = 0; j < 3; j++)
		{
			int l = j;

			matrix3x3m14[i][j] = matrix4x4[k][l];

			std::cout << matrix3x3m14[i][j] << " ";
		}
	}

	// Caculate the determinant of matrix3x3m11
	std::cout << "\n";
	std::cout << "\n";
	int detMatrix3x3m11 = ( (matrix3x3m11[0][0] * matrix3x3m11[1][1] * matrix3x3m11[2][2]) +
							(matrix3x3m11[0][1] * matrix3x3m11[1][2] * matrix3x3m11[2][0]) +
							(matrix3x3m11[0][2] * matrix3x3m11[1][0] * matrix3x3m11[2][1]) ) -
						  ( (matrix3x3m11[0][2] * matrix3x3m11[1][1] * matrix3x3m11[2][0]) +
							(matrix3x3m11[0][0] * matrix3x3m11[1][2] * matrix3x3m11[2][1]) +
							(matrix3x3m11[0][1] * matrix3x3m11[1][0] * matrix3x3m11[2][2]) );
	std::cout << "det(matrix3x3m11) = " << detMatrix3x3m11 << "\n";

	// Caculate the determinant of matrix3x3m12
	std::cout << "\n";
	std::cout << "\n";
	int detMatrix3x3m12 = ( (matrix3x3m12[0][0] * matrix3x3m12[1][1] * matrix3x3m12[2][2]) +
							(matrix3x3m12[0][1] * matrix3x3m12[1][2] * matrix3x3m12[2][0]) +
							(matrix3x3m12[0][2] * matrix3x3m12[1][0] * matrix3x3m12[2][1])) -
						  ( (matrix3x3m12[0][2] * matrix3x3m12[1][1] * matrix3x3m12[2][0]) +
							(matrix3x3m12[0][0] * matrix3x3m12[1][2] * matrix3x3m12[2][1]) +
							(matrix3x3m12[0][1] * matrix3x3m12[1][0] * matrix3x3m12[2][2]));
	std::cout << "det(matrix3x3m12) = " << detMatrix3x3m12 << "\n";

	// Caculate the determinant of matrix3x3m13
	std::cout << "\n";
	std::cout << "\n";
	int detMatrix3x3m13 = ( (matrix3x3m13[0][0] * matrix3x3m13[1][1] * matrix3x3m13[2][2]) +
							(matrix3x3m13[0][1] * matrix3x3m13[1][2] * matrix3x3m13[2][0]) +
							(matrix3x3m13[0][2] * matrix3x3m13[1][0] * matrix3x3m13[2][1])) -
						  ( (matrix3x3m13[0][2] * matrix3x3m13[1][1] * matrix3x3m13[2][0]) +
							(matrix3x3m13[0][0] * matrix3x3m13[1][2] * matrix3x3m13[2][1]) +
						    (matrix3x3m13[0][1] * matrix3x3m13[1][0] * matrix3x3m13[2][2]));
	std::cout << "det(matrix3x3m13) = " << detMatrix3x3m13 << "\n";

	// Caculate the determinant of matrix3x3m14
	std::cout << "\n";
	std::cout << "\n";
	int detMatrix3x3m14 = ( (matrix3x3m14[0][0] * matrix3x3m14[1][1] * matrix3x3m14[2][2]) +
							(matrix3x3m14[0][1] * matrix3x3m14[1][2] * matrix3x3m14[2][0]) +
							(matrix3x3m14[0][2] * matrix3x3m14[1][0] * matrix3x3m14[2][1])) -
						  ( (matrix3x3m14[0][2] * matrix3x3m14[1][1] * matrix3x3m14[2][0]) +
							(matrix3x3m14[0][0] * matrix3x3m14[1][2] * matrix3x3m14[2][1]) +
							(matrix3x3m14[0][1] * matrix3x3m14[1][0] * matrix3x3m14[2][2]));
	std::cout << "det(matrix3x3m14) = " << detMatrix3x3m14 << "\n";

	// Caculate the determinant of matrix4x4
	std::cout << "\n";
	std::cout << "\n";
	int detMatrix4x4 =	(matrix3x3ElementM11 * detMatrix3x3m11) -
						(matrix3x3ElementM12 * detMatrix3x3m12) +
						(matrix3x3ElementM13 * detMatrix3x3m13) -
						(matrix3x3ElementM14 * detMatrix3x3m14);
	std::cout << "det(matrix4x4) = " << detMatrix4x4 << "\n";
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
