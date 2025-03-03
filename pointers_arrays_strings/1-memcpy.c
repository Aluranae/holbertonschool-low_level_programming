/**
 * _memcpy - Copies a memory area
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Number of bytes to copy
 *
 * Description: This function copies n bytes from the
 * memory area src to the memory area dest.
 *
 * Return: A pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	dest[i] = src[i];
	i++;
	}

	return (dest);
}
