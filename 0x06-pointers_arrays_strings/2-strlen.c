#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen - determine length of a string
 * @s: String whose length to find
 * Return: string lenght
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);

}
