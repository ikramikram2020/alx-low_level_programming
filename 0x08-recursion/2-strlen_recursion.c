#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string using recursion
 * @s: The input string
 * This function can calculates the length of a
 * string by using  recursively
 *  Base case: if the current character is the null terminator, return 0
 *  Recursively call _strlen_recursion with the next character
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == 0)
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
