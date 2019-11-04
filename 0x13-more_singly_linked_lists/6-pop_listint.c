#include "lists.h"
#include <stdlib.h>
/**
* pop_listint - deletes the head node of a linked list
* @head: pointer of the head
* Return: the data of deleted head node
*/
int pop_listint(listint_t **head)
{
listint_t *storage;
int i;
if (*head == NULL)
return (0);

i = (*head)->n;
storage = (*head)->next;
free(*head);
*head = storage;
return (i);
}
