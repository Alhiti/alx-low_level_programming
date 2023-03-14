#include "main.h"

/**
 * is_prime_number - check if int is prime number
 * @n: int number
 * Return: 1 if prime 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (helper(2, n));
}

/**
 * helper - helps to check the prime number
 * @n: int number
 * @i: counter
 * Return: 1 if prime 0 otherwise
 */

int helper(int i, int n)
{
	if (n == i)
		return (1);
	else if (i < n && (n % i) == 0)
		return (0);
	else
		return (helper(i + 1, n));
}
