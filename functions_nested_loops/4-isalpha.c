/**
 * _isalpha - Checks if a character is an alphabetic letter.
 * @c: The character to be checked.
 *
 * Description: This function checks if the given character `c`
 * is a letter, whether lowercase ('a' to 'z') or uppercase ('A' to 'Z').
 *
 * Return: 1 if `c` is a letter, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
