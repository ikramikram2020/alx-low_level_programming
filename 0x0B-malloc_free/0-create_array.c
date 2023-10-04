#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  create_array - creates an array of chars, and initializes it.
 *  @size: the size of the array
 *  @c: the character
 *  Return: NULL if the size is 0 and a pointer to the array otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int z;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (z = 0; z < size; z++)
		p[z] = c;
	return (p);
}
