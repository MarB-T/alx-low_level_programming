#include "main.h"

/**
 * _strcat - Function to concatenate two strings with a limit
 * @dest: First string
 * @src: Second string
 * @n: max limit of src to append
 * Return: char pointer
 */

char *_strcat(char *dest, char *src, int n)
{
	int index = 0;
	int len2 = 0;
	int dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	while (src[index++])
	{
		len2++;
	}
	if (len2 > n)
	{
		len2 = n;
	}
	for (index = 0; index < len2; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
