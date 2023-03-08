#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Gets the length of a string
 * @s: the string in question
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s != '\0')
	{
		s++;
		len = _strlen_recursion(s);
		return (len + 1);
	}
	else
		return (0);
}
