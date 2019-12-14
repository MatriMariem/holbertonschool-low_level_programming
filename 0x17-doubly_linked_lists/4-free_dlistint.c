#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head of the doubly linked list
 */

void free_dlistint(dlistint_t *head)
{

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
