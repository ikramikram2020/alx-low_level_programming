#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 *
 * @s: A pointer to a null-terminated string.
 */
void print_rev(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
for (int i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

