#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - find the first occurence of any of a set of bytes in a string.
 * @s: The string in question
 * @accept: char-set to check for
 * Return: pointer to the first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
