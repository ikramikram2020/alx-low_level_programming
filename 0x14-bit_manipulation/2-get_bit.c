#include "main.h"

/**
 * get_bit - Gets the value of a bit at a specific index.
 * @number: The input decimal number.
 * @bit_index: The index of the bit to check (0-based).
 *
 * Description: This function retrieves the value
 * within the given decimal number. The index should be in the range [0, 63].
 *
 * Return: The value (0 or 1) of the bit
 *
 */
int get_bit(unsigned long int number, unsigned int bit_index)
{
	int bit_value;

	if (bit_index > 63)
		return (-1);

	bit_value = (number >> bit_index) & 1;

	return (bit_value);
}
