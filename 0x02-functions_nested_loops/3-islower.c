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

int main(void)
{
	int i = _islower('j');
	putchar(i + '0');
	printf("\n");
	return (0);
}
