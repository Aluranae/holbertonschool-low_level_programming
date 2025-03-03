#include "main.h"
#include <stdio.h>

/**
* print_chessboard - Prints a chessboard
* @a: 2D array representing the chessboard (8x8)
*
* Description: This function prints the content of an 8x8
* chessboard stored in a 2D array. Each row is printed on
* a new line.
*
* Return: void (nothing is returned)
*/

void print_chessboard(char (*a)[8])

{
	int i = 0;

	int j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
