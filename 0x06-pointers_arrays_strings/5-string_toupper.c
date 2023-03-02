#include "main.h"

/**
 * string_toupper - Changes letters to uppercase
 * @str: The string in question
 * Return: Pointer to changed string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
