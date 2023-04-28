#include "lists.h"

/**
 * listint_len - a function that returns
 * the number of elements in a linked list
 * e_c - element count
 * @h: pointer to the list - listint_t
 * Return: number of elements in h i.e e_c
 */

size_t listint_len(const listint_t *h)
{
	size_t e_c = 0;

	while (h != NULL)
	{
		e_c++;
		h = h->next;
	}
	return (e_c);
}
