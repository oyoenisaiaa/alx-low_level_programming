#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a function that returns a pointer to
 * a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: new / duplicate string
 * Return: pointer to the duplicated string or NULL
 */

char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	while ((dup_str[i] = str[i]) != '\0')
		i++;

	return (dup_str);
}
