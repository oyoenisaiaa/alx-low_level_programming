#include "main.h"
/**
 * _strstr - function that locates a substring
 * @needle: substring
 * @haystack: string
 * Return: a pointer to the beginning of substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
