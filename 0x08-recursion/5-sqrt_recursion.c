#include "main.h"

/**
 * sqrt_helper - Helper function to find the natural square root of a number
 * @n: The number to find the square root of
 * @guess: The current guess for the square root
 *
 * Return
 */
int sqrt_helper(int n, int guess)
{
	if (n < 0)
		return (-1); /* Error: Negative number */

	if (guess * guess == n)
		return (guess); /* Found the square root */

	if (guess * guess > n)
		return (-1); /* n doesn't have a natural square root */

	return (sqrt_helper(n, guess + 1)); /* Increment guess and continue */
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 0));
}

