#include "main.h"

/**
 * _strcat - Function to concatenate two strings
 * @dest: First string
 * @src: Second string
 * Return: char pointer
 */

char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = _strlen(dest);
	len2 = _strlen(src);
	for (i = 0; i < len2; i++)
	{
		*(dest + len1 + i) = *src;
		src++;
	}
	*(dest + len1 + len2 + 1) = '\n';
	src -= len2;
	return (dest);
}

/**
 * _strlen - determine length of a string
 * @s: String whose length to find
 * Return: string lenght
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
