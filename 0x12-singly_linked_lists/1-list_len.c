#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
* list_len - counts number of elements of the linked list h
*@h: pointer to our linked list
*Return: number of nodes
*/
size_t list_len(const list_t *h)
{
size_t count = 0;
const list_t *tmp;
tmp = h;
if (h == '\0')
{
return (0);
}
while (tmp != '\0')
{
count++;
tmp = tmp->next;
}
return (count);
}
