#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: char that checks the length of a string
 * Return: always 0;
 */
int _strlen(char *s)
{
	int a = 0;
	/* in C, we start to count from 0*/
	for (; *s++;)
	a++;
	return (a);
}
