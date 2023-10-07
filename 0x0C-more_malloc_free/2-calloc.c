#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function to allocate memory for an array
 * @nmemb: the numb of elements in array
 * @size: size of every element
 *
 * Return: a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = malloc(nmemb * size);
	if (result == NULL)
		return (NULL);

	for (a = 0; a < nmemb * size; a++)
		result[a] = 0;

	return (result);
}
