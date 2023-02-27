#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */

void rev_string(char *s)
{
	int len = 0;
	int m, n;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s -= len;
	for (m = 0, n = len - 1; m < n; m++, n--)
	{
		char temp = s[m];

		s[m] = s[n];
		s[n] = temp;
	}
}
