#include "main.h"

/**
 * string_nconcat - concat string
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of strings to concatenate
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *rslt;
	unsigned int k, l, s1_size, s2_size;

	if (s1 == 0)
	s1 = "";
	if (s2 == 0)
	s2 = "";

	for (s1_size = 0; s1[s1_size] != '\0'; s1_size++)
		;

	for (s2_size = 0; s2[s2_size] != '\0'; s2_size++)
		;
	rslt = malloc(s1_size + n + 1);
	if (rslt == NULL)
	{
		return (NULL);
	}

	for (k = 0; s1[k] != '\0'; k++)
		rslt[k] = s1[k];

	for (l = 0; l < n; l++)
	{
		rslt[k] = s2[l];
		k++;
	}

	rslt[k] = '\0';
	return (rslt);
}
