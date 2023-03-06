#include "main.h"
#include <stdio.h>

/**
 * _strchr - Finds the location of the first character in a string
 * @s: The string in question
 * @c: The character to locate
 * Return: address of first instance of (c)
 */

char *_strchr(char *s, char c)
{
	while (*s != '\n')
	{
		if (*s == c)
			break;
		s++;
	}
	return (s);
}
