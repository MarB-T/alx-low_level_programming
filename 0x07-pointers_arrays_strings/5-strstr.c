#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates substring in a string
 * @haystack: the hey stack
 * @needle: the needle to find
 * Return: pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{

	int len1 = strlen(haystack), i;
	int len2 = strlen(needle), j;

	if (len2 == 0)
	{
		return (haystack);
	}
	for (i = 0; i < len1; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 1; j < len2 && i + j < len1; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}
			if (j == len2)
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}

/**
 * strlen - finds length of string
 * @s: the string in question
 * Return: len of s
 */

int strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
