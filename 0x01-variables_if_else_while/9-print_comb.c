#include <stdio.h>

/**
 * main - Using putchar to dispaly single digit numbers 0-9
 * Return: 0 (success)
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		i++;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
