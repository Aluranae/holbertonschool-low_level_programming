#Include "main.h"

/**
 * _islower(int c) - checks for lowercase character.
 * @c: The character to be checked.
 * Returns 1 if c is lowercase.
 * Returns 0 otherwise.
 */

int_islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
