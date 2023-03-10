#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: their difference 0 if same
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
