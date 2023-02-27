#include "main.h"

/**
 * _strlen - determine length of a string
 * @s: String whose length to find
 * Return: string lenght
 */

int _strlen(char *s)
{
	int len, i = 0;

	while (*s[i] != '\0')
	{
		len++;
	}
	return (len);

}
