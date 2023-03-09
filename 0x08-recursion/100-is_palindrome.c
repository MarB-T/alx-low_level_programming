#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Gets the length of a string
 * @s: the string in question
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s != '\0')
	{
		s++;
		len = _strlen_recursion(s);
		return (len + 1);
	}
	else
		return (0);
}

/**
 * is_pal - Check if string is palindrome
 * @s: the string in question
 * @len: length of the string
 * @index: the current index being checked
 * Return: 1 if palindrome 0 if not
 */

int is_pal(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
	{
		return (1);
	}
	if (s[index] == s[len - index - 1])
	{
		return (is_pal(s, len, index + 1));
	}
	return (0);
}


/**
 * is_palindrome - Checks is string is palindrom
 * @s: the string in question
 * Return: 1 if palindrome 0 if not
 */

int is_palindrome(char *s)
{
	int len, i = 0;

	if (!(*s))
	{
		return (1);
	}
	len = _strlen_recursion(s);
	return (is_pal(s, len, i));
}
