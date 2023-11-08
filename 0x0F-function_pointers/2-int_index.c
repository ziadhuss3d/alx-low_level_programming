/**
 * int_index - searche for the integer
 * @array: array of int
 * @size: the size of array
 * @cmp: function to compare
 *
 * Return: the integer index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
