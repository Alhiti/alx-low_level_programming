#include "main.h"

/**
 * _isalpha - Return 1 if letter is alphabet, 0 if not.
 * @c: char type letter
 * Return: 1 if alphabpet, 0 if .
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
