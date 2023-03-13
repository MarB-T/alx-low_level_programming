#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - duplicates a string in a new location
 * @str: the string in question
 * Return: NULL or pointer
 */

char *_strdup(char *str)
{
	char *new;
	int len = 0, i;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= len;
	new = malloc((sizeof(char) * len) + 1);
	if (new == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (i == len)
		{
			new[i] = '\0';
			return (new);
		}
		new[i] = str[i];
	}
	return (new);
}
