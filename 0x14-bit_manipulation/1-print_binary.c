#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @num: The input integer to convert into binary.
 *
 * Description: This function prints the binary representation of a given
 * integer without using arrays, malloc, %, and /. It recursively prints
 * the binary bits of the input integer from the most significant bit to the
 * least significant bit.
 */
void print_binary(unsigned long int num)
{
	if (num == 0)
	{
		_putchar('0');
		return;
	}

	if (num > 1)
		print_binary(num >> 1);

	_putchar((num & 1) + '0');
}
