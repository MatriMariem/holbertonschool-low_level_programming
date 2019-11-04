#include "lists.h"
#include <stdlib.h>
/**
*insert_nodeint_at_index - inserts a new node at a certain index in the list
*@head: pointer of the head
*@idx: the index of the new inserted node
*@n: data of the new node
*Return: address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *previous;
listint_t *new;
unsigned int i = 0;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (0);
new->n = n;
previous = *head;
if (*head == NULL && idx != 0)
{
return (0);
}
else if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
else if (idx == 1)
{
new->next = (*head)->next;
(*head)->next = new;
}
while (i < (idx - 1))
{
previous = previous->next;
i++;
if (!previous)
{
free(new);
return (0);
}
}
new->next = previous->next;
previous->next = new;

return (new);
}
