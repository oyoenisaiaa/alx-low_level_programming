#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @c: the character
 * @s: the string
 * Return: a pointer to the first occurrence of the character or null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}
