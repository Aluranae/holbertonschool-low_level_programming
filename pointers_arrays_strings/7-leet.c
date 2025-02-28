#include "main.h"

/**
* leet - Encodes a string into 1337.
* @str: The string to modify.
*
* Return: Pointer to the modified string.
*/

char *leet(char *str)
{
	int i;

	int j;

	char letters[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	char numbers[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	i = 0;

	while (str[i] != '\0')
	{
	for (j = 0; j < 10; j++)

	if (str[i] == letters[j])
		{
		str[i] = numbers[j];
		break;
		}
		i++;
	}

	return (str);
}
