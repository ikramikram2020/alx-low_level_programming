#include "main.h"

/**
*infinite_add -  a program that adds two numbers
*@n1: the first number to be added
*@n2: the second number to be added
*@r: a buffer that the function can use to store it's result
*@size_r: the size  of the buffer
*Return: the pointer to dest
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c, d, e, f, g, h;

	for (c = 0; n1[c]; c++)
		;
	for (d = 0; n2[d]; d++)
		;
	if (c > size_r || d > size_r)
		return (0);
	g = 0;
	for (c -= 1, d -= 1, e = 0; e < size_r - 1; c--, d--, e++)
	{
		h = g;
		if (c >= 0)
			h += n1[c] - '0';
		if (d >= 0)
			h += n2[d] - '0';
		if (c < 0 && d < 0 && h == 0)
		{
			break;
		}
		g = h / 10;
		r[e] = h % 10 + '0';
	}
	r[e] = '\0';
	if (c >= 0 || d >= 0 || g)
		return (0);
	for (e -= 1, f = 0; f < e; e--, f++)
	{
		g = r[e];
		r[e] = r[f];
		r[f] = g;
	}
	return (r);
}
