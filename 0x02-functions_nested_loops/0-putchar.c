#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char me [] = "_putchar\n";
	int i;

	for (i = 0; me[i] != '\0'; i++)
	{
		_putchar(me[i]);
	}

	return (0);
}
