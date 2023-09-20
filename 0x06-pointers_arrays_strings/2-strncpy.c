#include "main.h"
/**
 * *_strncpy - Function that copies a string.
 * @dest: string
 * @src: string
 * @n: number of chars to copy over
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
