#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size of s2 to concatenate
 * Return: pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, i = 0;
	char *res;

	res = malloc(sizeof(s1) + n + 1);
	if (res == NULL)
	{
		return (NULL);
	}
	len1 = strlen(s1);
	for (i = 0; i < (len1 + n); i++)
	{
		if (i < len1)
		{
			res[i] = s1[i];
		}
		if (i >= len1)
		{
			res[i] = s2[(i - len1)];
		}
	}
	res[i] = '\0';
	return (res);
}
