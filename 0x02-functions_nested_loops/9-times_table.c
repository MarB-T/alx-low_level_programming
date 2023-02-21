#include <stdio.h>

/**
 * times_table - Function to print times table
 * Return: 0 -Success
 */

int main(void)
{
	int i = 0;
	int j = 0;
	int m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			m = i * j;
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar('\t');
		}
		putchar('\n');
	}
}
