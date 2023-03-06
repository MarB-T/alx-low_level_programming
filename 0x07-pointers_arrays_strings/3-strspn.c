#include "main.h"
#include <stdio.h>

/**
 * _strspn - Finds the length of a prefix substring
 * @s: The main string
 * @accept: The subxtring
 * Return: Length of s containing accept
 */

unsigned int _strspn(char *s, char *accept)
{
	size_t count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		int match = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}
		if (match == 0)
		{
			return (count);
		}
		count++;
	}
	return (count);
}
