#include "main.h"

/**
 * _memset - Function  to fill memory with a constant byte
 * @s: Starting address
 * @b: The byte to fill with
 * @n: Number of bytes
 * Return: s (start address)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
