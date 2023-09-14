#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int row, colomn;

	for (row = 1; row <= size; row++)
	{
		for (colomn = 1; colomn <= size; colomn++)
		{
			if (colomn <= size - row)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		putchar('\n');
}
