#include "lists.h"
#include <stdlib.h>
/**
*add_nodeint - adds a new node at the beginning of a list
*@head: pointer to head of list
*@n: the data of the new node
*Return: pointer to the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (0);
new->n = n;
if (*head == '\0')
{
new->next = '\0';
*head = new;
}
else
{
new->next = *head;
*head = new;
}
return (new);
}
