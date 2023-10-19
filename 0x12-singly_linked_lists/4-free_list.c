#include "lists.h"

/**
 * free_list - wipes all the elements of a list from memory
 * @head: a pointer to the first element of the list
 *
 * Return: Nothing
*/
void free_list(list_t *head)
{
	if (head->next != NULL)
	{
		free_list((head->next));
	}
	free(head->str);
	free(head);
}
