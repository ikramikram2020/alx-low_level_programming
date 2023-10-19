#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list - A structure representing a singly linked list node.
 * @str: The string data held by the node.
 * @len: The length of the string.
 * @next: A pointer to the next node in the list.
 *
 * Description: This structure defines a node in a singly linked list,
 * where each node contains a string and its length. The 'next' pointer
 * links to the next node in the list.
 */

typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;

/* Function prototypes */
int _putchar(char c);
size_t print_list(const list_t *head);
size_t list_len(const list_t *head);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif



