#include "main.h"

/**
 * array_range - make integer array
 * @min: min value
 * @max: max value
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *str;
	int j;

	if (min > max)
		return (NULL);

	str = malloc(sizeof(int) * (max - min + 1));
	if (str == NULL)
		return (NULL);

	for (j = 0; j <= max - min; j++)
		str[j] = min + j;

	return (str);
}
