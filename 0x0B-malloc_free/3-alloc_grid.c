#include <stdlib.h>

/**
 * alloc_grid - returns a pointer for a 2d array integers
 * @width: grid width
 * @height: grid height
 *
 * Return: pointer to 2d array integer
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **gr;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	gr = malloc(sizeof(int *) * height);
	if (!gr)
	{
	return (NULL);
	}

	for (a = 0; a < height; a++)
	{
	gr[a] = malloc(sizeof(int) * width);
		if (gr[a] == NULL)
		{
			for (b = 0; b < a; b++)
				free(gr[b]);
			free(gr);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			gr[a][b] = 0;
	}
	return (gr);
}
