#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts string to integer
 * @s: the string in question
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] == '+')
		{
			sign *= 1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + s[i] - '0';
		}
		else
		{
		}
	}
	return (result * sign);
}
