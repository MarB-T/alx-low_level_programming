#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - determines the length of string
 * @s: string in questio
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1, len2, n;
	char *new;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	n = len1 + len2 + 1;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	new = malloc(sizeof(char) * n);
	if (new == NULL)
		return (NULL);
	for (i = 0; i <= n; i++)
	{
		if (i == n)
			new[i] = '\0';
		if (len1 == 0)
		{
			new[i] = s2[i];
		}
		if (len2 == 0)
		{
			new[i] = s1[i];
		}
		if (i < len1)
		{
			new[i] = s1[i];
		}
		if (i >= len1)
		{
			new[i] = s2[i - len1];
		}
	}
	return (new);
}
