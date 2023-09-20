#include "main.h"

/**
 * string_toupper - converts string to uppercase
 * Return: the uppercase string
 */
char *string_toupper(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - ('a' - 'A');
		}
		i++;
	}
	return (s);
}
