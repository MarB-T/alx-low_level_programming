#include <stdio.h>

/**
 * _islower - Checks if a Char is lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <=122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
