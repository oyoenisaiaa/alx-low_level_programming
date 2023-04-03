#include "main.h"

/**
 * _memset - function fills the first n bytes
 * @s: pointer
 * @b: the constant pointed with
 * @n: bytes of the memory area pointed to
 * Return: a pointer to the memory area s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p++ = b;
	}
	return (s);
}
