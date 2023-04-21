#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * print a new line at the end of your function
 * @format: a list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ls;
	char c, *s;
	int i, j = 0;
	float f;

	va_start(ls, format);

	while (format != NULL && (format[j] != '\0'))
	{
		switch (format[j])
		{
			case 'c':
				c = va_arg(ls, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(ls, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(ls, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(ls, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
		}
		if (format[j + 1] != '\0' && (format[j] == 'c' ||
					format[j] == 'i' || format[j] == 'f' || format[j] == 's'))
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(ls);
}
