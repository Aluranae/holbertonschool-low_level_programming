#include "3-calc.h"

/**
* get_op_func - Selects the correct function based on the operator
* @s: The operator given as argument
*
* Return: Pointer to the function corresponding to the operator,
*         or NULL if no match is found.
*/

int (*get_op_func(char *s))(int, int)
{

int i = 0;

/* Array of structures mapping operators to functions */
op_t ops[] = {

	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};

	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op) && s[1]  == '\0')
			return (ops[i].f);
		i++;
	}
return (NULL);
}
