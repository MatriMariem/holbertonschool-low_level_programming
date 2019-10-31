#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
* free_list - frees a list_t
*@head: pointer to our linked list
*/
void free_list(list_t *head)
{
list_t *storage;

while (head)
{
storage = head->next;
free(head->str);
free(head);
head = storage;
}

}
