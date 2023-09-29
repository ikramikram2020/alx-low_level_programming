#include "main.h"

/**
 * is_divisible - checks if a number has a devisor in the lower ones
 * @num: the number
 * @divisor: the divisor
 * Return: 1 if a divisor is not found and 0 otherwise
 */

int is_divisible(int num, int divisor)
{
	if (divisor == 1)
		return (1);
	if (num % divisor == 0)
		return (0);
	return (is_divisible(num, --divisor));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number
 * Return: 1 if the number is prime and 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (is_divisible(n, n - 1));
}
