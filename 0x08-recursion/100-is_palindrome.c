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



int is_pal(char *s, int len)
{
	if (len >= 2)
	{
                printf("first %c\n", *s);
                printf("last %c\n", *(s + len - i));
                if (*s != *(s + len - i))
                {
                        chk = 0;
                        return (chk);
                }
                else if (*s == *(s + len - i))
                {
                        chk = 1;
                }
        }

}


/**
 * is_palindrome - Checks is string is palindrom
 * @s: the string in question
 * Returns: 1 if palindrome 0 if not
 */

int is_palindrome(char *s)
{
	int len, chk = 1;

	len = _strlen_recursion(s);
	chk = is_pal(s, len);
	return (chk);

}

int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}
