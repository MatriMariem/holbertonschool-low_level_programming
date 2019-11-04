#include "lists.h"
/**
*listint_len - counts the number of nodes in a singly linked list
*@h: the head of the list
*Return: the number of nodes
*/
size_t listint_len(const listint_t *h)
{
const listint_t *tmp;
size_t count = 0;
tmp = h;
if (h == '\0')
return (0);
while (tmp)
{
count++;
tmp = tmp->next;
}
return (count);
}
