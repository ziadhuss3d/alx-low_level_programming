#include "search_algos.h"
/**
 * linear_search - linear search algorithm
 * @array: pointer to the searched ary
 * @size: size of ary
 * @value: searched value
 * Return: the index where the value is located, or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t xyz;

	if (array == NULL)
		return (-1);

	for (xyz = 0; xyz < size; xyz++)
	{
		printf("Value checked array[%lu] = [%d]\n", xyz, array[xyz]);
		if (array[xyz] == value)
			return (xyz);
	}
	return (-1);
}
