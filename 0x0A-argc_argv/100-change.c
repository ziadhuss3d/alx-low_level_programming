#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum numbers of coins
 * to make change for an amount of money.
 *
 * @argc: number args
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int i, change = 0, coins = atoi(argv[1]);
	int subunits[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (coins >= subunits[i])
		{
			change += coins / subunits[i];
			coins = coins % subunits[i];
			if (coins % subunits[i] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", change);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
