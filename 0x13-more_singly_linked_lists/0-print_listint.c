#include "lists.h"

/**
 * print_list - a function that prints
 * all elements of a list - listint_t
 * @h: head list pointer
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		i++;
	}
	return (i);
}
