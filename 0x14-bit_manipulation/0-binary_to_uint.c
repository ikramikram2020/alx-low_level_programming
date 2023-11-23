#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @binary: Input binary string containing 0s and 1s.
 *
 * Return: The converted unsigned integer, or 0 if there are any errors.
 */
unsigned int binary_to_uint(const char *binary)
{
	int index = 0;
	unsigned int result = 0;

	if (binary == NULL)
		return (0);

	for (index = 0; binary[index]; index++)
	{
		if (binary[index] < '0' || binary[index] > '1')
			return (0);
		result = result << 1;
		if (binary[index] == '1')
			result += 1;
	}
	return (result);
}
