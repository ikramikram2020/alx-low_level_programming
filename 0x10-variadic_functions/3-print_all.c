#include "variadic_functions.h"

/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list my_list;
	int i = 0;
	char *str = 0, *sep = ", ";


	va_start(my_list, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(my_list, int));
				break;
			case 'i':
				printf("%d", va_arg(my_list, int));
				break;
			case 'f':
				printf("%f", va_arg(my_list, double));
				break;
			case 's':
				str = va_arg(my_list, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1])
			printf("%s", sep);
		i++;
	}
	printf("\n");
}
