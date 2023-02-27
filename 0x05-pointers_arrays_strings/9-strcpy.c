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
	int len, i;

	while (*src != '\0')
	{
		len++;
		src++;
	}
	src -= len;
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
