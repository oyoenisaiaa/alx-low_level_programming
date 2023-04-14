#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * The array created should contain all the values
 * from min (included) to max (included), ordered from min to max
 * If min > max, return NULL
 * If malloc fails, return NULL
 * @min: lowest value/int
 * @max: highest integer number
 * Return: array or NULL
 */

int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
