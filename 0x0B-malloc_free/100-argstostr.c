#include <stdlib.h>

/**
 * argstostr - concatenates all args of the program
 * @ac: number of args
 * @av: array args
 *
 * Return: pointer to a new string if non then NULL
 */
char *argstostr(int ac, char **av)
{
	char *ch;
	int a, b, c, size;

	if (!ac || !av)
		return (NULL);

	for (a = 0, size = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			size++;
		size++;
	}

	ch = malloc(sizeof(char) * (size + 1));
	if (ch == NULL)
		return (NULL);

	for (a = 0, c = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++, c++)
			ch[c] = av[a][b];
		ch[c] = '\n';
		c++;
	}
	ch[c] = '\0';

	return (ch);
}
