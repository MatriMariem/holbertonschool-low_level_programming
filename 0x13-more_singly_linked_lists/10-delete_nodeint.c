#include "lists.h"
#include <stdlib.h>
/**
*delete_nodeint_at_index - deletes a node at a certain index in the list
*@head: pointer of the head
*@index: the index of the node to be deleted
*Return: 1 if succeeded, -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *previous;
listint_t *deleted;
unsigned int i = 0;

previous = *head;
if (*head == NULL)
{
return (-1);
}
else if (index == 0)
{
deleted = *head;
*head = (*head)->next;
free(deleted);
return (1);
}
else if (index == 1)
{
deleted = (*head)->next;
(*head)->next = deleted->next;
free(deleted);
return (1);
}
while (i < (index - 1))
{
previous = previous->next;
i++;
if (!previous)
{
return (-1);
}
}
deleted = previous->next;
previous->next = deleted->next;
free(deleted);

return (1);
}
