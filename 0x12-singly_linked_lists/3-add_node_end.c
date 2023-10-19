#include "lists.h"

/**
 * add_node_end - Appends a new node at the end of a list_t list.
 * @list: A pointer to the list where the new node will be added.
 * @data: The string data to be stored in the new node.
 *
 * Return: A pointer to the new element, or NULL if memory allocation fails.
 */
list_t *add_node_end(list_t **list, const char *data)
{
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(data);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = 0;
	while (data[new_node->len])
		new_node->len++;

	new_node->next = NULL;

	if (*list == NULL)
	{
		*list = new_node;
		return (new_node);
	}

	temp = *list;
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}

