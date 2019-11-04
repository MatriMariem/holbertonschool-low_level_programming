#include "lists.h"
#include <stdlib.h>
/**
* free_listint - frees a linked list
* @head: head of the list
*/
void free_listint(listint_t *head)
{
listint_t *storage;
while (head)
{
storage = head->next;
free(head);
head = storage;
}
}
