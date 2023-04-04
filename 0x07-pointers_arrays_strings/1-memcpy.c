#include "main.h"

/**
 * _memcpy - function copies n bytes
 *@src: the memory area
 *@dest: the memory destination
 *@n: bytes to be copied
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
