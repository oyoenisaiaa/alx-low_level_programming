#include "main.h"

/**
 * _puts -  prints a string in reverse, followed by a new line
 * @str: the string to print
 */

void _puts(char *str)
{
	int a, b;

	b = 0;

	while (s[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; 1--)
	{
		_putchar(s[a]);
	}
	_putchar('\n);
}
