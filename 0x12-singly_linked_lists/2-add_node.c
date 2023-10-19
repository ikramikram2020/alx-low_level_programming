#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @list: A pointer to the list to which the new node will be added.
 * @str: The string to be stored in the new node.
 *
 * This function creates a new node and adds it to the beginning of the given
 * list. It stores the provided string and its length in the new node.
 *
 * @list: A pointer to the list to which the new node will be added.
 * @str: The string to be stored in the new node.
 *
 * Return: A pointer to the new element, or NULL if memory allocation fails.
 */
list_t *add_node(list_t **list, const char *str)
{
	list_t *new_element;

	new_element = (list_t *)malloc(sizeof(list_t));

	if (new_element == NULL)
		return (NULL);

	new_element->str = strdup(str);
	new_element->len = strlen(str);
	new_element->next = *list;
	*list = new_element;
	return (new_element);
}

