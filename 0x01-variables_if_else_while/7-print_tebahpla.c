#include <stdio.h>
/**
 * main - prnts lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for (i = (char)122; i >= (char)97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
