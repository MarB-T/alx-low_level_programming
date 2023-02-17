#include <stdio.h>

/**
 * main - Using putchar to dispaly single digit numbers 0-9
 * Return: 0 (success)
 */

int main(void)
{
	int i = 0;

	do {
		putchar(i + '0');
		i++;
		putchar(',');
		putchar(' ');
	} while (i < 10)
	putchar('\n');
	return (0);
}
