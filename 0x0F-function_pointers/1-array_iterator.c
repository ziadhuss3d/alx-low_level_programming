#include <stdio.h>

/**
 * array_iterator - run func that was given in the params
 *
 * @array: the array
 * @size: the array size
 * @action: the func pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;

	while (size--)
		action(*array++);
}
