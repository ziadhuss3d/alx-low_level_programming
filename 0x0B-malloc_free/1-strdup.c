#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to new space allocated in the memory
 * @str: string to copy
 *
 * Return: pointer to the new string
 */
char *_strdup(char *str)
{
	char *sec;
	int j, size;

	if (!str)
	{
		return (NULL);
	}

	for (size = 0; str[size]; size++)
	{
		;
	}

	sec = malloc(sizeof(char) * (size + 1));
	if (!sec)
	{
		return (NULL);
	}

	for (j = 0; j < size; j++)
	{
		sec[j] = str[j];
	}

	sec[j] = '\0';

	return (sec);
}
