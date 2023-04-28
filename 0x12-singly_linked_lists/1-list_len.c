#include <stdlib.h>
#include "lists.h"

/**
 * list_len - a function that returns
 * the number of elements in a linked list
 * e_c - element count
 * @h: pointer to the list - list_t
 * Return: number of elements in h i.e e_c
 */

size_t list_len(const list_t *h)
{
	size_t e_c = 0;

	while (h != NULL)
	{
		e_c++;
		h = h->next;
	}
	return (e_c);
}
