#include <stdio.h>

/**
 * times_table - Function to print times table
 * Return: 0 -Success
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	int m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			m = i * j;
			if (m < 10)
			{
				putchar(m + '0');
				if (j != 9)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
				}
			}
			else
			{
				putchar((m / 10) + '0');
				putchar((m % 10) + '0');
				if (j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
	}
}
