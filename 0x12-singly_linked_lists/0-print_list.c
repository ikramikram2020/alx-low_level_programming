#include <stdio.h>
#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list_t list, along
 * with their lengths and values. If a value is NULL, it is represented as
 * (nil).
 *
 * @head: A pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		if (head->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", head->len, head->str);
		}
		head = head->next;
		count++;
	}
	return (count);
}

