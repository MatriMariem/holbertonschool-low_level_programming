#include "lists.h"
#include <stdlib.h>
/**
*get_nodeint_at_index - returns the nth node of a list
*@head: pointer to first node
*@index: the index of the returned node
*Return: pointer to the nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *nth;

if (head == '\0')
return (0);

nth = head;
while (i < index)
{
nth = nth->next;
i++;

if (!nth)
return (0);

}

return (nth);
}
