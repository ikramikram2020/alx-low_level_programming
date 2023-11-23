#include "main.h"

/**
 * flip_bits - Count differing bits between two numbers.
 * @n: The first number.
 * @m: The second number.
 *
 * Description:
 * This function calculates the number of bits that need to be flipped to
 * convert one number into another. It performs a bitwise XOR operation to
 * find the differing bits between the numbers and then counts the number
 * of set (1) bits in the result.
 *
 * Return:
 * The count of differing bits, representing the number of bits that
 * need to be flipped to transition from 'n' to 'm'.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m; /* Find differing bits. */
	unsigned int bit_diff_count = 0; /* Initialize the count. */

	while (xor_result != 0)
	{
		bit_diff_count += xor_result & 1; /* Count each set bit. */
		xor_result >>= 1; /* Shift right to check the next bit. */
	}

	return (bit_diff_count); /* Return the count of differing bits. */
}
