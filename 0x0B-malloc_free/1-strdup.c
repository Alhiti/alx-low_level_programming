#include "main.h"
#include <stdlib.h>

/**
 * _strdup - fonctionn that cp string to a new array
 * @str: the string
 * Return: new array
 */


char *_strdup(char *str)
{
	char *ar;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	ar = malloc(i * sizeof(char) + 1);

	if (ar == NULL)
		return (NULL);

	for (i = 0; str[i] != 0; i++)
	{
		ar[i] = str[i];
	}

	ar[i] = '\0';
	return (ar);
}
