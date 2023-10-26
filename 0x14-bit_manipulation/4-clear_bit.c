#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the input integer where the bit will be cleared.
 * @index: The index of the bit to clear (0-based, from right to left).
 *
 * Description:
 * This function clears (sets to 0) the bit at the specified index within
 * the input integer pointed to by 'n'.
 *
 * Return: 1 if the operation was successful, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int a = *n;
	unsigned long int temp;

	if (index > 63)
		return (-1);
	if (!n)
		return (-1);
	temp = 1 << index;
	temp = ~temp;
	a = a & temp;
	*n = a;

	return (1);
}
