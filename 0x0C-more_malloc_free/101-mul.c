#include "main.h"
#include <stdio.h>
#include <string.h>


void _result(int *rslt, int size);
int isNbr(char *str);

/**
 * main - multiply positive numbers
 * @c: args number
 * @v: args array
 * Return: 0
 */
int main(int c, char **v)
{
	int k, l, n1_size, n2_size;
	int *pw;

	if (c != 3 || !isNbr(v[1]) || !isNbr(v[2]))
	{
		printf("Error\n");
		exit(98);
	}

	n1_size = strlen(v[1]);
	n2_size = strlen(v[2]);

	pw = calloc(n1_size + n2_size, sizeof(int));
	if (pw == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (k = n1_size - 1; k >= 0; k--)
	{
		for (l = n2_size - 1; l >= 0; l--)
		{
			int mul = (v[1][k] - '0') * (v[2][l] - '0');

			int sum = pw[k + l + 1] + mul;

			pw[k + l] += sum / 10;
			pw[k + l + 1] = sum % 10;
		}
	}

	_result(pw, n1_size + n2_size);
	free(pw);
	return (0);
}

/**
 * isNbr - check string if its a number
 * @str: string to check
 * Return: if number 1 else 0
 */
int isNbr(char *str)
{
	int j;

	for (j = 0; str[j]; j++)
		if (str[j] < '0' || str[j] > '9')
			return (0);
	return (1);
}

/**
 * _result - prints multiplication result
 * @rslt: integer array
 * @size:  result length
 * Return: void
 */
void _result(int *rslt, int size)
{
	int j;

	for (j = 0; j < size && rslt[j] == 0; j++)
		;

	if (j == size)
		printf("0");

	for (; j < size; j++)
		printf("%d", rslt[j]);

	printf("\n");
}
