#include "main.h"
#include <string.h>
/**
 * _strlen - Returns the length of a string.
 *
 * This function calculates the length of a string by iterating through
 * each character until the null terminator is encountered.
 *
 * @s: A pointer to a string.
 *
 * Return: The length of the string (number of characters).
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

