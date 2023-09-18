#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 *
 * @str: A pointer to a null-terminated string.
 *
 * Description:
 * This function takes a pointer to a null-terminated string as input and
 * prints the string to the standard output, followed by a new line. It
 * continues printing characters until it reaches the null terminator ('\0')
 * at the end of the string.
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

