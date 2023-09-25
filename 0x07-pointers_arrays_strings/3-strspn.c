#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring.
 * @s: type char returns the number of bytes
 * @accept: bytes from accept
 * Return: return x
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int str;
	int k, a, z;

	k = 0;
	while (s[k] != '\0')
	{
		z = 0;
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[k] == accept[a])
			{
				z = 1;
			}
		}
		a = 0;
		if (z == 0)
			break;
		str++;
		k++;
	}
	return (k);
}
