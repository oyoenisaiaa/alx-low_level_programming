#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints
 * all elements in the list - list_t
 * If str is NULL, print [0] (nil)
 * @h: head list pointer
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}
	return (i);
}
