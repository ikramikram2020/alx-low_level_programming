#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function to print numbers, followed by a new line.
 * @separator: separator to print between numbers
 * @n: number of numbers to print
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a_list;

	va_start(a_list, n);

	for (i = 0; i < n; i++)
	{
		if (i != n - 1 && separator != NULL)
			printf("%d%s", va_arg(a_list, int), separator);
		else
			printf("%d", va_arg(a_list, int));

	}
	printf("\n");
	va_end(a_list);

}
