#include "main.h"
/**
 * _strcpy - copy a string
 * @dest: string to copy to
 * @src:source to copy from
 * Return:copy of src
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
