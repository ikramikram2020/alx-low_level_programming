#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @list: A pointer to the list where the new node will be added.
 * @data: The string data to be stored in the new node.
 *
 * This function creates a new node and appends it to the end of the given list.
 * It stores the provided string data and its length in the new node.
 *
 * @list: A pointer to the list where the new node will be added.
 * @data: The string data to be stored in the new node.
 *
 * Return: A pointer to the new element, or NULL if memory allocation fails.
 */
list_t *add_node_end(list_t **list, const char *data)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(data);

	if (new_node->str == NULL)
	{
		free(new_node);
		return NULL;
	}

	new_node->len = strlen(data);
	new_node->next = NULL;

	if (*list == NULL)
		*list = new_node;
	else
	{
		list_t *current = *list;

		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return new_node;
}

