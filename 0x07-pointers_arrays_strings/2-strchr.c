#include "main.h"
#include <string.h>
/**
 * _strchr - locates a character in a string.
 * @s: the string to locate c from.
 * @c: the character to locate in s.
 * Return: a pointer to c in the string s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	do
	if (*s == c)
		return (s);
	while (*s++);

	return (NULL);
}
