#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination of the copying
 * @src: Memory area to be copied
 * @n: Number of bytes to copy
 * Return: Address copied to ie dest
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
