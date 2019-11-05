#include "lists.h"
/**
* print_listint_safe - prints all elements of a listint_t list
* @head: head of the linked list
* Return: number of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *tmp;

tmp = head;
if (head == '\0')
{
return (0);
}
while (tmp)
{
printf("%p %d\n", tmp, tmp->n);
count++;
tmp = tmp->next;
}
return (count);
}
