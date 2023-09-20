#include "main.h"

/**
*rot13 - a program that encodes a string using rot13
*@s: a string for encoding
*Return: address of s
*/
char *rot13(char *s)
{
	int a;
	int b;
	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (rot1[b] == *(s + a))
			{
				*(s + a) = rot2[b];
				break;
			}
		}
	}
	return (s);
}
