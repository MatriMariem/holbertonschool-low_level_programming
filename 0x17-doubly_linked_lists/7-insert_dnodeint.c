#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: pointer to head of doubly linked list
 * @idx: index of new node, starting from 0
 * @n: data of the new node
 * Return: address of the new node or NULL if the node doesn't exist
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int node = 0;
	dlistint_t *tmp = *h;
	dlistint_t *new;

	if (!h)
		return (0);
	if (!(*h) && idx)
		return (0);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	new->n = n;
	if (!(*h) && !idx)
	{
		*h = new;
		new->prev = NULL;
		new->next = NULL;
		return (new);
	}
	if (*h)
	{
		while (tmp)
		{
			if (node == idx)
			{
				new->prev = tmp->prev;
				new->next = tmp;
				(tmp->prev)->next = new;
				tmp->prev = new;
				return (new);
			}
			node++;
			tmp = tmp->next;
		}
	}
	free(new);
	return (0);
}
