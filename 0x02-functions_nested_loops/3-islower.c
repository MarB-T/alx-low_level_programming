#include <stdio.h>

/**
 * _islower - Checks if a Char is lowercase
 * Return: 0
 * @c: char to be checked
 */

/* c - takes int argument */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
