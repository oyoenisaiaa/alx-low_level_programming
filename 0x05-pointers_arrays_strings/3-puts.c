#include "main.h"

/**
 * _puts: function that prints a string
 * followed by a new line, to stdout
 * @str: string to print
 * Return: null
 */

void _puts(char *str)
{
	while (*str != '\0')
	{

		-putchar(*str++);
	}
	{
		_putchar('\n');
	}
}
