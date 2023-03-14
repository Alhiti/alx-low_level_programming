#include "main.h"

/**
 * _abs - Return absolut value of a number.
 * @n: the number.
 * Return: absolut value of a number.
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
