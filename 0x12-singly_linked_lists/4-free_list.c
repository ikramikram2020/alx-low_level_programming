#include "lists.h"

/**
 * free_list - deletes all the elements of the Linkedlist
 * @head: pointer to the header of the linked List
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
