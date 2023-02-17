#include <stdio.h>

/**
 * main - Using putchar to dispaly single digit numbers 0-9
 * Return: 0 (success)
 */

int main(void)
{
	int i = 0;
	int a = 97;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	for (a = 97; a <= 102; a++)
	{
		char b = a;

		putchar(b);
	}
	putchar('\n');
	return (0);
}
