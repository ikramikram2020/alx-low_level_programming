#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: the first string
 * @s2: the second string
 * Return: the difference between the two  strings
 */  


int _strcmp(char *s1, char *s2)
{
	while (*s1 && (s1 == s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
