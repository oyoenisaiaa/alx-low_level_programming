#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function that frees a list - list_t
 * @head: pointer to the head list
 */

void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
