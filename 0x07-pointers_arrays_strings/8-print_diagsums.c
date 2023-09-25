#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals.
 * @a: the 2d array
 * @size: the size of the array
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	unsigned int sum_1 = 0, sum_2 = 0;

	for (; i < size; i++)
	{
		sum_1 += a[(size * i) + i];
		sum_2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum_1, sum_2);
}
