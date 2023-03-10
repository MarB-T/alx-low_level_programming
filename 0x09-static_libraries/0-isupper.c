#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that check upper case characters
 * @c: Character to check
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
