#include "lists.h"
#include <stdlib.h>
/**
* free_listint2 - frees a linked list
* @head: head of the list
*/
void free_listint2(listint_t **head)
{
listint_t *storage;
if (head == NULL)
return;
while (*head)
{
storage = (*head)->next;
free(*head);
*head = storage;
}
}
