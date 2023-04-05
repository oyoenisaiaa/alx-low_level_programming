#include "main.h"

/**
 * _puts_recursion - a function that prints a string
 * followed by a new line
 * @s: the string pointed to
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar (*s);
		putchar('\n');
	}
	else
	{
		_puts_recursion(s + 1);
	}
}
