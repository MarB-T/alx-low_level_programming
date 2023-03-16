#include <stdio.h>
#include "main.h"


int _isdigit(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (!(s[i] >= 0 && s[i] <= 9))
		{
			return (0);
		}
		s++;
	}
	return (1);
}


/**
 * main - multiplies two positive numbers
 * @num1: the first number
 * @num2: the second number
 * Return: product num1 * num2
 */
long double main(int argc, char **argv)
{
	int i;
	long double mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (_isdigit(argv[1]) == 0 || _isdigit(argv[2]) == 0)
	{
		printf("Error\n");
		exit(98);
	}
	
}
