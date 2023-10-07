#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function to reallocate memory block using malloc and free
 * @ptr: pointer to the memory previously allocated by malloc
 * @old_size: size of the allocated space for ptr
 * @new_size: the new size of the new memory block
 *
 * Return: the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *result;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		result = malloc(new_size);
		if (result == NULL)
			return (NULL);
		return (result);
	}

	result = malloc(new_size);
	if (result == NULL)
		return (NULL);

	for (x = 0; x < old_size && x < new_size; x++)
		result[x] = ((char *)ptr)[x];

	free(ptr);

	return (result);
}
