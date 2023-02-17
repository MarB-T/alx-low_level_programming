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
		if (i == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		i++;
	} while (i < 10);
	putchar('\n');
	return (0);
}
