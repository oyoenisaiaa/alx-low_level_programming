#include "lists.h"

/**
 * add_nodeint - a function that adds a new node
 * at the beginning of the list - listint_t
 * @n: integer added to the new node
 * @head: double pointer to list head
 * Return: the address of the new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = *head;
	*head = p;

	return (p);
}
