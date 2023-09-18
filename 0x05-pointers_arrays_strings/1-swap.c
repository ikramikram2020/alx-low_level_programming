#include "main.h"
#include <stdio.h>
/**
 * swap_int - Swaps the values of two integers.
 *
 * This function takes two integer pointers as its arguments and swaps the
 * values of the integers they point to.
 *
 * @a: A pointer to the first integer.
 * @b: A pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = c;
	*a = *b;
	*b = c;
}
