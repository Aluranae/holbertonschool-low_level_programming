#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the first element of a square matrix stored in a 1D array
 * @size: The size of the square matrix (number of rows and columns)
 *
 * Description: This function calculates and prints the sum of the two
 * diagonals of a square matrix. The matrix is stored as a 1D array in memory.
 *
 * Return: void (nothing is returned)
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
