#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - Copies a string including the termination character
 * @dest: Destination of string
 * @src: Source of the string
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest_start);
}
