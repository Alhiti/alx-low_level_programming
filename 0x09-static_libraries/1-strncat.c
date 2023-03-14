#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: first string
 * @src: second srting
 * @n: number
 * Return: concatenat string
 **/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	n = i + n;
	for (i = i, j = 0; i < n; i++, j++)
	{
		if (src[j] == '\0')
			break;
		dest[i] = src[j];
	}


	dest[i] = '\0';

	return (dest);
}
