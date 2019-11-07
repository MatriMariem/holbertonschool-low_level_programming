#include "lists.h"
#include <stdlib.h>
/**
*reverse_listint - reverses a list
*@head: pointer of the head
*Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous;
listint_t *after;
if (head == NULL || (*head) == NULL)
return (0);
if ((*head)->next == NULL)
return (*head);

previous = NULL;
after = (*head)->next;

while (after)
{
(*head)->next = previous;
previous = (*head);
(*head) = after;
after = after->next;
}

(*head)->next = previous;

return (*head);
}
