#include "main.h"
/*** Included functions
 * _islower
 * _puts
 * _strcmp
 * _strspn
 * _isalpha
 */
/**
 * _islower - Entry point
 * Description: checks is a character is lowercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */

int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
/**
 * _puts - prints a string and a new line
 * @str: pointer to a string to print
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 * Return: If str1 < str2, the negative difference of
 * the first unmatched characters.
 *         If s1 == s2, 0.
 *         If s1 > s2, the positive difference of
 *         the first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 * Return: The number of bytes in s which
 * consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *p = s;

	while (*p && strchr(accept, *p))
	{
		len++;
		p++;
	}
	return (len);
}

/**
 * _isalpha - Checks if char is in the alphabet (ASCII)
 * @c: the integer value it receives
 * Description: checks if alphabet
 * Return: 1 if true. 0 if false
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
