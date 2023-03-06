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

	int match = 1, len2 = 0;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			break;
		}
		else
		{
			return (NULL);
		}
		haystack++;
	}
	if (*needle == '\0')
		return (haystack);
	while (*(needle + len2) != '\0')
	{
		if (*(needle + len2) != *(haystack + len2))
		{
			match = 0;
			break;
		}
		len2++;
	}
	if (match == 1)
	{
		return (haystack);
	}
	else
		return (NULL);
}
