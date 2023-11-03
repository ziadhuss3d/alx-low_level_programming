#include "main.h"

/**
 * *_realloc - allocate memory with malloc
 * @ptr: pointer memory
 * @old_size: size of old memory
 * @new_size: size of new memory
 *
 * Return: pointer to the memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pointer;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pointer = malloc(new_size);
		if (pointer == 0)
			return (NULL);
		return (pointer);
	}
	if (new_size > old_size)
	{
		pointer = malloc(new_size);
		if (pointer == 0)
			return (NULL);
		for (j = 0; j < old_size && j < new_size; j++)
			*((char *)pointer + j) = *((char *)ptr + j);
		free(ptr);
	}
	return (pointer);
}
