#include "lists.h"
#include <stdlib.h>

/**
*add_nodeint_end - adds a new node at the end of a singly linked list
*@head: pointer of the head of the list
*@n: the int data of the new node
*Return: the address of the new node, or NULL if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *tmp = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (0);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
}
else
{
while (tmp->next)
{
tmp = tmp->next;
}
tmp->next = new;
}
return (new);
}
