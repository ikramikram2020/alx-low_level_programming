#include "main.h"
/*
 * _strcat : this function used to connect two strings
 * @dest: the first char string
 * @src: the second char string
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
