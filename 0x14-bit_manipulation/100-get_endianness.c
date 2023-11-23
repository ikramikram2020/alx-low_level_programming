#include "main.h"

/**
 * get_endianness - checks the endianness of the current system.
 *
 * Description:
 * This function determines whether the current system uses big-endian or
 * little-endian byte order for multibyte data storage. It does so by
 * creating an integer, num, with the value 1 and checking the value of the
 * least significant byte in the memory representation. If the least
 * significant byte is non-zero, the system is little-endian; otherwise, it's
 * big-endian.
 *
 * Return:
 * 1 if the system is little-endian.
 * 0 if the system is big-endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte_ptr = (char *)&num;

	if (*byte_ptr)
		return (1);
	return (0);
}

