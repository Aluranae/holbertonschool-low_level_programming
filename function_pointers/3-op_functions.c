#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - Adds two integers
* @a: first integer
* @b: second integer
*
* Return: the sum of a and b
*/


int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - Subtracts two integers
* @a: first integer
* @b: second integer
*
* Return: the difference of a and b
*/

int op_sub(int a, int b)
{
	return (a - b);
}


/**
* op_mul - Multiplies two integers
* @a: first integer
* @b: second integer
*
* Return: the prod of a and b
*/

int op_mul(int a, int b)
{
	return (a * b);
}


/**
* op_div - Divides two integers
* @a: first integer
* @b: second integer
*
* Return: the div of a and b
*/


int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
			exit(100);
	}
	return (a / b);
}


/**
* op_mod - Computes the remainder of the division
* @a: first integer
* @b: second integer
*
* Return: the remainder of the division of a by b
*/


int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
			exit(100);
	}
	return (a % b);
}
