#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	return (mysqrt(n, 1));
}


/**
 * mysqrt - helper function to solve _sqrt_recursion
 * @n: number to determine if square root
 * @i: incrementer to compare against `c`
 * Return: square root if natural square root, or -1 if none found
 */

int mysqrt(int n, int i)
{
	int c;

	c = i * i;
	if (c > n)
		return (-1);
	else if (c == n)
		return (i);
	else
		return (mysqrt(n, i + 1));
}
