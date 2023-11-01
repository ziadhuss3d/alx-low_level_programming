#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two string
 * @s1: string One
 * @s2: string Two
 *
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *content;
	int size1, size2, k, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (size1 = 0; s1[size1]; size1++)
	{
		;
	}

	for (size2 = 0; s2[size2]; size2++)
	{
		;
	}

	content = malloc(sizeof(char) * (size1 + size2 + 1));
	if (!content)
	{
		return (NULL);
	}

	for (k = 0; k < size1; k++)
	{
		content[k] = s1[k];
	}

	for (j = 0; j < size2; j++)
	{
		content[k + j] = s2[j];
	}

	content[k + j] = '\0';

	return (content);
}
