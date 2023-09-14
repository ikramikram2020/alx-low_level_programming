#include "main.h"

/**
 *_isdigit - Checks for a digit (0 through 9)
 *@c: The character to be checked
 *
 *Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57) /*ASCII values for '0' to '9' */
		return (1);
	else
		return (0);
}
