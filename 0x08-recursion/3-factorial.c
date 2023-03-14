#include "main.h"

/**
 * factorial - return factorila of int
 * @n: int
 * Return: the result of calculation
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
