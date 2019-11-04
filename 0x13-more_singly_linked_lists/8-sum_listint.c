#include "lists.h"
/**
*sum_listint - returns the sum of all the data (n) of a listint_t linked list
*@head: the head of the list
*Return: the sum of all nodes data
*/
int sum_listint(listint_t *head)
{
int sum = 0;
const listint_t *tmp;
tmp = head;
if (head == '\0')
return (0);
while (tmp)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}
