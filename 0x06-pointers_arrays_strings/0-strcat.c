#include "main.h"

/**
 * _strcat - Function to concatenate two strings
 * @dest: First string
 * @src: Second string
 * Return: char pointer
 */

char *_strcat(char *dest, char *src)
{
	int len1 = _strlen(dest);
	char *ptr = dest + len1;

	while (*src != '\0')
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	src -= _strlen(src);
	*ptr = '\n';
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
