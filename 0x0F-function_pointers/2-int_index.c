#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer
 * where size is the number of elements in the array [array]
 * @array: the [array]
 * @size: number of elements in [array]
 * @cmp: pointer to function i.e func used to compare values
 * Return: index of the first element with no zero or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
