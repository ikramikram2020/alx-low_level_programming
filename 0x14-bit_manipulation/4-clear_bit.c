#include "main.h"

/**
 * clear_bit - Clears the value of a bit at a given index.
 * @n: A pointer to the input integer where the bit will be cleared.
 * @index: The index of the bit to clear (0-based).
 *
 * Return: 1 if successful, or -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63 || !n)
return (-1);

unsigned long int mask = 1UL << index;
*n = *n & ~mask;

return (1);
}

