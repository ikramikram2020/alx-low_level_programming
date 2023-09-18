
#include "main.h"
/**
 * puts_half - print the other half
 * @str:needed params
 * Return:0
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i])
	{
		i++;
	}
	i--;
	j = i / 2;
	i = 0;
	while (str[i])
	{
		if (i > j)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
