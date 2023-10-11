#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - execute a function given as a parameter
 * on each element of an array
 * @array: given array
 * @size: array size
 * @action: function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
