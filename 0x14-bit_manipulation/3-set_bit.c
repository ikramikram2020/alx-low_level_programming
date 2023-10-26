#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the input integer where the bit will be set.
 * @index: The index of the bit to set (0-based).
 *
 * Return: 1 if successful, or -1 if an error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (n == NULL || index > 63)
return (-1);

*n |= (1UL << index);
return (1);
}

