#include <stdio.h>

/**
 * main - Using putchar to dispaly single digit numbers 0-9
 * Return: 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
