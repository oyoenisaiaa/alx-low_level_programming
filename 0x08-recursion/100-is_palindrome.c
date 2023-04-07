#include "main.h"

int pal_check(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - a function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: the string
 * Return: 1 if a palindrome or 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pal_check(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: the string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * pal_check - a function that checks
 * the string for palindrome
 * @s: the string
 * @i: iterative
 * @len: string length
 * Return: 1 if a palindrome or 0 if not
 */

int pal_check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (pal_check(s, i + 1, len - 1));
}
