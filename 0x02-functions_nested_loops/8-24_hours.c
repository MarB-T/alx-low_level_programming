#include <stdio.h>

/**
 * jack_bauer - Minutes of a day.
 * Return: 0 Success
 */

void jack_bauer(void)
{
	int h = 1;
	int m;

	for (h = 1; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			putchar((h/10) + '0');
			putchar((h%10) + '0');
			putchar(':');
			putchar((m/10) + '0');
			putchar((m%10) + '0');
			putchar('\n');
		}
	}
}
