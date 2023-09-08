#include <stdio.h>
/**
 * main - print lowercase and uppercase letters from a to z
 * Return:0
 */
int main(void)
{
	int letter = 97;

	while (letter <= 122)
	{
		putchar((char) letter);
		letter++;
	}

	letter = 65;

	while (letter <= 90)
	{
		putchar((char) letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
