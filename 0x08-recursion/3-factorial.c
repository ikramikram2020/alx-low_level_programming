#include "main.h"

/**
 * factorial_helper - Helper function for calculating factorial
 * @n: The input number
 * @result: The current result of the factorial calculation
 *
 * Return: The factorial of n
 */
int factorial_helper(int n, int result)
{
	if (n == 0)
	{
		return (result);
	}
	return (factorial_helper(n - 1, n * result));
}
/**
 * factorial - Calculates the factorial of a given number
 * @n: The input number
 *
 * Return: The factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (factorial_helper(n, 1));
}
