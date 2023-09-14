#include "main.h"

/**
  * print_square - Prints n squares according to n number of times
  * @size: The number of squares/numbers of times
  *
  *Return: empty
  */
void print_square(int size)
{
	int j, i;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar(35);
		}
	_putchar('\n');
	}
	if (size <= 0)
	_putchar('\n');
}
