#include "main.h"

/**
 * _calloc - allocate memory for array
 * @nmemb: number of element
 * @size: size of element
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);
	if (str == 0)
		return (NULL);

	for (j = 0; j < nmemb * size; j++)
		str[j] = 0;

	return (str);
}
