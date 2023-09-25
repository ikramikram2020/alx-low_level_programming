#include "main.h"

/**
 * print_diagsums - prints the summ on the two diagonals of a square matrix
 * @a: the matrix
 * @size: the size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		sum2 = sum2 + a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
