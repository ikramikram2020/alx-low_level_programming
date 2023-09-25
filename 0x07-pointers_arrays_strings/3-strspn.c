#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string
 * @accept: the substring
 * Return: the index reached
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s && _strchr(accept, *s++))
		len++;

	return (len);
}
