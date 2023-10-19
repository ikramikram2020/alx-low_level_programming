#include "lists.h"

/**
 * add_nodeint_end - Adds a new node with an integer value to the end of a
 *                   linked list of integers.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The integer value to be added to the new node.
 *
 * This function creates a new node with the given integer value and appends
 * it to the end of the linked list. If the list is empty, the new node becomes
 * the head of the list.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The integer value to be added.
 *
 * Return: A pointer to the new node, or NULL if memory allocation fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}

