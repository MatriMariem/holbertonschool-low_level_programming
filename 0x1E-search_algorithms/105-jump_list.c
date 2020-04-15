#include "search_algos.h"
#include <math.h>
/**
 * jump_list - a function that searches for a value
 * in a sorted singly linked list of integers using the Jump search algorithm
 * @list: the head
 * @size: size of the linked list
 * @value: the value to search for
 * Return: the address of the node or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, j, index;

	jump = (size_t)sqrt(size);
	if (!list)
		return (NULL);
	for (index = jump; index < size; index += jump)
	{
		printf("Value checked at index [%ld] = [%d]\n", index, array[index]);
		if (value == array[index]
			|| ((index + jump >= size)
			|| (value == array[index + jump]))
			|| (value > array[index] && value < array[index + jump]))
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
					index, index + jump);
			for (j = index; j < size && j <= index + jump; j++)
			{
				printf("Value checked array[%ld] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
	}
	return (-1);
}
