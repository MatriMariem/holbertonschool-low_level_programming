#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
* print_list - prints all elements of the linked list h
*@h: pointer to our linked list
*Return: number of nodes
*/
size_t print_list(const list_t *h)
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
if (tmp->str == '\0')
{
printf("[0] (nil)\n");
count++;
tmp = tmp->next;
}
else
{
printf("[%u] %s\n", tmp->len, tmp->str);
count++;
tmp = tmp->next;
}
}
return (count);
}
