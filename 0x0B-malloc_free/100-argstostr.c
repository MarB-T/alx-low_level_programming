#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - gets length of string
 * @s: the string in question
 * Return: lenght (int)
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

/**
 * argstostr - concatenates arguments of the program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer or NULL
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, n = 0, size = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		n += _strlen(av[i]);
	}
	size = n + ac - 1;
	str = (char *)malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);

}
