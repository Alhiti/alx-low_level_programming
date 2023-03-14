#include "main.h"

/**
 * _islower - checks for lowercase character.
 * Description : Returns 1 if c is lowercase, Returns 0 otherwise.
 * @c: char type letter
 * Return: 1 if lowercase, 0 if not.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

