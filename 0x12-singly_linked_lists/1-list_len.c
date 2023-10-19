#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @head: A pointer to the head of the linked list.
 *
 * This function iterates through the linked list and counts the number of
 * elements in the list.
 *
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *head)
{
	size_t num_elements = 0;
	const list_t *current = head;

	while (current != NULL)
	{
		num_elements++;
		current = current->next;
	}

	return (num_elements);
}

