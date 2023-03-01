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
	int dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
