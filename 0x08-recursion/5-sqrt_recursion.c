#include "main.h"

/**
 * check - checks if a number has a natural square root
 * @a: the first potential square root to check
 * @b: the number which sqrt will be checked
 * Return: the sqrt of b or -1 if there is none
 */

int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - finds the squae root of a number
 * @n: the number which sqrt will be found
 * Return: the sqrt of the number and -1 if there is none
 */
int _sqrt_recursion(int n)
{
	return (check(1, n));
}
