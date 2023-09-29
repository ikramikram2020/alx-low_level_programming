#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @s: The input string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * is_palindrome_helper - Helper function to check if a string is a palindrome
 * @s: The input string
 * @start: The start index
 * @end: The end index
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] == s[end])
		return (is_palindrome_helper(s, start + 1, end - 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The input string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	if (length <= 1)
		return (1);

	return (is_palindrome_helper(s, 0, length - 1));
}

