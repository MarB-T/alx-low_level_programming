#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Prints numbers to 14 using _putchar
 * Return: 0 Success
 */

int main(void)
{
	int i;
	int j;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(j);
		}
		for (x = 10; x <= 14; x++)
		{
			putchar(x + '0');
		}
		putchar('\n');
	}
	return (0);
}
