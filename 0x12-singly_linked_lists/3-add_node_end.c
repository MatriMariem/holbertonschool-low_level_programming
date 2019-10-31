#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
* add_node_end - adds a new node at the beginning of a list_t list
*@head: pointer to pointer to our linked list
*@str: pointer to string in previous first node
*Return: address of the new element/node
*/
list_t *add_node_end(list_t **head, const char *str)
{
int i = 0;
list_t *tmp;
list_t *new;
new = malloc(sizeof(list_t));
if (new == '\0' || str == '\0')
{
return (0);
}
while (str[i])
{
i++;
}
new->str = strdup(str);
new->len = i;
new->next = '\0';
if (*head == '\0')
{
*head = new;
}
else
{
tmp = *head;
while (tmp->next)
{
tmp = tmp->next;
}
tmp->next = new;
}
return (new);
}
