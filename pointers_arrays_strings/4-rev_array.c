#include "main.h"

/**
* reverse_array - Reverses an array of integers.
* @a: The array to reverse.
* @n: The number of elements in the array.
*/

void reverse_array(int *a, int n)
{
	int i;

	int j;

	j = n - 1;

	for (i = 0; i < j; i++, j--)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
	}

}
