#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
* add_node - adds a new node at the beginning of a list_t list
*@head: pointer to pointer to our linked list
*@str: pointer to string in previous first node
*Return: address of the new element/node
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
new = malloc(sizeof(list_t));
if (new == '\0')
{
return (0);
}
new->str = strdup(str);
new->len = *head->len;
new->next = *head;
*head = new;
return (new);
}
