#include "main.h"

/**
 * _strncpy - Function that copies a string and append NULL if less characters
 * @dest: Pointer to first char of destination
 * @src: Pointer to first char of source
 * @n: Number of characters to be copied.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index, len2;

	while (src[index++])
	{
		len2++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (index = len2; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
